#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>

static void		_handle_width(t_bundle *bundle, wchar_t *str, int len)
{
	char	*tmp;

	if (ft_strchr(bundle->sub_specifiers->flag, '-'))
		wstr_print(bundle, str, len);
	if (bundle->sub_specifiers->width > len)
	{
		tmp = ft_strnew(bundle->sub_specifiers->width);
		if (ft_strchr(bundle->sub_specifiers->flag, '0') &&\
			!ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_memset((void*)tmp, '0', bundle->sub_specifiers->width - len);
		else
			ft_memset((void*)tmp, ' ', bundle->sub_specifiers->width - len);
		bundle->cpy2buffer(bundle, tmp, ft_strlen(tmp));
		free(tmp);
	}
	if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
		wstr_print(bundle, str, len);
}

static wchar_t		*_oof(t_bundle *bundle, wchar_t *str, int *len)
{
	if (!str && (bundle->sub_specifiers->precision > 5
		|| bundle->sub_specifiers->precision == -1))
		return ((wchar_t*)ft_strcpy(ft_strnew(6), "(null)"));
	else if (!str && bundle->sub_specifiers->precision <= 5)
	{
		*len = bundle->sub_specifiers->precision;
		return ((wchar_t*)ft_strncpy(ft_strnew(6),
			"(null)", bundle->sub_specifiers->precision));
	}
	else if ((*len = ft_strlen((char*)str)) > bundle->sub_specifiers->precision
		&& bundle->sub_specifiers->precision >= 0)
		*len = bundle->sub_specifiers->precision;
	return (str);
}

void			char_ptr_parser(void *self)
{
	t_bundle			*bundle;
	wchar_t				*str;
	int					len;
	int					to_free;

	bundle = (t_bundle *)self;
	if (bundle->sub_specifiers->specifier == 'S')
		ft_strcpy(bundle->sub_specifiers->length, "l");
	str = char_length_modifier_handler(bundle);
	len = 6;
	to_free = 0;
	if (!str)
		to_free = 1;
	str = _oof(bundle, str, &len);
	if (bundle->sub_specifiers->width <= len)
		wstr_print(bundle, str, len);
	else
		_handle_width(bundle, str, len);
	if (to_free)
//		free(str);
}
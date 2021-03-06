#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <wchar.h>

static void		_handle_width(t_bundle *bundle, char *str)
{
	char	*tmp;

	if (ft_strchr(bundle->sub_specifiers->flag, '-'))
		bundle->cpy2buffer(bundle, str, ft_strlen(str));
	//wchar_print(bundle, str, 1);
	if (bundle->sub_specifiers->width > 1)
	{
		tmp = ft_strnew(bundle->sub_specifiers->width);
		if (ft_strchr(bundle->sub_specifiers->flag, '0')\
			&& !ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_memset((void*)tmp, '0',
				bundle->sub_specifiers->width - ft_strlen(str));
		else
			ft_memset((void*)tmp, ' ',
				bundle->sub_specifiers->width - ft_strlen(str));
		bundle->cpy2buffer(bundle, tmp, ft_strlen(tmp));
		free(tmp);
	}
	if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
		bundle->cpy2buffer(bundle, str, ft_strlen(str));
	//wchar_print(bundle, str, 1);
}

void			char_parser(void *self)
{
	t_bundle		*bundle;
	char			*str;

	bundle = (t_bundle *)self;
/*	if (bundle->sub_specifiers->specifier == 'C')
		ft_strcpy(bundle->sub_specifiers->length,"l");*/
	if (bundle->sub_specifiers->specifier != 'c' &&\
		bundle->sub_specifiers->specifier != 'C')
	{
		str = ft_strnew(2);
		str[0] = bundle->sub_specifiers->specifier;
	}
	else 
		str = char_length_modifier_handler(bundle);
	if (bundle->sub_specifiers->width <= 1)
		bundle->cpy2buffer(bundle, str, ft_strlen(str));
	//wchar_print(bundle, str, 1);
	else if (bundle->sub_specifiers->width > 1)
		_handle_width(bundle, str);
	free(str);
}

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <wchar.h>

static void		_handle_width(t_bundle *bundle, wchar_t *str)
{
	char	*tmp;

	if (ft_strchr(bundle->sub_specifiers->flag, '-'))
		wchar_print(bundle, str, 1);
	if (bundle->sub_specifiers->width > 1)
	{
		tmp = ft_strnew(bundle->sub_specifiers->width);
		if (ft_strchr(bundle->sub_specifiers->flag, '0')\
			&& !ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_memset((void*)tmp, '0', bundle->sub_specifiers->width - 1);
		else
			ft_memset((void*)tmp, ' ', bundle->sub_specifiers->width - 1);
		bundle->cpy2buffer(bundle, tmp, ft_strlen(tmp));
		free(tmp);
	}
	if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
		wchar_print(bundle, str, 1);
}

void			char_parser(void *self)
{
	t_bundle			*bundle;
	wchar_t			*str;

	bundle = (t_bundle *)self;
	if (bundle->sub_specifiers->specifier == 'C')
		ft_strcpy(bundle->sub_specifiers->length,"l");
	str = char_length_modifier_handler(bundle);
	if (bundle->sub_specifiers->width <= 1)
		wchar_print(bundle, str, 1);
	else if (bundle->sub_specifiers->width > 1)
		_handle_width(bundle, str);
	free(str);
}

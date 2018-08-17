#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>

void		char_parser(void *self)
{
	t_bundle			*bundle;
	int					*str;
	char				*tmp;

	bundle = (t_bundle *)self;
	str = char_length_modifier_handler(bundle);
	if (bundle->sub_specifiers->width <= 1)
		wchar_print(bundle, str, 1);
	else if (bundle->sub_specifiers->width > 1)
	{
		if (ft_strchr(bundle->sub_specifiers->flag, '-'))
			wchar_print(bundle, str, 1);
		if (bundle->sub_specifiers->width > 1)
		{
			tmp = ft_strnew(bundle->sub_specifiers->width);
			ft_memset((void*)tmp, ' ', bundle->sub_specifiers->width - 1);
			bundle->cpy2buffer(bundle, tmp, ft_strlen(tmp));
		}
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			wchar_print(bundle, str, 1);
	}
	free(str);
}

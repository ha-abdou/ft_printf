#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
/*
static void		print_space(int i)
{
	if (i > 0)
		print_space(i - 1);
	ft_putchar(' ');
}
*/
void		char_ptr_parser(void *self)
{
	t_bundle			*bundle;
	int					*str;
	int					len;
	char				*tmp;

	bundle = (t_bundle *)self;
	str = char_length_modifier_handler(bundle);
	len = 6;
	if (!str && (bundle->sub_specifiers->precision > 5 || bundle->sub_specifiers->precision == -1))
		str = (int*)ft_strcpy(ft_strnew(6), "(null)");
	else if (!str && bundle->sub_specifiers->precision <= 5)
	{
		str = (int*)ft_strncpy(ft_strnew(6), "(null)", bundle->sub_specifiers->precision);
		len = bundle->sub_specifiers->precision;
	}
	else if (str && (len = ft_strlen((char *)str)) > bundle->sub_specifiers->precision && bundle->sub_specifiers->precision >= 0)
		len = bundle->sub_specifiers->precision;
	if (bundle->sub_specifiers->width <= len)
		wchar_print(bundle, str, len);
	else
	{
		if (ft_strchr(bundle->sub_specifiers->flag, '-'))
			wchar_print(bundle, str, len);
		if (bundle->sub_specifiers->width > len)
		{
			tmp = ft_strnew(bundle->sub_specifiers->width);
			if (ft_strchr(bundle->sub_specifiers->flag, '0') && !ft_strchr(bundle->sub_specifiers->flag, '-'))
				ft_memset((void*)tmp, '0', bundle->sub_specifiers->width - len);
			else
				ft_memset((void*)tmp, ' ', bundle->sub_specifiers->width - len);
			bundle->cpy2buffer(bundle, tmp, ft_strlen(tmp));
		}
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			wchar_print(bundle, str, len);
	}
	free(str);
}
#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>

static void		print_space(int i)
{
	if (i > 0)
		print_space(i - 1);
	ft_putchar(' ');
}

void		char_ptr_parser(void *self)
{
	t_bundle			*bundle;
	int					*str;
	int					len;

	bundle = (t_bundle *)self;
	str = char_length_modifier_handler(bundle);
	len = 6;
	if (!str && (bundle->sub_specifiers->precision > 5 || bundle->sub_specifiers->precision == -1))
		str = (int*)ft_strcpy(ft_strnew(6), "(null)");
	else if (!str && bundle->sub_specifiers->precision < 5)
		len = 0;
	else if (str && (len = ft_strlen((char *)str)) > bundle->sub_specifiers->precision && bundle->sub_specifiers->precision >= 0)
		len = bundle->sub_specifiers->precision;
	if (bundle->sub_specifiers->width <= len)
		bundle->printed_length += ft_myputstr((char *)str, 0, len);
	else
	{
		if (ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_myputstr((char *)str, 0, len);
		print_space(bundle->sub_specifiers->width - len - 1);
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_myputstr((char *)str, 0, len);
		bundle->printed_length += bundle->sub_specifiers->width;
	}
	free(str);
}
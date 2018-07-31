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
	t_sub_specifiers	*sub_specifiers;
	int					len;

	bundle = (t_bundle *)self;
	if ((sub_specifiers = get_sub_specifiers(bundle)))
	{
		str = char_length_modifier_handler(bundle, sub_specifiers);
		len  = 0;



		if (!str && (sub_specifiers->precision > 5 || sub_specifiers->precision == -1))
		{
			len = 6;
			str = (int*)ft_strcpy(ft_strnew(6), "(null)");
		}
		else if (!str && sub_specifiers->precision < 5)
			len = 0;
		else if (str && (len = ft_strlen((char *)str)) > sub_specifiers->precision && sub_specifiers->precision != -1)
			len = sub_specifiers->precision;



		if (sub_specifiers->width <= len)
			bundle->printed_length += ft_myputstr((char *)str, 0, len);
		else if (sub_specifiers->width > len)
		{
			if (ft_strchr(sub_specifiers->flag, '-'))
				ft_myputstr((char *)str, 0, len);
			print_space(sub_specifiers->width - len - 1);
			if (!ft_strchr(sub_specifiers->flag, '-'))
				ft_myputstr((char *)str, 0, len);
			bundle->printed_length += sub_specifiers->width;
		}
		//ft_myputstr((char *)str, 0, len);
		bundle->i = bundle->last_specifier_index + 1;


		//free(str);
		free(sub_specifiers->flag);
		if (sub_specifiers->length)
			free(sub_specifiers->length);
		free(sub_specifiers);
	}
}
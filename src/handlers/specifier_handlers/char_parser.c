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

void		char_parser(void *self)
{
	t_bundle			*bundle;
	int					*str;
	
	bundle = (t_bundle *)self;

	str = char_length_modifier_handler(bundle);
	if (bundle->sub_specifiers->width <= 1)
		bundle->printed_length += ft_myputstr((char *)str, 0, 1);
	else if (bundle->sub_specifiers->width > 1)
	{
		if (ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_myputstr((char *)str, 0, 1);
		print_space(bundle->sub_specifiers->width - 2);
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_myputstr((char *)str, 0, 1);
		bundle->printed_length += bundle->sub_specifiers->width;
	}
	free(str);
}

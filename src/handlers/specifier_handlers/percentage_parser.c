#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
#include <stdio.h>

static void		print_space(int i)
{
	if (i > 0)
		print_space(i - 1);
	ft_putchar(' ');
}

void		percentage_parser(void *self)
{
	t_bundle			*bundle;
	char				*str;
	
	bundle = (t_bundle *)self;

	str = ft_strcpy(ft_strnew(2), "%");
	if (bundle->sub_specifiers->width <= 1)
		bundle->printed_length += ft_myputstr(str, 0, 1);
	else if (bundle->sub_specifiers->width > 1)
	{
		if (ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_myputstr(str, 0, 1);
		print_space(bundle->sub_specifiers->width - 2);
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			ft_myputstr(str, 0, 1);
		bundle->printed_length += bundle->sub_specifiers->width;
	}
	free(str);
}

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void		unsigned_int_parser(void *self)
{
	t_bundle	*bundle;
	char		*number;
	int			i;

	bundle = (t_bundle *)self;
	if (ft_strchr("OUB", bundle->sub_specifiers->specifier))
	{
		bundle->sub_specifiers->specifier += ('a' - 'A');
		ft_strcpy(bundle->sub_specifiers->length,"ll");
	}
	number = unsigned_int_length_handler(bundle);
	i = ft_strlen(number);
	if (bundle->sub_specifiers->precision < bundle->sub_specifiers->width)
		number = width_handler(bundle, number);
	if (bundle->sub_specifiers->specifier == 'u' ||
		(ft_strchr("xX", bundle->sub_specifiers->specifier) && !number[0]))
		remove_flags(bundle->sub_specifiers->flag, '#');
	remove_flags(bundle->sub_specifiers->flag, '+');
	remove_flags(bundle->sub_specifiers->flag, ' ');	
	number = generique_flag_handler(bundle, number, i);
	number = int_precision_handler(bundle, number, i);
	bundle->cpy2buffer(bundle, number, ft_strlen(number));
	free(number);
}
 
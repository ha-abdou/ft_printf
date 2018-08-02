#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void		int_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	int					i;

	bundle = (t_bundle *)self;
	number = int_length_modifier_handler(bundle);
	number = int_precision_handler(bundle, number);
	i = ft_strlen(number);
	number = width_handler(bundle, number);
	number = generique_flag_handler(bundle, number, i);
	bundle->printed_length += ft_myputstr(number, 0, ft_strlen(number));
	bundle->i = bundle->last_specifier_index + 1;
	free(number);
}

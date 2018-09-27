#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void			int_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	int					i;

	bundle = (t_bundle *)self;
	if (bundle->sub_specifiers->specifier == 'D')
		ft_strcpy(bundle->sub_specifiers->length,"ll");
	number = int_length_modifier_handler(bundle);
	number = int_precision_handler(bundle, number);
	i = ft_strlen(number);
	if (ft_strchr(bundle->sub_specifiers->flag, ' '))
		i++;
	number = width_handler(bundle, number);
	remove_flags(bundle->sub_specifiers->flag, '#');
	number = generique_flag_handler(bundle, number, i);
	bundle->cpy2buffer(bundle, number, ft_strlen(number));
	free(number);
}

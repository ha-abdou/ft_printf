#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char		*remove_flags(char *flags)
{
	int		i;

	i = 0;
	while (flags[i])
	{
		if (flags[i] == '+' || flags[i] == ' ')
			flags[i] = 'c';
		i++;
	}
	return (flags);
}

void		unsigned_int_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	int					i;

	bundle = (t_bundle *)self;
	number = unsigned_int_length_handler(bundle);
	number = int_precision_handler(bundle, number);
	i = ft_strlen(number);
	number = width_handler(bundle, number);
	bundle->sub_specifiers->flag = remove_flags(bundle->sub_specifiers->flag);
	number = generique_flag_handler(bundle, number, i);
	bundle->printed_length += ft_myputstr(number, 0, ft_strlen(number));
	bundle->i = bundle->last_specifier_index + 1;
	free(number);
}
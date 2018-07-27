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
	t_sub_specifiers	*sub_specifiers;
	int					i;

	bundle = (t_bundle *)self;
	if ((sub_specifiers = get_sub_specifiers(bundle)))
	{

		number = unsigned_int_length_handler(bundle, sub_specifiers);
		number = int_precision_handler(sub_specifiers, number);
		i = ft_strlen(number);
		number = width_handler(sub_specifiers, number);
		sub_specifiers->flag = remove_flags(sub_specifiers->flag);
		number = generique_flag_handler(sub_specifiers, number, i);
		bundle->printed_length += ft_myputstr(number, 0, ft_strlen(number));
		bundle->i = bundle->last_specifier_index + 1;
		free(number);
		free(sub_specifiers->flag);
		if (sub_specifiers->length)
			free(sub_specifiers->length);
		free(sub_specifiers);
	}
}
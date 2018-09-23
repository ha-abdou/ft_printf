#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char		*remove_flags(char *flags, char c)
{
	int		i;

	i = 0;
	while (flags[i])
	{
		if (flags[i] == c)
			flags[i] = 'c';
		i++;
	}
	return (flags);
}

void		int_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	int					i;

	bundle = (t_bundle *)self;
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

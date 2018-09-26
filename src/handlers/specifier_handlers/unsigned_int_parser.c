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

void		unsigned_int_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	int					i;

	bundle = (t_bundle *)self;
	if (bundle->sub_specifiers->specifier == 'O' || bundle->sub_specifiers->specifier == 'U')
	{
		bundle->sub_specifiers->specifier = ft_tolower(bundle->sub_specifiers->specifier);
		bundle->sub_specifiers->length[0] = 'l';
		bundle->sub_specifiers->length[1] = 'l';
		bundle->sub_specifiers->length[2] = '\0';
	}
	number = unsigned_int_length_handler(bundle);

	number = int_precision_handler(bundle, number);
	i = ft_strlen(number);
	number = width_handler(bundle, number);
	if (bundle->sub_specifiers->specifier == 'u' ||
		((bundle->sub_specifiers->specifier == 'x' || bundle->sub_specifiers->specifier == 'X') && !number[0]))
		remove_flags(bundle->sub_specifiers->flag, '#');
	remove_flags(bundle->sub_specifiers->flag, '+');
	remove_flags(bundle->sub_specifiers->flag, ' ');
	number = generique_flag_handler(bundle, number, i);
	bundle->cpy2buffer(bundle, number, ft_strlen(number));
	free(number);
}

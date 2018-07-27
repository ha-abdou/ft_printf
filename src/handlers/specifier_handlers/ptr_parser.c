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


void		ptr_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	t_sub_specifiers	*sub_specifiers;
	int					i;
	int					is_not_nil;

	is_not_nil = 1;
	bundle = (t_bundle *)self;
	if ((sub_specifiers = get_sub_specifiers(bundle)))
	{

		number = unsigned_int_length_handler(bundle, sub_specifiers);
		if (ft_strcmp("0", number) == 0)
		{
			number = ft_strcpy(ft_strnew(5), "(nil)");
			sub_specifiers->precision = -1;
			sub_specifiers->flag = remove_flags(sub_specifiers->flag, '0');
			sub_specifiers->flag = remove_flags(sub_specifiers->flag, '+');
			sub_specifiers->flag = remove_flags(sub_specifiers->flag, ' ');
			is_not_nil = 0;
		}
		sub_specifiers->flag = remove_flags(sub_specifiers->flag, '#');
		

//			sub_specifiers->flag = ft_strjoin("#", sub_specifiers->flag);

		number = int_precision_handler(sub_specifiers, number);
		if (is_not_nil)
			number = ft_strjoin("0x", number);
		i = ft_strlen(number);
		number = width_handler(sub_specifiers, number);

		//if (is_not_nil)
		//	number = ft_strjoin("0x", number);

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
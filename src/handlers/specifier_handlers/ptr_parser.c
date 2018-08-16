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

static char *nil_handler(t_bundle *bundle, char *number)
{
	free(number);
	bundle->sub_specifiers->precision = -1;
	remove_flags(bundle->sub_specifiers->flag, '0');
	remove_flags(bundle->sub_specifiers->flag, '+');
	remove_flags(bundle->sub_specifiers->flag, ' ');
	return (ft_strcpy(ft_strnew(5), "(nil)"));
}

static char *add_x0(char *number)
{
	char	*tmp;

	tmp = number;
	number = ft_strjoin("0x", tmp);
	free(tmp);
	return (number);
}

void		ptr_parser(void *self)
{
	t_bundle			*bundle;
	char				*number;
	int					i;
	int					is_not_nil;

	bundle = (t_bundle *)self;
	number = unsigned_int_length_handler(bundle);
	if ((is_not_nil = ft_strcmp("0", number)) == 0)
		number = nil_handler(bundle, number);
	remove_flags(bundle->sub_specifiers->flag, '#');
	number = int_precision_handler(bundle, number);
	if (is_not_nil)
		number = add_x0(number);
	i = ft_strlen(number);
	number = width_handler(bundle, number);
	number = generique_flag_handler(bundle, number, i);
	bundle->printed_length += ft_myputstr(number, 0, ft_strlen(number));
	free(number);
}
#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

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
	t_bundle	*bundle;
	char		*number;
	int			i;

	bundle = (t_bundle *)self;
	number = unsigned_int_length_handler(bundle);
	remove_flags(bundle->sub_specifiers->flag, '#');
	remove_flags(bundle->sub_specifiers->flag, '+');
	remove_flags(bundle->sub_specifiers->flag, ' ');
	number = int_precision_handler(bundle, number);
	number = add_x0(number);
	i = ft_strlen(number);
	number = width_handler(bundle, number);
	number = generique_flag_handler(bundle, number, i);
	bundle->cpy2buffer(bundle, number, ft_strlen(number));
	free(number);
}
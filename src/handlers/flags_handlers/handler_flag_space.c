#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

char		*handler_flag_space(t_bundle *bundle, char *str, int *i)
{
	char	*tmp;

	if (bundle->sub_specifiers->width && str[bundle->sub_specifiers->width - *i] != '-')
	{
		str[bundle->sub_specifiers->width - *i - 1] = ' ';
		(*i)++;
	}
	else
	{
		tmp = str;
		if (!(str =  ft_strjoin(" ", str)))
			throw(0, EXIT_FAILURE);
		free(tmp);
	}
	return (str);
}

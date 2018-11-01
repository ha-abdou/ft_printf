#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

char		*handler_flag_space(t_bundle *bundle, char *str, int *i)
{
	char 	*tmp;

	if (bundle->sub_specifiers->width <= *i)
	{
		tmp = str;
		if (!(str =  ft_strjoin(" ", str)))
			throw(0, EXIT_FAILURE);
		free(tmp);
	}
	else
	{
		str[0] = ' ';
		(*i)++;
	}
	return (str);
}

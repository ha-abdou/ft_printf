#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char		*handler_flag_space(t_bundle *bundle, char *str, int *i)
{
	if (bundle->sub_specifiers->width <= *i)
	{
		if (!(str =  ft_strjoin(" ", str)))
			throw(0, EXIT_FAILURE);
	}
	else
	{
		str[0] = ' ';
		(*i)++;
	}
	
	return (str);
}

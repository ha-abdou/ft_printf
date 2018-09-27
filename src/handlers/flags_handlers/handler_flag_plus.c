#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

char		*handler_flag_plus(t_bundle *bundle, char *str, int *i)
{
	char	*tmp;

	if (bundle->sub_specifiers->width <= *i && str[0] != '-')
	{
		if (!(tmp = ft_strjoin("+", str)))
			throw(0, EXIT_FAILURE);
		free(str);
		(*i)++;
		return (tmp);
	}
	else if (bundle->sub_specifiers->width &&
		str[bundle->sub_specifiers->width - (*i)] != '-')
	{
		str[bundle->sub_specifiers->width - (*i) - 1] = '+';
		(*i)++;
	}
	return (str);
}

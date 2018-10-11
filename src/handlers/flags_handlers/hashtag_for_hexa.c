#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

char	*hashtag_for_hexa(t_bundle *bundle, char *str, int *i)
{
	int		l;
	char	*tmp;
	char	*tmp2;

	l = ft_strlen(str);
	if (l < *i + 2)
	{
		if (!(tmp = ft_strnew(*i - l + 2)))
			throw(0, EXIT_FAILURE);
		tmp = (char *)ft_memset(tmp, ' ', *i - l + 2);
		if (!(tmp2 = ft_strjoin(tmp, str)))
			throw(0, EXIT_FAILURE);
//		free(tmp);
//		free(str);
		str = tmp2;
		str[0] = '0'; 
		str[1] = bundle->sub_specifiers->specifier == 'X' ? 'X' :'x';
	}
	else
	{
		str[l - *i - 2] = '0'; 
		str[l - *i - 1] = bundle->sub_specifiers->specifier == 'X' ? 'X' :'x';
	}
	(*i) += 2;
	return (str);
}

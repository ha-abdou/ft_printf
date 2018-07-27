#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*hashtag_for_hexa(t_sub_specifiers *sub_specifiers, char *str, int *i)
{
	int		l;

	l = ft_strlen(str);
	if (l < *i + 2)
	{
		str = ft_strjoin((char *)
			ft_memset(ft_strnew(*i - l + 2), ' ', *i - l + 2), str);
		str[0] = '0'; 
		str[1] = sub_specifiers->specifier == 'X' ? 'X' :'x';
	}
	else
	{
		str[l - *i - 2] = '0'; 
		str[l - *i - 1] = sub_specifiers->specifier == 'X' ? 'X' :'x';
	}
	(*i) += 2;
	return (str);
}

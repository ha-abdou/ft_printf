#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		check_for_zero(t_sub_specifiers *sub_specifiers, char *str)
{
	int		n;

	if (ft_strchr("xXo", sub_specifiers->specifier))
	{
		n = 0;
		while (str[n] == ' ')
			n++;
		if (str[n] == '0')
			return (1);
	}
	return (0);
}

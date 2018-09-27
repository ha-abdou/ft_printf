#include "ft_printf.h"
#include "libft.h"

char		*handler_flag_minus(char *str, int i, int l)
{	
	int		n;

	n = 0;
	while (n < i && str[n] == ' ')
	{
		str[n] = str[n + l];
		str[n + l] = ' ';
		n++;
	}
	return (str);
}

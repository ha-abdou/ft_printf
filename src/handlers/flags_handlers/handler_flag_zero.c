#include "ft_printf.h"
#include "libft.h"

char		*handler_flag_zero(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (i > 0 && (str[i] == '-' || str[i] == '+'))
		{
			str[0] = str[i];
			str[i++] = '0';
			n = 1;
		}
		if (i > 1 && str[i] == '0' && (str[i + 1] == 'X' || str[i + 1] == 'x'))
		{
			str[n] = '0';
			str[n + 1] = str[i + 1];
			str[i + 1] = '0';
			break;
		}
		else if (str[i] != ' ')
			break;
		str[i++] = '0';
	}
	return (str);
}

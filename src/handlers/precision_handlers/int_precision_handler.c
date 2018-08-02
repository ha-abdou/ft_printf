#include <inttypes.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h" 

char		*int_precision_handler(t_bundle *bundle, char *number)
{
	int		i;
	char	*str;
	char	*tmp;

	if (ft_strcmp(number, "0") == 0 && bundle->sub_specifiers->precision == 0)
	{
		number[0] = '\0';
		return (number);
	}
	if ((i = bundle->sub_specifiers->precision - ft_strlen(number)) <= 0)
		return (number);
	if (number[0] == '-')
		i++;
	tmp = ft_strnew(i);
	str = ft_strjoin((char *)ft_memset(tmp, ' ', i), number);
	free(number);
	free(tmp);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			str[i] = '0';
			str[0] = '-';
			break;
		}
		else if (str[i] != ' ')
			break;
		str[i] = '0';
		i++;
	}
	return (str);
}

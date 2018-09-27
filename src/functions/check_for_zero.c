#include "ft_printf.h"
#include "libft.h"

int		check_for_zero(t_bundle *bundle, char *str)
{
	int		n;

	if (ft_strchr("xXo", bundle->sub_specifiers->specifier))
	{
		n = 0;
		while (str[n] == ' ')
			n++;
		if (str[n] == '0')
			return (1);
	}
	return (0);
}

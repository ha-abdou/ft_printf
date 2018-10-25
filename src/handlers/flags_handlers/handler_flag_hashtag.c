#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

static char	*handle_o(char *str, t_bundle *bundle, int *i)
{
	char	*tmp;
	
	if (bundle->sub_specifiers->width > *i)
	{
		str[bundle->sub_specifiers->width - ((*i)++) - 1] = '0';
		return (str);
	}
	else
	{
		if (!(tmp = ft_strjoin("0", str)))
			throw(0, EXIT_FAILURE);
		free(str);
	}
	return (tmp);
}

char		*handler_flag_hashtag(char *str, t_bundle *bundle, int *i)
{
	char	*tmp;
	int		n;

	if (bundle->sub_specifiers->precision > 0 && bundle->sub_specifiers->specifier == 'x')//todo for big x
	{
		n = 0;
		while (!ft_isalnum(str[n]))
			n++;
		if (n == 0)
			str = ft_strjoin("0x",str);
		else if (n == 1)
		{
			str[0] = 'x';
			str = ft_strjoin("0",str);
		}
		else
		{
			str[n - 1] = 'x';
			str[n - 2] = '0';
		}

		return (str);
	}
	if (check_for_zero(bundle, str))
		return (str);
	if (bundle->sub_specifiers->specifier == 'f'\
		&& bundle->sub_specifiers->precision == 0)
	{
		if (!(tmp = ft_strjoin(str, ".")))
			throw(0, EXIT_FAILURE);
		free(str);
		return (tmp);
	}
	if (bundle->sub_specifiers->specifier == 'o')
		return (handle_o(str, bundle, i));
	else if (ft_strchr("xXp", bundle->sub_specifiers->specifier))
		str = hashtag_for_hexa(bundle, str, i);
	return (str);
}

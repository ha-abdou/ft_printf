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
//		free(str);
	}
	return (tmp);
}

char		*handler_flag_hashtag(char *str, t_bundle *bundle, int *i)
{
	char	*tmp;

	if (check_for_zero(bundle, str))
		return (str);
	if (bundle->sub_specifiers->specifier == 'f'\
		&& bundle->sub_specifiers->precision == 0)
	{
		if (!(tmp = ft_strjoin(str, ".")))
			throw(0, EXIT_FAILURE);
//		free(str);
		return (tmp);
	}
	if (bundle->sub_specifiers->specifier == 'o')
		return (handle_o(str, bundle, i));
	else if (ft_strchr("xXp", bundle->sub_specifiers->specifier))
		str = hashtag_for_hexa(bundle, str, i);
	return (str);
}

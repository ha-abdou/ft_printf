#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*handler_flag_hashtag(char *str, t_bundle *bundle, int *i)
{
	char	*tmp;

	if (check_for_zero(bundle, str))
		return (str);
	if (bundle->sub_specifiers->specifier == 'f' && bundle->sub_specifiers->precision == 0)
	{
		tmp = ft_strjoin(str, ".");
		free(str);
		return (tmp);//todo
	}
	if (bundle->sub_specifiers->specifier == 'o')
	{
		if (bundle->sub_specifiers->width > *i)
			str[bundle->sub_specifiers->width - ((*i)++) - 1] = '0';
		else
		{
			tmp = ft_strjoin("0", str);
			free(str);
			return (tmp);
		}
	}
	else if (ft_strchr("xXp", bundle->sub_specifiers->specifier))
		str = hashtag_for_hexa(bundle, str, i);
	return (str);
}

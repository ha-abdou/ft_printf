#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*generique_flag_handler(t_bundle *bundle, char *str, int i)
{
	char	*tmp;

	if (ft_strchr(bundle->sub_specifiers->flag, '#')/* || sub_specifiers->specifier == 'p'*/)
		str = handler_flag_hashtag(str, bundle, &i);
	if (ft_strchr(bundle->sub_specifiers->flag, '+'))
		str = handler_flag_plus(bundle, str, &i);
	else if (ft_strchr(bundle->sub_specifiers->flag, ' ')
		&& str[0] != '-' && bundle->sub_specifiers->width <= i)
	{
		tmp = str;
		str = ft_strchr(bundle->sub_specifiers->flag, '+') ? str : ft_strjoin(" ", str);
		free(tmp);
	}
	if (ft_strchr(bundle->sub_specifiers->flag, '-') && bundle->sub_specifiers->width - i >= 0)
		str = handler_flag_minus(str , i, bundle->sub_specifiers->width - i);
	if (ft_strchr(bundle->sub_specifiers->flag, '0') && bundle->sub_specifiers->precision < 0)
		str = handler_flag_zero(str);
	return (str);
}

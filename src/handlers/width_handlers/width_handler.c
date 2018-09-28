#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*width_handler(t_bundle *bundle, char *str)
{
	int		i;
	char	*tmp;
	char	*tmp2;

	if (bundle->sub_specifiers->width > 0 &&
		(i = bundle->sub_specifiers->width - ft_strlen(str)) > 0)
	{
		tmp2 = ft_strnew(i);
		tmp = ft_strjoin((char *)ft_memset(tmp2, ' ', i), str);
		free(str);
		free(tmp2);
		return (tmp);
	}
	return (str);
}
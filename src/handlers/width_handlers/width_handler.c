#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*width_handler(t_sub_specifiers *sub_specifiers, char *str)
{
	int		i;
	char	*tmp;
	char	*tmp2;
/*	if (sub_specifiers->width < 0 && ((i = (sub_specifiers->width * -1) - ft_strlen(str)) > 0))
		return (ft_strjoin(str, (char *)ft_memset(ft_strnew(i), ' ', i)));*/
	if ((i = sub_specifiers->width - ft_strlen(str)) > 0)
	{
		tmp2 = ft_strnew(i);
		tmp = ft_strjoin((char *)ft_memset(tmp2, ' ', i), str);
		free(str);
		free(tmp2);
		return (tmp);
	}
	return (str);
}
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

void	throw(char *msg, int code)
{
	if (msg)
		ft_putstr(msg);
	exit(code);
}
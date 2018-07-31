#include "libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <libft.h>

int		ft_myputstr(const char *s, int start, int len)
{
	if (s && len)
	{
		write(0, s + start, len);
		return (len);
	}
	return (0);
}

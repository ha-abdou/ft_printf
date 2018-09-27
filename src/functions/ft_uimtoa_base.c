#include "ft_printf.h"
#include "libft.h"
#include <inttypes.h>

static int		nn(uintmax_t n, int b)
{
	int	l;

	l = 1;
	while (n > (uintmax_t)(b - 1))
	{
		n /= b;
		l++;
	}
	return (l);
}

char			*ft_uimtoa_base(uintmax_t n, int b, int up)
{
	char	*str;
	int		l;
	char	s[16];

	ft_strcpy(s, up ? "0123456789ABCDEF" : "0123456789abcdef");
	l = nn(n, b);
	str = ft_strnew(l--);
	if (!str)
		return (NULL);	
	while (l >= 0)
	{
		str[l--] = s[n % b];
		n /= b;
	}
	return (str);
}
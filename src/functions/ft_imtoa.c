#include <stdlib.h>
#include <inttypes.h>
#include "libft.h"

int		ft_intmaxlen(intmax_t n)
{
	int	l;

	l = 1;
	while (n > 9)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_imtoa(intmax_t n)
{
	char	*str;
	int		l;
	int		sign;

	if (n == -9223372036854775807)
		return (ft_strcpy(ft_strnew(20), "-9223372036854775807"));
	sign = 1;
	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	l = sign == -1 ? ft_intmaxlen(n): ft_intmaxlen(n) - 1;
	if (!(str = ft_strnew(30)))
		return (NULL);
	while (l >= 0)
	{
		str[l--] = '0' + n % 10;
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
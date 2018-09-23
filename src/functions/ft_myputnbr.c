#include "libft.h"

static void	ft_putn(int n, int *len)
{
	(*len)++;
	if (n > 9)
		ft_putn(n / 10, len);
	ft_putchar((n % 10) + '0');
}

int			ft_myputnbr(int n)
{
	int		len;
//            printf("--->\n");

	len = 0;
	if (n == 2147483647)
	{
		ft_putstr("2147483647");
		return (10);
	}
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		n *= -1;
		len++;
		ft_putchar('-');
	}
	ft_putn(n, &len);
	return (len);
}

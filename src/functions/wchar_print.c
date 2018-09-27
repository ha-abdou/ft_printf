#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

intmax_t	ft_power(intmax_t a, intmax_t b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * ft_power(a, b - 1));
}

intmax_t	binary_to_decimal(size_t *tab)
{
	size_t	z;
	int		i;

	i = 0;
	z = 0;
	while (z < 8)
	{
		if (tab[z] == 1)
			i += ft_power(2, (intmax_t)(7 - z));
		z++;
	}
	return (i);
}

void		utf8_norme(size_t *tab, size_t nb_octets, size_t y, size_t z)
{
	size_t	bin[4][8];
	size_t	x;
	char	str[5];

	while (y < nb_octets)
	{
		x = 0;
		while (y == 0 && x < nb_octets)
			bin[y][x++] = 1;
		if (x == 0)
			bin[y][x++] = 1;
		bin[y][x++] = 0;
		while (x != 8)
			bin[y][x++] = tab[z++];
		y++;
	}
	x = 0;
	while (x < nb_octets)
	{
		str[x] = (char)binary_to_decimal(bin[x]);
		x++;
	}
	str[x] = '\0';
	ft_putstr(str);
}

void		utf8_decimal_to_binary(intmax_t i, size_t nb_bytes)
{
	intmax_t	power;
	size_t		*tab;

	if (!(tab = malloc(sizeof(*tab) * nb_bytes)))
			exit (0);
	power = nb_bytes - 1;
	while (power >= 0)
	{
		if (i >= ft_power(2, power))
		{
			i -= ft_power(2, power);
			tab[nb_bytes - (power--) - 1] = 1;
		}
		else
			tab[nb_bytes - (power--) - 1] = 0;
	}
	utf8_norme(tab, nb_bytes / 5, 0, 0);
	free(tab);
}

void		ft_putwchar(intmax_t i)
{
	if (i <= 0x7F)
		ft_putchar((char)i);
	else if (i <= 0x7FF)
		utf8_decimal_to_binary(i, 11);
	else if (i <= 0xFFFF)
		utf8_decimal_to_binary(i, 16);
	else if (i <= 0x10FFFF)
		utf8_decimal_to_binary(i, 21);
/*	else
		exit (0);*/
}

void		ft_putwstr(intmax_t *i)
{
	while (i)
	{
		ft_putwchar(*i);
		i++;
	}
}

void		wchar_print(t_bundle *bundle, intmax_t *str, int len)
{
	if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
	{
		bundle->print_buffer(bundle, 1);
		ft_putwstr(str);
	}
	else
		bundle->cpy2buffer(bundle, (char*)str, len);
}

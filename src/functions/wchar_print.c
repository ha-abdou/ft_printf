#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_putwchar(wchar_t wc)
{
	int	i;

	i = 1;
	if (wc <= 127)
		ft_putchar(wc);
	else if (wc <= 2047)
	{
		ft_putchar((wc >> 6) + 0xC0);
		ft_putchar((wc & 0x3F) + 0x80);
		i++;
	}
	else if (wc <= 65535)
	{
		ft_putchar((wc >> 12) + 0xE0);
		ft_putchar(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar((wc & 0x3F) + 0x80);
		i += 2;
	}
	else if (wc <= 1114111)
	{
		ft_putchar((wc >> 18) + 0xF0);
		ft_putchar(((wc >> 12) & 0x3F) + 0x80);
		ft_putchar(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar((wc & 0x3F) + 0x80);
		i += 3;
	}
	return (i);
}

static int	ft_putwstr(wchar_t *ws)
{
	int	i;

	i = 0;
	while (*ws)
	{
		i += ft_putwchar(*ws);
		ws++;
	}
	return (i);
}

void		wchar_print(t_bundle *bundle, wchar_t *str, int len)
{
	if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
	{
		bundle->print_buffer(bundle, 1);
		bundle->printed_length += ft_putwchar(*str);
	}
	else
		bundle->cpy2buffer(bundle, (char*)str, len);
}

void		wstr_print(t_bundle *bundle, wchar_t *str, int len)
{
	if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
	{
		bundle->print_buffer(bundle, 1);
		bundle->printed_length += ft_putwstr(str);
	}
	else
		bundle->cpy2buffer(bundle, (char*)str, len);
}

static int	_get_len(wchar_t *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] <= 127)
			len++;
		else if (str[i] <= 2047)
			len += 2;
		else if (str[i] <= 65535)
			len += 3;
		else if (str[i] <= 1114111)
			len += 4;
		i++;
	}
	return (len);
}

static char	*_2char(wchar_t *str, char *n_str, int precision)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] <= 127 && (precision <= -1 || precision >= 1))
		{
			n_str[j] = str[i];
			precision--;
			j++;
		}
		else if (str[i] <= 2047 && (precision <= -1 || precision >= 2))
		{
			n_str[j] = ((str[i] >> 6) + 0xC0);
			n_str[j + 1] = ((str[i] & 0x3F) + 0x80);
			precision -= 2;
			j += 2;
		}
		else if (str[i] <= 65535 && (precision <= -1 || precision >= 3))
		{
			n_str[j] = ((str[i] >> 12) + 0xE0);
			n_str[j + 1] = (((str[i] >> 6) & 0x3F) + 0x80);
			n_str[j + 2] = ((str[i] & 0x3F) + 0x80);
			precision -= 3;
			j += 3;
		}
		else if (str[i] <= 1114111 && (precision <= -1 || precision >= 4))
		{
			n_str[j] = ((str[i] >> 18) + 0xF0);
			n_str[j + 1] = ((str[i] >> 12) + 0xE0);
			n_str[j + 2] = (((str[i] >> 6) & 0x3F) + 0x80);
			n_str[j + 3] = ((str[i] & 0x3F) + 0x80);
			precision -= 4;
			j += 4;
		}
		i++;
	}
	return (n_str);
}

char	*wchar2char(wchar_t *str, int precision)
{
	char	*n_str;
	int		i;

	i = 0;
	if (!str)
		return (0);
	n_str = ft_strnew(_get_len(str));
	n_str = _2char(str, n_str, precision);
	return (n_str);
}


#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

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

static void	_big_one(wchar_t str, char *n_str, int *j)
{
	n_str[*j] = ((str >> 18) + 0xF0);
	n_str[*j + 1] = (((str >> 12) & 0x3F) + 0x80);
	n_str[*j + 2] = (((str >> 6) & 0x3F) + 0x80);
	n_str[*j + 3] = ((str & 0x3F) + 0x80);
	*j += 4;
}

static char	*_2char(wchar_t *str, char *n_str, int p)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] <= 127 && (p <= -1 || p >= 1) && p--)
			n_str[j++] = str[i];
		else if (str[i] <= 2047 && (p <= -1 || p >= 2) && p--)
		{
			n_str[j++] = ((str[i] >> 6) + 0xC0);
			n_str[j++] = ((str[i] & 0x3F) + 0x80);
		}
		else if (str[i] <= 65535 && (p <= -1 || p >= 3) && p--)
		{
			n_str[j++] = ((str[i] >> 12) + 0xE0);
			n_str[j++] = (((str[i] >> 6) & 0x3F) + 0x80);
			n_str[j++] = ((str[i] & 0x3F) + 0x80);
		}
		else if (str[i] <= 1114111 && (p <= -1 || p >= 4) && p--)
			_big_one(str[i], n_str, &j);
		i++;
	}
	return (n_str);
}

char	*wchar2char(wchar_t *str, int precision)
{
	char	*n_str;

	if (!str)
		return (0);
	n_str = ft_strnew(_get_len(str));
	n_str = _2char(str, n_str, precision);	
	return (n_str);
}

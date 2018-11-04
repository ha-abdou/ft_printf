#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

static char	*handle_o(char *str, t_bundle *bundle, int *i)
{
	char	*tmp;
	
	if (bundle->sub_specifiers->width > *i)
	{
		str[bundle->sub_specifiers->width - ((*i)++) - 1] = '0';
		return (str);
	}
	else
	{
		if (!(tmp = ft_strjoin("0", str)))
			throw(0, EXIT_FAIL);
		free(str);
	}
	return (tmp);
}

static char	*handle_x(char *str)
{
	char	*tmp;
	int		n;

	n = 0;
	tmp = str;
	while (!ft_isalnum(str[n]))
		n++;
	if (n == 0 && n == 1)
	{
		if (n == 0 && !(tmp = ft_strjoin("0x", str)))
			throw(0, EXIT_FAIL);
		else
		{
			str[0] = 'x';
			if (!(tmp = ft_strjoin("0", str)))
				throw(0, EXIT_FAIL);
		}
		free(tmp);
	}
	else
	{
		str[n - 1] = 'x';
		str[n - 2] = '0';
	}
	return (str);
}

static char	*handle_X(char *str)
{
	char	*tmp;
	int		n;

	n = 0;
	tmp = str;
	while (!ft_isalnum(str[n]))
		n++;
	if (n == 0 && n == 1)
	{
		if (n == 0 && !(tmp = ft_strjoin("0X", str)))
			throw(0, EXIT_FAIL);
		else
		{
			str[0] = 'X';
			if (!(tmp = ft_strjoin("0", str)))
				throw(0, EXIT_FAIL);
		}
		free(tmp);
	}
	else
	{
		str[n - 1] = 'X';
		str[n - 2] = '0';
	}
	return (str);
}

char		*handler_flag_hashtag(char *str, t_bundle *b, int *i)
{
	char	*tmp;

	if (b->sub_specifiers->precision > 0 &&\
	b->sub_specifiers->specifier == 'x')
		return (handle_x(str));
		if (b->sub_specifiers->precision > 0 &&\
	b->sub_specifiers->specifier == 'X')
		return (handle_X(str));
	if (check_for_zero(b, str))
		return (str);
	if (b->sub_specifiers->specifier == 'f'\
		&& b->sub_specifiers->precision == 0)
	{
		if (!(tmp = ft_strjoin(str, ".")))
			throw(0, EXIT_FAILURE);
		free(str);
		return (tmp);
	}
	if (b->sub_specifiers->specifier == 'o')
		return (handle_o(str, b, i));
	else if (ft_strchr("xXp", b->sub_specifiers->specifier))
		str = hashtag_for_hexa(b, str, i);
	return (str);
}

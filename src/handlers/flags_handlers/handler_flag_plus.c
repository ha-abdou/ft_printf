#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

static char	*_handle_rest(t_bundle *bundle, char *str, int n, int *i)
{
	char	*tmp;

	if (n == 0)
	{
		if (!(tmp = ft_strjoin("+", str)))
			throw(0, EXIT_FAIL);
		free(str);
		(*i)++;
		return (tmp);
	}
	else if (bundle->sub_specifiers->width >= *i)
	{
		str[*i] = '+';
		(*i)++;
	}
	else if (bundle->sub_specifiers->width &&
		str[bundle->sub_specifiers->width - (*i)] != '-')
	{
		str[bundle->sub_specifiers->width - (*i) - 1] = '+';
		(*i)++;
	}
	return (str);
}

static char	*_handle_first_last(t_bundle *bundle, char *str, int n)
{
	char	*tmp;

	if (n == 0 && ft_strchr(bundle->sub_specifiers->flag, '-'))
	{
		if (str[n] != '0')
		{
			if (!(tmp = ft_strjoin("+", str)))
				throw(0, EXIT_FAIL);
			free(str);
			tmp[bundle->sub_specifiers->width]  = '\0';
			return (tmp);
		}
		else
			str[0] = '+';
	}
	else
	{
		if (n == 0)
			str[0] = '+';
		else
			str[n - 1] = '+';
	}
	return (str);
}

static char	*_nasty_one(t_bundle *bundle, char *str)
{
	char	*tmp;

	if (!(tmp = ft_strjoin("+", str)))
		throw(0, EXIT_FAIL);
	free(str);
	tmp[bundle->sub_specifiers->width]  = '\0';
	return (tmp);
}

static char	*_handle_first(t_bundle *bundle, char *str, int n, int *i)
{
	char	*tmp;

	if (bundle->sub_specifiers->precision >= *i)
	{
		if (bundle->sub_specifiers->width > bundle->sub_specifiers->precision
			&& ft_strchr(bundle->sub_specifiers->flag, '-'))
			return (_nasty_one(bundle, str));
		else if (bundle->sub_specifiers->width > bundle->sub_specifiers->precision)
			str[n - 1] = '+';
		else
		{
			if (!(tmp = ft_strjoin("+", str)))
				throw(0, EXIT_FAIL);
			free(str);
			(*i)++;
			return (tmp);
		}
	}
	else
		return (_handle_first_last(bundle, str, n));
	return (str);
}

char		*handler_flag_plus(t_bundle *bundle, char *str, int *i)
{
	int		n;

	n = 0;
	while (str[n] == ' ')
		n++;
	if (str[n] == '-')
		return (str);
	if (bundle->sub_specifiers->width > *i)
		_handle_first(bundle, str, n, i);
	else
		return (_handle_rest(bundle, str, n, i));
	return (str);
}

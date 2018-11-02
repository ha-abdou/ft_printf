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
			throw(0, EXIT_FAILURE);
		free(str);
	}
	return (tmp);
}

static char	*handle_x(char *str, t_bundle *bundle)
{
//	char	*tmp;
	int		n;

	n = 0;
//	tmp = str;
	while (!ft_isalnum(str[n]))
		n++;
	if (n == 0)
		str = ft_strjoin("0x",str);
	else if (n == 1)
	{
		str[0] = 'x';
		str = ft_strjoin("0",str);
	}
	else
	{
		str[n - 1] = 'x';
		str[n - 2] = '0';
	}
//	free(tmp);
	return (str);
}

static char	*handle_X(char *str, t_bundle *bundle)
{
//	char	*tmp;
	int		n;

	n = 0;
//	tmp = str;
	while (!ft_isalnum(str[n]))
		n++;
	if (n == 0)
		str = ft_strjoin("0X",str);
	else if (n == 1)
	{
		str[0] = 'x';
		str = ft_strjoin("0",str);
	}
	else
	{
		str[n - 1] = 'X';
		str[n - 2] = '0';
	}
//	free(tmp);
	return (str);
}

char		*handler_flag_hashtag(char *str, t_bundle *bundle, int *i)
{
	char	*tmp;

	if (bundle->sub_specifiers->precision > 0 &&\
	bundle->sub_specifiers->specifier == 'x')
		return (handle_x(str, bundle));
		if (bundle->sub_specifiers->precision > 0 &&\
	bundle->sub_specifiers->specifier == 'X')
		return (handle_X(str, bundle));
	if (check_for_zero(bundle, str))
		return (str);
	if (bundle->sub_specifiers->specifier == 'f'\
		&& bundle->sub_specifiers->precision == 0)
	{
		if (!(tmp = ft_strjoin(str, ".")))
			throw(0, EXIT_FAILURE);
		free(str);
		return (tmp);
	}
	if (bundle->sub_specifiers->specifier == 'o')
		return (handle_o(str, bundle, i));
	else if (ft_strchr("xXp", bundle->sub_specifiers->specifier))
		str = hashtag_for_hexa(bundle, str, i);
	return (str);
}

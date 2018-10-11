#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>


char		*handler_flag_plus(t_bundle *bundle, char *str, int *i)
{
	char	*tmp;
	int		n;

	n = 0;
	if (str[n] == '-')
		return (str);
	while (str[n] == ' ')
		n++;
	if (str[n] == '-')
		return (str);
	//if (bundle->sub_specifiers->width > *i && bundle->sub_specifiers->precision && str[0] == '0')
	if (bundle->sub_specifiers->width > *i)
	{
		if (bundle->sub_specifiers->precision >= *i)
		{

			if (bundle->sub_specifiers->width > bundle->sub_specifiers->precision && ft_strchr(bundle->sub_specifiers->flag, '-'))
			{
				if (!(tmp = ft_strjoin("+", str)))
					throw(0, EXIT_FAILURE);
//				free(str);
				tmp[bundle->sub_specifiers->width]  = '\0';
				return (tmp);
			}
			else if (bundle->sub_specifiers->width > bundle->sub_specifiers->precision)
				str[n - 1] = '+';
			else
			{
				if (!(tmp = ft_strjoin("+", str)))
					throw(0, EXIT_FAILURE);
//				free(str);
				(*i)++;
				return (tmp);
			}
		}
		else if (n == 0 && ft_strchr(bundle->sub_specifiers->flag, '-'))
		{

			if (str[n] != '0')
			{

				if (!(tmp = ft_strjoin("+", str)))
					throw(0, EXIT_FAILURE);
//				free(str);
				tmp[bundle->sub_specifiers->width]  = '\0';
				return (tmp);
			}
			else
			{
				str[0] = '+';
			}
		}
		else
		{
			if (n == 0)
				str[0] = '+';
			else
				str[n - 1] = '+';
		}
	}
	else if (n == 0)
	{
		if (!(tmp = ft_strjoin("+", str)))
			throw(0, EXIT_FAILURE);
//		free(str);
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
/*
	if (bundle->sub_specifiers->width <= *i && str[0] != '-')
	{
		if (!(tmp = ft_strjoin("+", str)))
			throw(0, EXIT_FAILURE);
		free(str);
		(*i)++;
		return (tmp);
	}
	else if (bundle->sub_specifiers->width >= *i && str[0] != '-')
	{
		n = 0;
		while (str[n] == ' ')
			n++;
		str[n] = '+';
		(*i)++;
		return (str);
	}
	else if (bundle->sub_specifiers->width &&
		str[bundle->sub_specifiers->width - (*i)] != '-')
	{
		str[bundle->sub_specifiers->width - (*i) - 1] = '+';
		(*i)++;
	}*/
	return (str);
}


/*char		*handler_flag_plus(t_bundle *bundle, char *str, int *i)
{
	char	*tmp;
	int		n;

	if (str[0] == '-')
		return (str);
	if (bundle->sub_specifiers->width <= *i && str[0] != '-')
	{
		if (!(tmp = ft_strjoin("+", str)))
			throw(0, EXIT_FAILURE);
		free(str);
		(*i)++;
		return (tmp);
	}
	else if (bundle->sub_specifiers->width >= *i && str[0] != '-')
	{
		n = 0;
		while (str[n] == ' ')
			n++;
		str[n] = '+';
		(*i)++;
		return (str);
	}
	else if (bundle->sub_specifiers->width &&
		str[bundle->sub_specifiers->width - (*i)] != '-')
	{
		str[bundle->sub_specifiers->width - (*i) - 1] = '+';
		(*i)++;
	}
	return (str);
}
*/
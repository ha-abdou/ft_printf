#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*handler_flag_zero(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (i > 0 && (str[i] == '-' || str[i] == '+'))
		{
			str[0] = str[i];
			str[i++] = '0';
			n = 1;
		}
		if (i > 1 && str[i] == '0' && (str[i + 1] == 'X' || str[i + 1] == 'x'))
		{
			str[n] = '0';
			str[n + 1] = str[i + 1];
			str[i + 1] = '0';
			break;
		}
		else if (str[i] != ' ')
			break;
		str[i++] = '0';
	}
	return (str);
}
char		*handler_flag_minus(char *str, int i, int l)
{	
	int		n;

	n = 0;
	while (n < i && str[n] == ' ')
	{
		str[n] = str[n + l];
		str[n + l] = ' ';
		n++;
	}
	return (str);
}

char		*handler_flag_hashtag(char *str, t_sub_specifiers *sub_specifiers, int *i)
{
	if (check_for_zero(sub_specifiers, str))
		return (str);
	if (sub_specifiers->specifier == 'f' && sub_specifiers->precision == 0)
		return (ft_strjoin(str, "."));//todo
	if (sub_specifiers->specifier == 'o')
	{
		if (sub_specifiers->width > *i)
			str[sub_specifiers->width - ((*i)++) - 1] = '0';
		else
			str = ft_strjoin("0", str);
	}
	else if (ft_strchr("xXp", sub_specifiers->specifier))
		str = hashtag_for_hexa(sub_specifiers, str, i);
	return (str);
}

char		*generique_flag_handler(t_sub_specifiers *sub_specifiers, char *str, int i)
{
	char	*tmp;
	if (ft_strchr(sub_specifiers->flag, '#')/* || sub_specifiers->specifier == 'p'*/)
		str = handler_flag_hashtag(str, sub_specifiers, &i);
	if (ft_strchr(sub_specifiers->flag, '+'))
	{
		if (sub_specifiers->width <= i && str[0] != '-')
		{
			tmp = str;
			str = ft_strjoin("+", str);
			free(tmp);
			i++;
		}
		else if (sub_specifiers->width && str[sub_specifiers->width - i] != '-')
			str[sub_specifiers->width - (i++) - 1] = '+';
	}
	else if (ft_strchr(sub_specifiers->flag, ' ')
		&& str[0] != '-' && sub_specifiers->width <= i)
	{
		tmp = str;
		str = ft_strchr(sub_specifiers->flag, '+') ? str : ft_strjoin(" ", str);
		free(tmp);
	}
	if (ft_strchr(sub_specifiers->flag, '-') &&  sub_specifiers->width - i >= 0)
		str = handler_flag_minus(str , i, sub_specifiers->width - i);
	if (ft_strchr(sub_specifiers->flag, '0') && sub_specifiers->precision < 0)
		str = handler_flag_zero(str);
	return (str);
}

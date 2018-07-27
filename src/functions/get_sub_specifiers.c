#include "libft.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

char				*get_flags(t_bundle *bundle, int *i)
{
	char	*flags;
	int		t;

	flags = ft_strnew(5);
	t = 0;
	while (ft_strchr("0#-+ ", bundle->format[*i]))
	{
		if (!ft_strchr(flags, bundle->format[*i]))
		{
			flags[t] = bundle->format[*i];
			t++;
		}
		(*i)++;
	}
	return (flags);
}

int					get_width(t_bundle *bundle, int *i)
{
	int		num;

	num = 0;
	if (bundle->format[*i] == '*' && (*i)++)
		return (va_arg(bundle->var_list, int));
	num = ft_atoi(bundle->format + *i);
//	num = bundle->format[*i - 1] == '-' ? num * -1 : num;
	while (ft_isdigit(bundle->format[*i]))
		(*i)++;
	return (num);
}

int					get_precision(t_bundle *bundle, int *i)
{
	int		num;

	if (bundle->format[*i] == '.' && (*i)++)
	{
		if (bundle->format[*i] == '-')
			return (0);
		if (bundle->format[*i] == '*' && (*i)++)//read var
			return (va_arg(bundle->var_list, int));
		num = ft_atoi(bundle->format + *i);
		while (ft_isdigit(bundle->format[*i]))
			(*i)++;
		return (num);
	}
	return (-1);
}

char				*get_length(t_bundle *bundle, int *i)
{
	if (bundle->format[*i] == 'j' && (*i)++)
		return (ft_strcpy(ft_strnew(1), "j"));
	if (bundle->format[*i] == 'z' && (*i)++)
		return (ft_strcpy(ft_strnew(1), "z"));
	if (bundle->format[*i] == 'l' && (*i)++)
	{
		if (bundle->format[*i] == 'l' && (*i)++)
			return (ft_strcpy(ft_strnew(2), "ll"));
		return (ft_strcpy(ft_strnew(1), "l"));
	}
	if (bundle->format[*i] == 'h' && (*i)++)
	{
		if (bundle->format[*i] == 'h' && (*i)++)
			return (ft_strcpy(ft_strnew(2), "hh"));
		return (ft_strcpy(ft_strnew(1), "h"));
	}
	return (0);
}

t_sub_specifiers	*get_sub_specifiers(t_bundle *bundle)
{
	t_sub_specifiers	*sub_specifiers;
	int					i;

	i = bundle->i + 1;
	sub_specifiers = (t_sub_specifiers *)malloc(sizeof(t_sub_specifiers));
	sub_specifiers->flag = get_flags(bundle, &i);
	sub_specifiers->width = get_width(bundle, &i);
	sub_specifiers->precision = get_precision(bundle, &i);
	sub_specifiers->length = get_length(bundle, &i);
	if (sub_specifiers->width < 0)
	{
		sub_specifiers->width *= -1;
		if (!ft_strchr(sub_specifiers->flag, '-'))
			sub_specifiers->flag[ft_strlen(sub_specifiers->flag)] = '-';
	}
/*	
	printf("flag:%s\n", sub_specifiers->flag);
	printf("width:%d\n", sub_specifiers->width);
	printf("precision:%d\n", sub_specifiers->precision);
	printf("length:%s\n", sub_specifiers->length);
*/

	if (bundle->format[i] != bundle->format[bundle->last_specifier_index])
	{
		format_error(bundle, i, sub_specifiers);
		free(sub_specifiers->flag);
		if (sub_specifiers->length)
			free(sub_specifiers->length);
		free(sub_specifiers);
		return (0);
	}
	sub_specifiers->specifier = bundle->format[bundle->last_specifier_index];
	return (sub_specifiers);
}
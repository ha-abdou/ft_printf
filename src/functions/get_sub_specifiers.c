#include "libft.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

void		get_flags(t_bundle *bundle, int *i)
{
	int		t;

	t = 0;
	while (ft_strchr("0#-+ ", bundle->format[*i]))
	{
		if (!ft_strchr(bundle->sub_specifiers->flag, bundle->format[*i]))
		{
			bundle->sub_specifiers->flag[t] = bundle->format[*i];
			t++;
		}
		(*i)++;
	}
}

void		get_width(t_bundle *bundle, int *i)
{
	if (bundle->format[*i] == '*' && (*i)++)
	{
		bundle->sub_specifiers->width = va_arg(*(bundle->var_list), int);
		return ;
	}
	bundle->sub_specifiers->width = ft_atoi(bundle->format + *i);
	while (ft_isdigit(bundle->format[*i]))
		(*i)++;
}

void		get_precision(t_bundle *bundle, int *i)
{
	if (bundle->format[*i] == '.' && (*i)++)
	{
		if (bundle->format[*i] == '-')
		{
			bundle->sub_specifiers->precision = 0;
			return ;
		}
		if (bundle->format[*i] == '*' && (*i)++)
		{
			bundle->sub_specifiers->precision = va_arg(*(bundle->var_list), int);
			return ;
		}
		bundle->sub_specifiers->precision = ft_atoi(bundle->format + *i);
		while (ft_isdigit(bundle->format[*i]))
			(*i)++;
		return ;
	}
	bundle->sub_specifiers->precision = -1;
}

void		get_length(t_bundle *bundle, int *i)
{
	if (bundle->format[*i] == 'j' && (*i)++)
		ft_strcpy(bundle->sub_specifiers->length, "j\0");
	else if (bundle->format[*i] == 'z' && (*i)++)
		ft_strcpy(bundle->sub_specifiers->length, "z\0");
	else if (bundle->format[*i] == 'l' && (*i)++)
	{
		if (bundle->format[*i] == 'l' && (*i)++)
			ft_strcpy(bundle->sub_specifiers->length, "ll");
		else
			ft_strcpy(bundle->sub_specifiers->length, "l\0");
	}
	else if (bundle->format[*i] == 'h' && (*i)++)
	{
		if (bundle->format[*i] == 'h' && (*i)++)
			ft_strcpy(bundle->sub_specifiers->length, "hh");
		else
			ft_strcpy(bundle->sub_specifiers->length, "h\0");
	}
}

int		get_sub_specifiers(t_bundle *bundle)
{
	int		i;

	i = bundle->i + 1;
	get_flags(bundle, &i);
	get_width(bundle, &i);
	get_precision(bundle, &i);
	get_length(bundle, &i);
	if (bundle->sub_specifiers->width < 0)
	{
		bundle->sub_specifiers->width *= -1;
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			bundle->sub_specifiers->flag[ft_strlen(bundle->sub_specifiers->flag)] = '-';
	}/*
	if (bundle->format[i] != bundle->format[bundle->last_specifier_index])
	{
		format_error(bundle, i);
		return (0);
	}*/
	bundle->sub_specifiers->specifier = bundle->format[bundle->last_specifier_index];
	return (1);
}
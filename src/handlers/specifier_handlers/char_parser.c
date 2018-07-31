#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>

static void		print_space(int i)
{
	if (i > 0)
		print_space(i - 1);
	ft_putchar(' ');
}

void		char_parser(void *self)
{
	t_bundle			*bundle;
	int					*str;
	t_sub_specifiers	*sub_specifiers;
	
	bundle = (t_bundle *)self;
	if ((sub_specifiers = get_sub_specifiers(bundle)))
	{
		str = char_length_modifier_handler(bundle, sub_specifiers);
		if (sub_specifiers->width <= 1)
			bundle->printed_length += ft_myputstr((char *)str, 0, 1);
		else if (sub_specifiers->width > 1)
		{
			if (ft_strchr(sub_specifiers->flag, '-'))
				ft_myputstr((char *)str, 0, 1);
			print_space(sub_specifiers->width - 2);
			if (!ft_strchr(sub_specifiers->flag, '-'))
				ft_myputstr((char *)str, 0, 1);
			bundle->printed_length += sub_specifiers->width;
		}
		bundle->i = bundle->last_specifier_index + 1;
		free(str);
		free(sub_specifiers->flag);
		if (sub_specifiers->length)
			free(sub_specifiers->length);
		free(sub_specifiers);
	}
}
/*
		else if (ft_strchr(sub_specifiers->flag, '-') && sub_specifiers->width > len)
		{
			ft_myputstr((char *)str, 0, len);
			bundle->printed_length += sub_specifiers->width;
			print_space(sub_specifiers->width - len - 1);
		}
		else if (sub_specifiers->width > len)
		{
			print_space(sub_specifiers->width - len - 1);
			ft_myputstr((char *)str, 0, len);
			bundle->printed_length += sub_specifiers->width;
		}
*/
/*
void		char_parser(void *self)
{
	t_bundle			*bundle;
	char				*str;
	t_sub_specifiers	*sub_specifiers;

	bundle = (t_bundle *)self;
	if ((sub_specifiers = get_sub_specifiers(bundle)))
	{
		str = ft_strnew(2);
		str[0] = (char)c_length_modifier_handler(bundle, sub_specifiers);
		if (str[0] == 0)
		{
			if (sub_specifiers->width < 1)
			{
				write(0, 0, 1);
				bundle->printed_length++;
			}
			else
			{
				str = (char *) ft_memset( ft_strnew(sub_specifiers->width - 1) , ' ', sub_specifiers->width - 1);
				if (ft_strchr(sub_specifiers->flag, '-'))
				{
					write(0, 0, 1);
					bundle->printed_length += ft_myputstr(str, 0, sub_specifiers->width);
				}
				else
				{
					bundle->printed_length += ft_myputstr(str, 0, sub_specifiers->width);
					write(0, 0, 1);
				}
			}
		}
		else
		{
			str = width_handler(sub_specifiers, str);
			str = char_flag_handler(sub_specifiers, str);
			bundle->printed_length += ft_myputstr(str, 0, ft_strlen(str));
		}
		bundle->i = bundle->last_specifier_index + 1;
		free(str);
		free(sub_specifiers->flag);
		if (sub_specifiers->length)
			free(sub_specifiers->length);
		free(sub_specifiers);
	}
}
*/
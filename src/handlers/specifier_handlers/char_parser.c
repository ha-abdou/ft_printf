#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char		*char_flag_handler(t_sub_specifiers *sub_specifiers, char *str)
{
	if (ft_strchr(sub_specifiers->flag, '-') && sub_specifiers->width > 1)
	{
		str[0] = str[ft_strlen(str) - 1];
		str[sub_specifiers->width - 1] = ' ';
	}
	return (str);
}

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

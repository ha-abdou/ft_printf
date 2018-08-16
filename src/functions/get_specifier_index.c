#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int		get_specifier_index(t_bundle *self)
{
	int		i;

	i = 1;
	while (self->format[self->i + i]/* && self->format[self->i + i] != '%'*/)
	{
		if (ft_strchr(SPECIFIERS, self->format[self->i + i]))
			return (self->i + i);
		i++;
	}
	return (0);
}

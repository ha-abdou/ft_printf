#include "ft_printf.h"
#include "libft.h"

int		get_specifier_index(t_bundle *self)
{
	int		i;

	i = 1;
	while (self->format[self->i + i])
	{
		if (!ft_strchr(" #-+hlzj.*0123456789\n", self->format[self->i + i]))
			return (self->i + i);
		i++;
	}
	return (0);
}

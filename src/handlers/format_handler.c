#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

static int	check_error(char specifier, char* flag)
{
	if (specifier == 'C' || specifier == 'S')
		return (1);
	return (0);
}

int		format_handler(t_bundle *self)
{
	t_handlers	*handlers;

	handlers = self->handlers;
	self->last_specifier = get_specifier_index(self);
	if (self->last_specifier == 0)
	{
		get_sub_specifiers(self);
		none_parser((void *)self);
		return (1);
	}
	while (handlers)
	{
		if (handlers->specifier == self->format[self->last_specifier])
		{
			if (get_sub_specifiers(self))
			{
				if (check_error(self->format[self->last_specifier], self->sub_specifiers->flag))
					return (0);
				handlers->parser((void *)self);
				self->i = self->last_specifier + 1;
        		return (1);
			}
		}
		handlers = handlers->next;
	}
	get_sub_specifiers(self);
	none_parser((void *)self);
	return (1);
}
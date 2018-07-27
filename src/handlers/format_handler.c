#include "ft_printf.h"
#include <stdio.h>

void	format_handler(t_bundle *self)
{
	t_handlers	*handlers;

	handlers = self->handlers;
	self->last_specifier_index = get_specifier_index(self);
	if (self->last_specifier_index == 0)
	{
		specifier_error(self);
		return ;
	}
	while (handlers)
	{
		if (handlers->specifier == self->format[self->last_specifier_index])
		{
			handlers->parser((void *)self);
			return ;
		}
		handlers = handlers->next;
	}
}
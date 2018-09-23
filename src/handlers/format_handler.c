#include "ft_printf.h"
#include "libft.h"
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
			if (get_sub_specifiers(self))
			{
				handlers->parser((void *)self);
				self->i = self->last_specifier_index + 1;
        		return ;
			}
		}
		handlers = handlers->next;
	}
}
#include "ft_printf.h"

void	format_handler(t_bundle *self)
{
	int			specifier_index;
	t_handlers	*handlers;

	handlers = self->handlers;
	specifier_index = get_specifier_index(self);
	while (handlers)
	{
		if (handlers->specifier == self->format[specifier_index])
		{
			handlers->parser((void *)self);
			return ;
		}
		handlers = handlers->next;
	}
	specifier_error(self);
}
#include "ft_printf.h"
#include <stdlib.h>

void	handlers_push(t_bundle *self, char specifier, void (*parser)(void *))
{
	t_handlers	*tmp;

	//todo free the mem
	tmp = (t_handlers *)malloc(sizeof(t_handlers));
	tmp->specifier = specifier;
	tmp->parser = *parser;
	tmp->next = self->handlers;
	self->handlers = tmp;
}

void		init_handlers(t_bundle *self)
{
	self->handlers = 0;
	handlers_push(self, 'd', &int_parser);
}
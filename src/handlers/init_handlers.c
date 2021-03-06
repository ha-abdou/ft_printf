#include "ft_printf.h"
#include <stdlib.h>

static void	handlers_push(t_bundle *self, char specifier,\
	void (*parser)(void *))
{
	t_handlers	*tmp;

	if(!(tmp = (t_handlers *)malloc(sizeof(t_handlers))))
		throw(0, EXIT_FAILURE);
	tmp->specifier = specifier;
	tmp->parser = *parser;
	tmp->next = self->handlers;
	self->handlers = tmp;
}

void		init_handlers(t_bundle *self)
{
	self->handlers = 0;
	handlers_push(self, 's', &char_ptr_parser);
	handlers_push(self, 'S', &char_ptr_parser);
	handlers_push(self, 'p', &ptr_parser);
	handlers_push(self, 'd', &int_parser);
	handlers_push(self, 'D', &int_parser);
	handlers_push(self, 'i', &int_parser);
	handlers_push(self, 'o', &unsigned_int_parser);
	handlers_push(self, 'O', &unsigned_int_parser);
	handlers_push(self, 'u', &unsigned_int_parser);
	handlers_push(self, 'U', &unsigned_int_parser);
	handlers_push(self, 'x', &unsigned_int_parser);
	handlers_push(self, 'X', &unsigned_int_parser);
	handlers_push(self, 'c', &char_parser);
	handlers_push(self, 'C', &char_parser);
	handlers_push(self, '%', &char_parser);
	handlers_push(self, 'b', &unsigned_int_parser);
	handlers_push(self, 'B', &unsigned_int_parser);
	handlers_push(self, 'n', &n_parser);
	handlers_push(self, 'v', &v_parser);
	handlers_push(self, 'r', &r_parser);
}

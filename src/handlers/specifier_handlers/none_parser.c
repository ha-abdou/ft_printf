#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>


void			none_parser(void *self)
{
	t_bundle			*bundle;

	bundle = (t_bundle *)self;
	char_parser((void*)bundle);
	bundle->i = bundle->last_specifier + 1;
}

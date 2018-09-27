#include "ft_printf.h"
#include "libft.h"

void		percentage_parser(void *self)
{
	t_bundle			*bundle;

	bundle = (t_bundle *)self;
	bundle->cpy2buffer(bundle, "%", 1);
}

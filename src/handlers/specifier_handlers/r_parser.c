#include "ft_printf.h"
#include "libft.h"

void		r_parser(void *self)
{
	t_bundle	*bundle;
	int			fd;

	bundle = (t_bundle *)self;
	fd = va_arg(*(bundle->var_list), int);
	bundle->print_buffer(bundle, fd);
}

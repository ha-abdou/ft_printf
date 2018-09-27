#include "ft_printf.h"
#include "libft.h"

void		n_parser(void *self)
{
	t_bundle	*bundle;
	int			*n;

	bundle = (t_bundle *)self;
	bundle->print_buffer(bundle, 1);
	n = va_arg(*(bundle->var_list), int*);
	*n = bundle->printed_length;
}

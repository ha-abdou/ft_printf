#include "ft_printf.h"
#include "libft.h"

void		int_parser(void *self)
{
	t_bundle	*bundle;
	char		*number;

	bundle = (t_bundle *)self;
	number = ft_itoa(va_arg(bundle->var_list, int));
	ft_putstr(number);
	bundle->i += 2;
	bundle->printed_length += ft_strlen(number);
}

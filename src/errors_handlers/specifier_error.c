#include "ft_printf.h"
#include "libft.h"

void	specifier_error(t_bundle *bundle)
{
	bundle->print(bundle, bundle->i, 1);
	bundle->i++;
}

#include "ft_printf.h"
#include "libft.h"

void	specifier_error(t_bundle *bundel)
{
	bundel->print(bundel, bundel->i, bundel->format_length - bundel->i);
	bundel->i =  bundel->format_length;
}

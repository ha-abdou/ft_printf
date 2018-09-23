#include "ft_printf.h"
#include "libft.h"

void		wchar_print(t_bundle *bundle, int *str, int len)
{
	bundle->print_buffer(bundle);
	ft_putchar((char)str);
	//bundle->cpy2buffer(bundle, (char*)str, len);
}


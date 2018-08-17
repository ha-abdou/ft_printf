#include "ft_printf.h"
#include "libft.h"

void		wchar_print(t_bundle *bundle, int *str, int len)
{
	bundle->cpy2buffer(bundle, (char*)str, len);
}

#include <inttypes.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include <wchar.h>

int		c_length_modifier_handler(t_bundle *bundle, t_sub_specifiers *sub_specifiers)
{
	if (sub_specifiers->length && ft_strcmp(sub_specifiers->length ,"l") == 0)
		return ((wint_t)va_arg(bundle->var_list, int));
	return (unsigned char)(va_arg(bundle->var_list, int));
}

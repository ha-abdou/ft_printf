#include "ft_printf.h"
#include "libft.h"
#include <inttypes.h>
#include <stdarg.h>

int		get_base(char c)
{
	if (c == 'o')
		return (8);
	else if (c == 'p' || c == 'X' || c == 'x')
		return (16);
	else if (c == 'b')
		return (2);
	return (10);
}

char		*unsigned_int_length_handler(t_bundle *bundle)
{
	uintmax_t i;

	if (!bundle->sub_specifiers->length[0])
		i = (unsigned int)va_arg(bundle->var_list, unsigned int);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"hh") == 0)
		i = (unsigned char)va_arg(bundle->var_list, unsigned int);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"h") == 0)
		i = (unsigned short int)va_arg(bundle->var_list, unsigned int);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"ll") == 0)
		i = va_arg(bundle->var_list, long long unsigned int);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
		i = va_arg(bundle->var_list, long unsigned int);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"j") == 0)
		i = (uintmax_t)va_arg(bundle->var_list, uintmax_t);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"z") == 0)
		i = va_arg(bundle->var_list, size_t);

	return (ft_uimtoa_base(i , get_base(bundle->sub_specifiers->specifier), bundle->sub_specifiers->specifier == 'X'));
}
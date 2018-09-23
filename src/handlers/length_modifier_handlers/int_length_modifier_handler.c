#include <inttypes.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

char	*int_length_modifier_handler(t_bundle *bundle)
{
	intmax_t i;

	i = 0;
	if (!bundle->sub_specifiers->length[0])
		return (ft_itoa(va_arg(*(bundle->var_list), int)));
	else if (ft_strcmp(bundle->sub_specifiers->length ,"hh") == 0)
		return (ft_itoa((signed char)va_arg(*(bundle->var_list), int)));
	else if (ft_strcmp(bundle->sub_specifiers->length ,"h") == 0)
		return (ft_itoa((short int)va_arg(*(bundle->var_list), int)));
	else if (ft_strcmp(bundle->sub_specifiers->length ,"ll") == 0)
		i = (long long int)va_arg(*(bundle->var_list), intmax_t);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
		i = va_arg(*(bundle->var_list), long int);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"j") == 0)
		i = (intmax_t)va_arg(*(bundle->var_list), intmax_t);
	else if (ft_strcmp(bundle->sub_specifiers->length ,"z") == 0)
		return (ft_imtoa(va_arg(*(bundle->var_list), size_t)));
	return (ft_imtoa(i));
}

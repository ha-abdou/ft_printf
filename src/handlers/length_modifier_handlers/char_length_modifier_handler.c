#include <inttypes.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include <wchar.h>

intmax_t			*char_length_modifier_handler(t_bundle *bundle)
{
	intmax_t		*str;

	str = 0;
	if (bundle->sub_specifiers->specifier == 'c')
	{
		str = (intmax_t *)malloc(sizeof(intmax_t) * 2);
		str[1] = '\0';
		if (bundle->sub_specifiers->length && ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
			str[0] = (wint_t)va_arg(*(bundle->var_list), intmax_t);
		else
			str[0] = (char)va_arg(*(bundle->var_list), intmax_t);
	}
	else if (bundle->sub_specifiers->specifier == 's')
	{
		if (bundle->sub_specifiers->length[0] && ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
			str = (intmax_t*)((wchar_t*)va_arg(*(bundle->var_list), intmax_t*));
		else
			str = (intmax_t*)va_arg(*(bundle->var_list), char*);
		if (str)
			str = (intmax_t *)ft_strdup((char *)str);
	}
	return (str);
}

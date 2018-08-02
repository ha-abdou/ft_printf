#include <inttypes.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include <wchar.h>

int			*char_length_modifier_handler(t_bundle *bundle)
{
	int		*str;

	if (bundle->sub_specifiers->specifier == 'c')
	{
		str = (int *)malloc(sizeof(str) * 2);
		if (bundle->sub_specifiers->length && ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
			str[0] = (wint_t)va_arg(bundle->var_list, int);
		else
			str[0] = va_arg(bundle->var_list, int);
	}
	else if (bundle->sub_specifiers->specifier == 's')
	{
		if (bundle->sub_specifiers->length && ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
			str = (int*)((wchar_t*)va_arg(bundle->var_list, int*));
		else
			str = (int*)va_arg(bundle->var_list, char*);
		/*if (str)
			str = (int *)ft_strdup((char *)str);*/
	}
	return (str);
}

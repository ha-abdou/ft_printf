#include <inttypes.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include <wchar.h>

static char 	*handle_s(t_bundle *bundle)
{
	char		*str;

	if (bundle->sub_specifiers->length[0]\
			&& ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
	{
		str = wchar2char(va_arg(*(bundle->var_list), wchar_t*),\
			bundle->sub_specifiers->precision);
		bundle->sub_specifiers->length[0] = '\0';
	}
	else
		str = va_arg(*(bundle->var_list), char*);
	return (str);
}

wchar_t			*char_length_modifier_handler(t_bundle *bundle)
{
	wchar_t		*str;

	str = 0;
	if (bundle->sub_specifiers->specifier == 'c'\
		|| bundle->sub_specifiers->specifier == 'C')
	{
		str = (wchar_t *)malloc(sizeof(wchar_t) * 2);
		str[1] = '\0';
		if (bundle->sub_specifiers->length\
			&& ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
			str[0] = (wchar_t)va_arg(*(bundle->var_list), wchar_t);
		else
			str[0] = (char)va_arg(*(bundle->var_list), wchar_t);
	}
	else if (bundle->sub_specifiers->specifier == 's'\
		|| bundle->sub_specifiers->specifier == 'S')
		return ((wchar_t *)handle_s(bundle));
	return (str);
}

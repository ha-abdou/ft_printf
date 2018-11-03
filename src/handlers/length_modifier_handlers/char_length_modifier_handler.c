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

static char		*handle_c(t_bundle *bundle)
{
	wchar_t		*tmp;
	char		*str;

	str = 0;
	if (bundle->sub_specifiers->specifier == 'C' ||
		(ft_strcmp(bundle->sub_specifiers->length ,"l") == 0))
	{
		if (!(tmp = (wchar_t *)malloc(sizeof(wchar_t) * 2)))
			return (0);
		tmp[0] = va_arg(*(bundle->var_list), wchar_t);
		tmp[1] = '\0';
		str = wchar2char(tmp, 10);
		free(tmp);
	}
	else
	{
		str = ft_strnew(2);
		str[0] = (char)va_arg(*(bundle->var_list), int);
	}
	return (str);
}

char			*char_length_modifier_handler(t_bundle *bundle)
{
	if (bundle->sub_specifiers->specifier == 'c'\
		|| bundle->sub_specifiers->specifier == 'C')
		return (handle_c(bundle));
	else if (bundle->sub_specifiers->specifier == 's'\
		|| bundle->sub_specifiers->specifier == 'S')
		return (handle_s(bundle));
	return (0);
}

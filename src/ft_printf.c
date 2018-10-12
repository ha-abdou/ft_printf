#include <stdarg.h>
#include "ft_printf.h"
#include <stdlib.h>
#include <wchar.h>

static void		free_handlers(t_handlers *handlers)
{
	if (handlers->next)
		free_handlers(handlers->next);
	free(handlers);
}

static void		free_bundle(t_bundle *bundle)
{
	free(bundle->sub_specifiers->flag);
	free(bundle->sub_specifiers->length);
	free(bundle->sub_specifiers);
	free_handlers(bundle->handlers);
	free(bundle->buffer);
	free(bundle);
}

int				ft_printf(const char *format, ...)
{
	t_bundle	*bundle;
	va_list		var_list;
	int			i;

	if (!format)
		return (-1);
	va_start(var_list, format);
	bundle = init_bundle(format, &var_list);
	i = bundle->i;
	while (bundle->current_char(bundle))
	{
		if (bundle->current_char(bundle) != '%')
			bundle->i++;
		else
		{
			bundle->cpy2buffer(bundle, (char *)bundle->format + i, bundle->i - i);
			bundle->format_handler(bundle);
			i = bundle->i;
		}
	}
	if (i != bundle->i)
		bundle->cpy2buffer(bundle, (char *)bundle->format + i, bundle->i - i);
	va_end(var_list);
	bundle->print_buffer(bundle, 1);
	i = bundle->printed_length;
	free_bundle(bundle);
	return (i);
}

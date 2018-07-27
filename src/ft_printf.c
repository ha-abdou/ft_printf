#include <stdarg.h>
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

void    free_handlers(t_handlers *handlers)
{
    if (handlers->next)
        free_handlers(handlers->next);
    free(handlers);
}

int     ft_printf(const char *format, ...)
{
    t_bundle    *bundle;
    va_list     var_list;
    int         i;
    int         len;
    
    va_start(var_list, format);
    bundle = init_bundle(format, var_list);
    i = bundle->i;
    while (bundle->current_char(bundle))
    {
        if (bundle->current_char(bundle) != '%')
            bundle->i++;
        else
        {
            bundle->print(bundle, i, bundle->i - i);
            bundle->format_handler(bundle);
            i = bundle->i;
        }
    }
    if (i != bundle->i)
        bundle->print(bundle, i, bundle->i - i);
    va_end(var_list);
    len = bundle->printed_length;
    free_handlers(bundle->handlers);
    free(bundle);
    return (len);
}

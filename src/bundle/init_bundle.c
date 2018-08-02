#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	current_char(t_bundle *self)
{
	return (self->format[self->i]);
}

void	print(t_bundle *self, int start, int length)
{
	self->printed_length += ft_myputstr(self->format, start, length);
}

void	debug_bundle(t_bundle *self)
{
	printf("-----*-----\n");
	printf("format: %s\n", self->format);
	printf("printed_length: %d\n", self->printed_length);
	printf("i: %d\n", self->i);
	printf("*----------*\n");
}

t_bundle    *init_bundle(const char *format, va_list var_list)
{
    t_bundle	*bundle;

    if (!(bundle = (t_bundle *)malloc(sizeof(t_bundle))))
    	throw("mem error", EXIT_FAILURE);
    bundle->i = 0;
    bundle->printed_length = 0;
    bundle->format_length = ft_strlen(format);
    bundle->format = format;
    bundle->var_list = var_list;
    bundle->current_char = &current_char;
    bundle->print = &print;
    bundle->format_handler = &format_handler;
    bundle->sub_specifiers = (t_sub_specifiers *)malloc(sizeof(t_sub_specifiers));
    bundle->sub_specifiers->flag = ft_strnew(5);
    bundle->sub_specifiers->length = ft_strnew(2);
    init_handlers(bundle);
    return (bundle);
}
#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	current_char(t_bundle *self)
{
	return (self->format[self->i]);
}

void    cpy2buffer(t_bundle *self, char *str, int len)
{
    if (len == 0)
        return ;
//    printf("cpy2buffer-->%d\n", len);
    if (len > BUFFERSIZE)
    {
        self->print_buffer(self);
        write(1, str, len);
        self->printed_length += len;
        return ;
    }
    if (self->buffer_length + len > BUFFERSIZE)
        self->print_buffer(self);
    ft_strncpy(self->buffer + self->buffer_length, str, len);
    self->buffer_length += len;
}

void    print_buffer(t_bundle *self)
{
    if (self->buffer_length == 0)
        return ;
//  printf("print_buffer-->%d\n", self->buffer_length);
//  printf("++++-->%d\n", self->printed_length);
    write(1, self->buffer, self->buffer_length);
    self->printed_length += self->buffer_length;
    self->buffer_length = 0;
}

t_bundle    *init_bundle(const char *format, va_list *var_list)
{
    t_bundle	*bundle;

    if (!(bundle = (t_bundle *)malloc(sizeof(t_bundle))))
    	throw("mem error", EXIT_FAILURE);
    bundle->i = 0;
    bundle->buffer = ft_strnew(BUFFERSIZE);
    bundle->buffer_length = 0;
    bundle->printed_length = 0;
    bundle->format_length = ft_strlen(format);
    bundle->format = format;
    bundle->var_list = var_list;
    bundle->current_char = &current_char;
    bundle->cpy2buffer = &cpy2buffer;
    bundle->print_buffer = &print_buffer;
    bundle->format_handler = &format_handler;
    bundle->sub_specifiers = (t_sub_specifiers *)malloc(sizeof(t_sub_specifiers));
    bundle->sub_specifiers->flag = ft_strnew(5);
    bundle->sub_specifiers->length = ft_strnew(2);
    init_handlers(bundle);
    return (bundle);
}

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char			current_char(t_bundle *self)
{
	return (self->format[self->i]);
}

//todo exend buffer
void			cpy2buffer(t_bundle *self, char *str, int len)
{
	if (len == 0)
		return ;
	if (len > BUFFERSIZE)
	{
		self->print_buffer(self, 1);
		write(1, str, len);
		self->printed_length += len;
		return ;
	}
	if (self->buffer_length + len > BUFFERSIZE)
		self->print_buffer(self, 1);
	ft_strncpy(self->buffer + self->buffer_length, str, len);
	self->buffer_length += len;
}

void			print_buffer(t_bundle *self, int fd)
{
	if (self->buffer_length == 0)
		return ;
	write(fd, self->buffer, self->buffer_length);
	self->printed_length += self->buffer_length;
	self->buffer_length = 0;
}

static void		init_mem(t_bundle *bundle)
{
	if (!(bundle->sub_specifiers =\
		(t_sub_specifiers *)malloc(sizeof(t_sub_specifiers))))
		throw(0, EXIT_FAIL);
	if (!(bundle->sub_specifiers->flag = ft_strnew(5)))
		throw(0, EXIT_FAIL);
	if (!(bundle->sub_specifiers->length = ft_strnew(2)))
		throw(0, EXIT_FAIL);
	if (!(bundle->buffer = ft_strnew(BUFFERSIZE)))
		throw(0, EXIT_FAIL);
}

t_bundle		*init_bundle(const char *format, va_list *var_list)
{
	t_bundle	*bundle;

	if (!(bundle = (t_bundle *)malloc(sizeof(t_bundle))))
		throw(0, EXIT_FAIL);
	bundle->i = 0;
	bundle->buffer_length = 0;
	bundle->printed_length = 0;
	bundle->format_length = ft_strlen(format);
	bundle->format = format;
	bundle->var_list = var_list;
	bundle->current_char = &current_char;
	bundle->cpy2buffer = &cpy2buffer;
	bundle->print_buffer = &print_buffer;
	bundle->format_handler = &format_handler;
	init_mem(bundle);
	init_handlers(bundle);
	return (bundle);
}

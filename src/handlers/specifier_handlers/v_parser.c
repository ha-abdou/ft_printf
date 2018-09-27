#include "ft_printf.h"
#include "libft.h"

void		v_parser(void *self)
{
	t_bundle	*bundle;
	char		**str;

	bundle = (t_bundle *)self;
	str = va_arg(*(bundle->var_list), char**);
	bundle->buffer[bundle->buffer_length] = '\0';
	*str = ft_strdup(bundle->buffer);
	if (ft_strchr(bundle->sub_specifiers->flag, '0'))
		bundle->buffer_length = 0;
}

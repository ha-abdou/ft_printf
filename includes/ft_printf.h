#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>

typedef struct s_handlers
{
	char				specifier;
	void				(*parser)(void *self);
	struct s_handlers	*next;
} t_handlers;

typedef struct s_bundle
{
	const char			*format;
	int					i;
	int					format_length;
	int					printed_length;
	va_list				var_list;
	char				**specifier;
	char				(*current_char)(struct s_bundle *self);
	void				(*print)(struct s_bundle *self, int start, int length);
	void				(*format_handler)(struct s_bundle *self);
	t_handlers			*handlers;
} t_bundle;

void		debug_bundle(t_bundle *self);/*todo remove*/
t_bundle	*init_bundle(const char *format, va_list var_list);
void		throw(char *msg, int code);
int     	ft_printf(const char *format, ...);
int			get_specifier_index(t_bundle *self);
void		init_handlers(t_bundle *self);
void		format_handler(t_bundle *self);
void		int_parser(void *self);
void		specifier_error(t_bundle *bundel);


/*todo functions in struct
typedef struct s_bundle
{
	const char	*format;
	int			i;
	char		(current_char)(void *self);
	void		(print)(void self);
	void		(format_handler)(void *self);
	int			printed_length;
	va_list		var_list;
}	t_bundle;
*/
#endif
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIERS "diuXxobp"

#include <stdarg.h>
#include <inttypes.h>

typedef struct s_sub_specifiers
{
	char	*flag;
	int		width;
	int		precision;
	char	*length;
	char	specifier;
} t_sub_specifiers;

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
	int					last_specifier_index;
	va_list				var_list;
	char				**specifier;
	char				(*current_char)(struct s_bundle *self);
	void				(*print)(struct s_bundle *self, int start, int length);
	void				(*format_handler)(struct s_bundle *self);
	t_handlers			*handlers;
} t_bundle;

void				debug_bundle(t_bundle *self);/*todo remove*/
t_bundle			*init_bundle(const char *format, va_list var_list);
void				throw(char *msg, int code);
int     			ft_printf(const char *format, ...);
int					get_specifier_index(t_bundle *self);
void				init_handlers(t_bundle *self);
void				format_handler(t_bundle *self);
void				int_parser(void *self);
void				specifier_error(t_bundle *bundel);
t_sub_specifiers	*get_sub_specifiers(t_bundle *bundle);
int					ft_myputstr(const char *s, int start, int len);
void				format_error(t_bundle *bundle, int i, t_sub_specifiers *sub_specifiers);
int					ft_myputnbr(int n);
char				*int_length_modifier_handler(t_bundle *bundle, t_sub_specifiers *sub_specifiers);
char				*ft_imtoa(intmax_t n);
char				*int_precision_handler(t_sub_specifiers *sub_specifiers, char *number);
char				*width_handler(t_sub_specifiers *sub_specifiers, char *str);
char				*generique_flag_handler(t_sub_specifiers *sub_specifiers, char *str, int i);
void				unsigned_int_parser(void *self);
char				*unsigned_int_length_handler(t_bundle *bundle, t_sub_specifiers *sub_specifiers);
char				*ft_uimtoa_base(uintmax_t n, int b, int up);
int					check_for_zero(t_sub_specifiers *sub_specifiers, char *str);
char				*hashtag_for_hexa(t_sub_specifiers *sub_specifiers, char *str, int *i);
void				ptr_parser(void *self);


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
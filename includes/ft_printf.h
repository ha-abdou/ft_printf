#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIERS "diuXxobpcs%"
# define FLAGS " -+#0"

#include <stdarg.h>
#include <inttypes.h>
#define BUFFERSIZE 128
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
	char				*buffer;
	int					buffer_length;
	int					i;
	int					format_length;
	int					printed_length;
	int					last_specifier_index;
	va_list				*var_list;
	char				**specifier;
	char				(*current_char)(struct s_bundle *self);
	void				(*print_buffer)(struct s_bundle *self);
	void				(*cpy2buffer)(struct s_bundle *self, char *str, int len);
	void				(*format_handler)(struct s_bundle *self);
	t_handlers			*handlers;
	t_sub_specifiers	*sub_specifiers;
} t_bundle;

void				debug_bundle(t_bundle *self);/*todo remove*/
t_bundle			*init_bundle(const char *format, va_list *var_list);
void				throw(char *msg, int code);
int					ft_printf(const char *format, ...);
int					get_specifier_index(t_bundle *self);
void				init_handlers(t_bundle *self);
void				format_handler(t_bundle *self);
void				int_parser(void *self);
void				specifier_error(t_bundle *bundel);
int					get_sub_specifiers(t_bundle *bundle);
void				format_error(t_bundle *bundle, int i);
int					ft_myputnbr(int n);
char				*int_length_modifier_handler(t_bundle *bundle);
char				*ft_imtoa(intmax_t n);
char				*int_precision_handler(t_bundle *bundle, char *number);
char				*width_handler(t_bundle *bundle, char *str);
char				*generique_flag_handler(t_bundle *bundle, char *str, int i);
void				unsigned_int_parser(void *self);
char				*unsigned_int_length_handler(t_bundle *bundle);
char				*ft_uimtoa_base(uintmax_t n, int b, int up);
int					check_for_zero(t_bundle *bundle, char *str);
char				*hashtag_for_hexa(t_bundle *bundle, char *str, int *i);
void				ptr_parser(void *self);
void				char_parser(void *self);
void				percentage_parser(void *self);
int					*char_length_modifier_handler(t_bundle *bundle);
void				char_ptr_parser(void *self);
char				*handler_flag_plus(t_bundle *bundle, char *str, int *i);
char				*handler_flag_zero(char *str);
char				*handler_flag_minus(char *str, int i, int l);
char				*handler_flag_hashtag(char *str, t_bundle *bundle, int *i);
void				wchar_print(t_bundle *bundle, int *str, int len);

#endif
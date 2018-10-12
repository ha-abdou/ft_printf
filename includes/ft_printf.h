#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIERS "dDOUiuXxopcCsS%bBnvr"
# define FLAGS " -+#0"
# define BUFFERSIZE 4096
# include <stdarg.h>
# include <inttypes.h>
# include <wchar.h>
typedef struct			s_sub_specifiers
{
	int		precision;
	char	specifier;
	char	*length;
	char	*flag;
	int		width;
} t_sub_specifiers;
typedef struct s_handlers
{
	void				(*parser)(void *self);
	char				specifier;
	struct s_handlers	*next;
} t_handlers;
typedef struct s_bundle
{
	void				(*cpy2buffer)(struct s_bundle *self, char *str, int len);
	void				(*print_buffer)(struct s_bundle *self, int fd);
	void				(*format_handler)(struct s_bundle *self);
	char				(*current_char)(struct s_bundle *self);
	t_sub_specifiers	*sub_specifiers;
	int					last_specifier;
	int					printed_length;
	int					buffer_length;
	int					format_length;
	char				**specifier;
	t_handlers			*handlers;
	va_list				*var_list;
	const char			*format;
	char				*buffer;
	int					i;
} t_bundle;
char					*int_precision_handler(t_bundle *bundle, char *number, int i);
char					*generique_flag_handler(t_bundle *bundle, char *str, int i);
char					*handler_flag_hashtag(char *str, t_bundle *bundle, int *i);
char					*handler_flag_space(t_bundle *bundle, char *str, int *i);
char					*handler_flag_plus(t_bundle *bundle, char *str, int *i);
char					*hashtag_for_hexa(t_bundle *bundle, char *str, int *i);
void					wchar_print(t_bundle *bundle, wchar_t *str, int len);
void					wstr_print(t_bundle *bundle, wchar_t *str, int len);
t_bundle				*init_bundle(const char *format, va_list *var_list);
wchar_t					*char_length_modifier_handler(t_bundle *bundle);
char					*unsigned_int_length_handler(t_bundle *bundle);
char					*int_length_modifier_handler(t_bundle *bundle);
void					cpy2buffer(t_bundle *self, char *str, int len);
char					*handler_flag_minus(char *str, int i, int l);
char					*ft_uimtoa_base(uintmax_t n, int b, int up);
char					*width_handler(t_bundle *bundle, char *str);
int						check_for_zero(t_bundle *bundle, char *str);
void					format_error(t_bundle *bundle, int i);
int						get_sub_specifiers(t_bundle *bundle);
void					print_buffer(t_bundle *self, int fd);
int						get_specifier_index(t_bundle *self);
int						ft_printf(const char *format, ...);
char					*remove_flags(char *flags, char c);
void					specifier_error(t_bundle *bundel);
void					unsigned_int_parser(void *self);
void					format_handler(t_bundle *self);
void					init_handlers(t_bundle *self);
void					percentage_parser(void *self);
char					*handler_flag_zero(char *str);
char					current_char(t_bundle *self);
void					char_ptr_parser(void *self);
void					throw(char *msg, int code);
void					none_parser(void *self);
void					char_parser(void *self);
void					int_parser(void *self);
void					ptr_parser(void *self);
char					*ft_imtoa(intmax_t n);
void					n_parser(void *self);
void					v_parser(void *self);
void					r_parser(void *self);
int						ft_myputnbr(int n);

#endif

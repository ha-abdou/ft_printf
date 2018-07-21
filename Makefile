NAME = libftprintf.a

FLAGS += -Wall -Wextra 
FLAGS += -I libft/ -I includes/

CC = gcc

COBJ = src/libft/ft_strlen.o src/libft/ft_tolower.o src/libft/ft_toupper.o src/libft/ft_putchar.o src/libft/ft_isdigit.o\
	   src/libft/ft_isalpha.o src/libft/ft_isalnum.o src/libft/ft_isascii.o src/libft/ft_isprint.o src/libft/ft_memset.o\
	   src/libft/ft_bzero.o src/libft/ft_memcpy.o src/libft/ft_memccpy.o src/libft/ft_memmove.o src/libft/ft_memchr.o\
	   src/libft/ft_memcmp.o src/libft/ft_strcpy.o src/libft/ft_strncpy.o src/libft/ft_strcat.o\
	   src/libft/ft_strchr.o src/libft/ft_strrchr.o src/libft/ft_strstr.o src/libft/ft_strnstr.o src/libft/ft_strcmp.o\
	   src/libft/ft_strncmp.o src/libft/ft_atoi.o src/libft/ft_memalloc.o src/libft/ft_memdel.o src/libft/ft_strnew.o\
	   src/libft/ft_strnew.o src/libft/ft_strdel.o src/libft/ft_strclr.o src/libft/ft_striter.o src/libft/ft_striteri.o\
	   src/libft/ft_strmap.o src/libft/ft_strmapi.o src/libft/ft_strequ.o src/libft/ft_strnequ.o src/libft/ft_strsub.o\
	   src/libft/ft_strjoin.o src/libft/ft_strtrim.o src/libft/ft_strsplit.o src/libft/ft_itoa.o src/libft/ft_putchar.o\
	   src/libft/ft_putstr.o src/libft/ft_putendl.o src/libft/ft_putnbr.o src/libft/ft_putchar_fd.o src/libft/ft_putstr_fd.o\
	   src/libft/ft_putendl_fd.o src/libft/ft_putnbr_fd.o src/libft/ft_lstnew.o \
	   src/libft/ft_lstadd.o src/libft/ft_lstiter.o src/libft/ft_lstmap.o src/libft/ft_strdup.o src/libft/ft_strlcat.o\
	   src/libft/ft_lstpush.o

COBJ += src/ft_printf.o src/bundle/init_bundle.o src/functions/throw.o src/handlers/format_handler.o src/functions/get_specifier_index.o\
		src/handlers/init_handlers.o src/handlers/specifier_handles/int_parser.o src/errors_handlers/specifier_error.o

$(NAME): $(COBJ)
	ar rc $(NAME) $(COBJ)
	ranlib $(NAME)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	/bin/rm -f */*.o
	/bin/rm -f */*/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(FLAGS) -c test/main.c
	$(CC) -o run main.o libftprintf.a
	./run

full_test: all
	mv $(NAME) test/$(NAME)
	make -C test/
	./test/system_printf > test/system_output.txt
	./test/user_printf > test/user_output.txt
	$(CC) $(INC) $(COBJ) -o test/comparator test/comparator.c
	./test/comparator

compare:
	$(CC) $(INC) $(COBJ) -o test/comparator test/comparator.c
	./test/comparator

.PHONY: all clean fclean re test
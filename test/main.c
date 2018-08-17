#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_printf(const char *, ...);

#ifdef _FT_USER__
#	define PRINTF_MACRO ft_printf
#else
#	define PRINTF_MACRO printf
#endif

static unsigned int my_strlen(char *str)
{
	unsigned int i = 0;
	while (str[i])
		i++;
	return i;
}

static void	print_test(char *str)
{
#ifdef _FT_USER__
	write(1, str, my_strlen(str));
	write(1, " : ", 3);
#else
	printf("%s : ", str);
#endif
}

static void	my_put_nbr(int nb)
{
	int		div = 1;
	char	c;
	
	while (nb / div >= 10 || nb / div <= -10)
		div = div * 10;
	if (nb < 0)
		write(1, "-", 1);
	while (div)
	{
		if (nb < 0)
			c = ((nb / div) % 10) * -1 + '0';
		else
			c = ((nb / div) % 10) + '0';
		write(1, &c, 1);
		div = div / 10;
	}
}

static void	print_ret(int ret)
{
#ifdef _FT_USER__
	write(1, " ", 1);
	my_put_nbr(ret);
	write(1, "\n", 1);
#else
	printf(" %d\n", ret);
#endif
}

int	main(void)
{
	#include "test_simple.c"
	//#include "test_2.c"
	return (0);
}


/*#include "ft_printf.h"
#include <stdio.h>

int main()
{
	ft_printf("simple string\n");
	   printf("simple string\n");
	printf("*************\n");

	ft_printf("number:%d_____\n", 15);
	   printf("number:%d_____\n", 15);
	printf("*************\n");

	ft_printf("number:%d\n", 15);
	   printf("number:%d\n", 15);
	printf("*************\n");

	ft_printf("%dnumber\n", 15);
	   printf("%dnumber\n", 15);
	printf("*************\n");

	ft_printf("specifier_error%r\n");
	   printf("specifier_error%r\n");
	printf("*************\n");

	ft_printf("%rspecifier_error\n");
	   printf("%rspecifier_error\n");
	printf("*************\n");

	ft_printf("specifier%r_error\n");
	   printf("specifier%r_error\n");
	printf("*************\n");

	ft_printf("%dspecifier_error%r\n",15);
	   printf("%dspecifier_error%r\n",15);
	printf("*************\n");

	ft_printf("%rspecifier%d_error\n",15);
	   printf("%rspecifier%d_error\n",15);
	printf("*************\n");

	ft_printf("%dspecifier_error%15r\n",15);
	   printf("%dspecifier_error%15r\n",15);
	printf("*************\n");

	ft_printf("%15rspecifier%d_error\n",15);
	   printf("%15rspecifier%d_error\n",15);
	printf("*************\n");

	ft_printf("%dspecifier%15r_error\n",15);
	   printf("%dspecifier%15r_error\n",15);
	printf("*************\n");

	ft_printf("%d%d%d%d\n",15,15,15,15);
	   printf("%d%d%d%d\n",15,15,15,15);
	printf("*************\n");


	return 0;
}*/
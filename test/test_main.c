#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
//"1234567%mmmmezzzzd\n"
int main()
{
/*
	int		i =    printf("1234567% **d\n",10);
	int		j = ft_printf("1234567% **d\n",10);

	printf("printf:%d,ft_printf:%d\n", i, j);
*/

	   if (printf("aa%###   ##    *.*12dnnnnnnd%d\n", 10, 15, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.*12dnnnnnnd%d\n", 10, 15, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("aa%###   ##    *.*12dnnnnnnd%d\n", -10, -15, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.*12dnnnnnnd%d\n", -10, -15, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");
/*
	   if (printf("aa%###   ##    *.*12dnnnnnnd%d\n", 5, 10, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.*12dnnnnnnd%d\n", 5, 10, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("aa%###   ##    *.-1012dnnnnnnd%d\n", 5, 8, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.-1012dnnnnnnd%d\n", 5, 8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.-1012d-->%d\n", 5, 8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.-1012d-->%d\n", 5, 8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.-*12d-->%d\n", 5, 8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.-*12d-->%d\n", 5, 8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.-*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.-*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%# -+00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%# -+00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("% -+#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("% -+#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%# +-00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%# +-00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("% *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("% *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%- *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%- *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%+ *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%+ *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%# *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%# *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("% -#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("% -#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%0 *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%0 *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%+0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%+0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%#0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%#0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");
*/
	return 0;
}
#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
//"1234567%mmmmezzzzd\n"
int main()
{
/*
	int i =    printf("{% 03d}\n", 0);
	int j = ft_printf("{% 03d}\n", 0);
*/
//	int i = printf("%lls\n", L"ݗݜशব");
//	char **str;

//	str = (char **)malloc(sizeof(char *));

	int j = ft_printf("%lls\n", L"ݗݜशব");

	printf("%d\n", j);

/*	   printf("%#-10.20%\n");
	ft_printf("%#-10.20%\n");
*/
/*	printf("%s\n", ft_uimtoa_base(16, 16, 0));;
	printf("%x\n", 16);;
*/


//	#include "./test_somme_errors.c"
//	#include "./test_d_int_main.c" //ok
//	#include "./test_i_int_main.c" //ok
//	#include "./test_u_int_main.c" //ok
//	#include "./test_x_int_main.c" //ok
//	#include "./test_X_int_main.c" //ok
//	#include "./test_o_int_main.c" //ok
//	#include "./test_b_int_main.c"
//	#include "./test_p_int_main.c" //ok
//	#include "./test_c_int_main.c" //ok wchar
//	#include "./test_s_main.c"     //ok wchar
//	#include "./test_%_main.c"     //ok

	return (0);
}
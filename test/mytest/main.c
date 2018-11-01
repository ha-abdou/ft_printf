
#include <wchar.h>
#include <locale.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "ft_printf.h"

//"1234567%mmmmezzzzd\n"
int main()
{
/*	int		string[3];

	string[0] = 945;
	string[1] = 1823;
	string[2] = 984;
*/
	   printf("%lld\n", (long long int)0xff11ff11ff88);

	ft_printf("%lld\n", 0xff11ff11ff88);
/*	if (!setlocale(LC_ALL, "en_US.UTF-8"))
    	printf("Echec setlocal\n");
    


    int	i =    printf("%05.1u %3.4hu %-4.7U", 45, (unsigned short)-1789, 147);
    printf("\n");
	int	j = ft_printf("%05.1u %3.4hu %-4.7U", 45, (unsigned short)-1789, 147);
    printf("\n");

	printf("%d, %d\n", i, j);
*/

/*
	wchar_t		str[] = L"ݗݜशব";

    if (!setlocale(LC_ALL, ""))
    	printf("Echec setlocal\n");


	int	i =    printf("%.2S\n", L"ব");
	int	j = ft_printf("%.2S\n", L"ব");

	printf("%d, %d\n", i, j);
*/

//	printf("-----\n");
//:w	printf("%d,\n", i);

//	char **str;

//	str = (char **)malloc(sizeof(char *));
/*
	int j = ft_printf("%ls\n", L"ݗݜशব");

	printf("%d\n", j);*/
/*	int j = ft_printf("%.1s\n", 0);

	printf("%d\n", j);*/
/*	   printf("%#-10.20%\n");
	ft_printf("%#-10.20%\n");
*/

/*
ft_printf("%s\n", "dsdfsdfs");
ft_printf("-\n");
   printf("%s\n", "dsdfsdfs");
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
//	#include "./test_c_int_main.c" //ok
//	#include "./test_s_main.c"     //ok
//	#include "./test_%_main.c"     //ok

	return (0);
}
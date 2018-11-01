//
// Created by abdou on 10/27/2018.
//

#include <wchar.h>
#include <locale.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "ft_printf.h"

int main ()
{
    if (!setlocale(LC_ALL, "en_US.UTF-8"))
        printf("Echec setlocal\n");
//	#include "../test_d_int_main.c"
//  #include "../test_c_int_main.c"
//  #include "../test_s_main.c"
//  #include "../test_i_int_main.c"
//  #include "../test_u_int_main.c"
//  #include "../test_x_int_main.c"
//  #include "../test_XX_int_main.c"
//  #include "../test_o_int_main.c"
//  #include "../test_p_int_main.c"
    #include "../test_%_main.c"


    return (0);
}


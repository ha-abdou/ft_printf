
	   if (printf("%s\n", "abc") !=
	ft_printf("%s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");


	   if (printf("%s\n", 0) !=
	ft_printf("%s\n", 0))
	   	printf("no match:\n");
	printf("\n");


	   if (printf("%s\n", "abc") !=
	ft_printf("%s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh255,%hhs\n", "abc" ) !=
	ft_printf("hh255,%hhs\n", "abc" ))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh256,%hhs\n", "abc" ) !=
	ft_printf("hh256,%hhs\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("h65535 ,%hs\n", "abc" ) !=
	ft_printf("h65535 ,%hs\n", "abc" ))
	   	printf("no match:\n");
	printf("\n");

	if (printf("h65536,%hs\n", "abc") !=
	ft_printf("h65536,%hs\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("l ,%ls\n", "abc" ) !=
	ft_printf("l ,%ls\n", "abc" ))
	  	printf("no match:\n");
	printf("\n");

	if (printf("l,%ls\n", "abc") !=
	ft_printf("l,%ls\n", "abc"))
	   	printf("no match:\n");
	printf("\n");


	   if (printf("ll,%lls\n", "abc" ) !=
	ft_printf("ll,%lls\n", "abc"))
	   	printf("no match:\n");
	printf("\n");


	   if (printf("z65535,%zs\n", "abc") !=
	ft_printf("z65535,%zs\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("z65536,%zs\n", "abc") !=
	ft_printf("z65536,%zs\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".0a,%.0s\n", "abc") !=
	ft_printf(".0a,%.0s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".10a,%.10s\n", "abc") !=
	ft_printf(".10a,%.10s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-10a,%.-10s\n", "abc") !=
	ft_printf(".-10a,%.-10s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");


	if (printf(".0a,%.0s\n", "abc") !=
	ft_printf(".0a,%.0s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".10-10,%.10s\n", "abc") !=
	ft_printf(".10-10,%.10s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-10-10,%.-10s\n", "abc") !=
	ft_printf(".-10-10,%.-10s\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".00,%.0s\n", 0) !=
	ft_printf(".00,%.0s\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".100,%.10s\n", 0) !=
	ft_printf(".100,%.10s\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.-10s\n", 0) !=
	ft_printf(".-100,%.-10s\n", 0))
	   	printf("no match:\n");
	printf("\n");

   if (printf(".*a,%.*s\n", 0 ,"abc") !=
	ft_printf(".*a,%.*s\n", 0, "abc"))
	   	printf("no match:\n");
	printf("\n");

   if (printf(".*a,%.*s\n", 10 ,"abc") !=
	ft_printf(".*a,%.*s\n", 10, "abc"))
	   	printf("no match:\n");
	printf("\n");

   if (printf(".*a,%.*s\n", -10, "abc") !=
	ft_printf(".*a,%.*s\n", -10, "abc"))
	   	printf("no match:\n");
	printf("\n");

   if (printf(".*a,%.*s\n", -1, "abc") !=
	ft_printf(".*a,%.*s\n", -1, "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("0a,%0s--\n", "abc") !=
	ft_printf("0a,%0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("10a,%10s--\n", "abc") !=
	ft_printf("10a,%10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-10a,%-10s--\n", "abc") !=
	ft_printf("-10a,%-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("*a,%*s--\n", -10, "abc") !=
	ft_printf("*a,%*s--\n", -10, "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("0a,%0s--\n", "abc") !=
	ft_printf("0a,%0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("10-10,%10s--\n", "abc") !=
	ft_printf("10-10,%10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-10-10,%-10s--\n", "abc") !=
	ft_printf("-10-10,%-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("00,%0s--\n", 0) !=
	ft_printf("00,%0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf("100 ,%10s--\n", "abc") !=
	 ft_printf("100 ,%10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

	if (printf("100 ,%10s--\n", 0) !=
	 ft_printf("100 ,%10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

    if (printf("-100,%-10s--\n", 0) !=
	 ft_printf("-100,%-10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("#,%#s--\n", "abc") !=
	ft_printf("#,%#s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#s--\n", "abc") !=
	ft_printf("#,%#s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#s--\n", 0) !=
	ft_printf("#,%#s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("-,%-s--\n", "abc") !=
	ft_printf("-,%-s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-s--\n", "abc") !=
	ft_printf("-,%-s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-s--\n", 0) !=
	ft_printf("-,%-s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+,%+s--\n", "abc") !=
	ft_printf("+,%+s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+s--\n", "abc") !=
	ft_printf("+,%+s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+s--\n", 0) !=
	ft_printf("+,%+s--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf(" ,% s--\n", "abc") !=
	ft_printf(" ,% s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% s--\n", "abc") !=
	ft_printf(" ,% s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% s--\n", 0) !=
	ft_printf(" ,% s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("0,%0s--\n", "abc") !=
	ft_printf("0,%0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0s--\n", "abc") !=
	ft_printf("0,%0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0s--\n", 0) !=
	ft_printf("0,%0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020,%020s--\n", "abc") !=
	ft_printf("020,%020s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020s--\n", "abc") !=
	ft_printf("020,%020s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020s--\n", 0) !=
	ft_printf("020,%020s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf(" 20,% 20s--\n", "abc") !=
	ft_printf(" 20,% 20s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20s--\n", "abc") !=
	ft_printf(" 20,% 20s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20s--\n", 0) !=
	ft_printf(" 20,% 20s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+20,%+20s--\n", "abc") !=
	ft_printf("+20,%+20s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20s--\n", "abc") !=
	ft_printf("+20,%+20s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20s--\n", 0) !=
	ft_printf("+20,%+20s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+s--\n", 0) !=
	ft_printf("+,%+s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20,%20s--\n", 0) !=
	ft_printf("20,%20s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("-20,%-20s--\n", "abc") !=
	ft_printf("-20,%-20s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20s--\n", "abc") !=
	ft_printf("-20,%-20s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20s--\n", 0) !=
	ft_printf("-20,%-20s--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("020.a,%020.10s--\n", "abc") !=
	ft_printf("020.a,%020.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.a,%020.10s--\n", "abc") !=
	ft_printf("020.a,%020.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.a,%020.10s--\n", 0) !=
	ft_printf("020.a,%020.10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.a,% 20.10s--\n", "abc") !=
	ft_printf(" 20.a,% 20.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.a,% 20.10s--\n", "abc") !=
	ft_printf(" 20.a,% 20.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.a,% 20.10s--\n", 0) !=
	ft_printf(" 20.a,% 20.10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.a,%+20.10s--\n", "abc") !=
	ft_printf("+20.a,%+20.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.a,%+20.10s--\n", "abc") !=
	ft_printf("+20.a,%+20.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.a,%+20.10s--\n", 0) !=
	ft_printf("+20.a,%+20.10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.a,%20.10s--\n", 0) !=
	ft_printf("20.a,%20.10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.a,%-20.10s--\n", "abc") !=
	ft_printf("-20.a,%-20.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.a,%-20.10s--\n", "abc") !=
	ft_printf("-20.a,%-20.10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.a,%-20.10s--\n", 0) !=
	ft_printf("-20.a,%-20.10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.1,%020.1s--\n", "abc") !=
	ft_printf("020.1,%020.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.1s--\n", "abc") !=
	ft_printf("020.1,%020.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.1s--\n", 0) !=
	ft_printf("020.1,%020.1s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1s--\n", "abc") !=
	ft_printf(" 20.1,% 20.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1s--\n", "abc") !=
	ft_printf(" 20.1,% 20.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1s--\n", 0) !=
	ft_printf(" 20.1,% 20.1s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1s--\n", "abc") !=
	ft_printf("+20.1,%+20.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1s--\n", "abc") !=
	ft_printf("+20.1,%+20.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1s--\n", 0) !=
	ft_printf("+20.1,%+20.1s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.1,%20.1s--\n", 0) !=
	ft_printf("20.1,%20.1s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1s--\n", "abc") !=
	ft_printf("-20.1,%-20.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1s--\n", "abc") !=
	ft_printf("-20.1,%-20.1s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1s--\n", 0) !=
	ft_printf("-20.1,%-20.1s--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.-10,%020.-10s--\n", "abc") !=
	ft_printf("020.-10,%020.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10s--\n", "abc") !=
	ft_printf("020.-10,%020.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10s--\n", 0) !=
	ft_printf("020.-10,%020.-10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10s--\n", "abc") !=
	ft_printf(" 20.-10,% 20.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10s--\n", "abc") !=
	ft_printf(" 20.-10,% 20.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10s--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10s--\n", "abc") !=
	ft_printf("+20.-10,%+20.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10s--\n", "abc") !=
	ft_printf("+20.-10,%+20.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10s--\n", 0) !=
	ft_printf("+20.-10,%+20.-10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.-10,%20.-10s--\n", 0) !=
	ft_printf("20.-10,%20.-10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10s--\n", "abc") !=
	ft_printf("-20.-10,%-20.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10s--\n", "abc") !=
	ft_printf("-20.-10,%-20.-10s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10s--\n", 0) !=
	ft_printf("-20.-10,%-20.-10s--\n", 0))
	   	printf("no match:\n");
	printf("\n");



			if (printf("020.0,%020.0s--\n", "abc") !=
	ft_printf("020.0,%020.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0s--\n", "abc") !=
	ft_printf("020.0,%020.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0s--\n", 0) !=
	ft_printf("020.0,%020.0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0s--\n", "abc") !=
	ft_printf(" 20.0,% 20.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0s--\n", "abc") !=
	ft_printf(" 20.0,% 20.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0s--\n", 0) !=
	ft_printf(" 20.0,% 20.0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0s--\n", "abc") !=
	ft_printf("+20.0,%+20.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0s--\n", "abc") !=
	ft_printf("+20.0,%+20.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0s--\n", 0) !=
	ft_printf("+20.0,%+20.0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.0,%20.0s--\n", 0) !=
	ft_printf("20.0,%20.0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0s--\n", "abc") !=
	ft_printf("-20.0,%-20.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0s--\n", "abc") !=
	ft_printf("-20.0,%-20.0s--\n", "abc"))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0s--\n", 0) !=
	ft_printf("-20.0,%-20.0s--\n", 0))
	   	printf("no match:\n");
	printf("\n");

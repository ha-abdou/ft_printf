
	   if (ft_printf("%%\n", 1) !=
	ft_printf("%%\n", 1))
	   	ft_printf("no match:\n");
	ft_printf("\n");
/*
	   if (ft_printf("%%\n", 2) !=
	ft_printf("%%\n", 2))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("%%\n", 0) !=
	ft_printf("%%\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("%%\n", -1) !=
	ft_printf("%%\n", -1))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("%%\n", 2147483648) !=
	ft_printf("%%\n", 2147483648))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("hh127,%hh%\n", 127) !=
	ft_printf("hh127,%hh%\n", 127))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("hh128,%hh%\n", 128) !=
	ft_printf("hh128,%hh%\n", 128))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("h32767,%h%\n", 32767) !=
	ft_printf("h32767,%h%\n", 32767))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("h32768,%h%\n", 32768) !=
	ft_printf("h32768,%h%\n", 32768))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("l2147483647,%l%\n", 2147483647) !=
	ft_printf("l2147483647,%l%\n", 2147483647))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("l2147483648,%l%\n", 2147483648) !=
	ft_printf("l2147483648,%l%\n", 2147483648))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("ll9223372036854775807,%ll%\n", 9223372036854775807) !=
	ft_printf("ll9223372036854775807,%ll%\n", 9223372036854775807))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("ll9223372036854775808,%ll%\n", 9223372036854775808) !=
	ft_printf("ll9223372036854775808,%ll%\n", 9223372036854775808))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("ll-9223372036854775807,%ll%\n", -9223372036854775807) !=
	ft_printf("ll-9223372036854775807,%ll%\n", -9223372036854775807))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("z65535,%z%\n", 65535) !=
	ft_printf("z65535,%z%\n", 65535))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("z65536,%z%\n", 65536) !=
	ft_printf("z65536,%z%\n", 65536))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".010,%.0%\n", 10) !=
	ft_printf(".010,%.0%\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".1010,%.10%\n", 10) !=
	ft_printf(".1010,%.10%\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".-1010,%.-10%\n", 10) !=
	ft_printf(".-1010,%.-10%\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");


	if (ft_printf(".010,%.0%\n", -10) !=
	ft_printf(".010,%.0%\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".10-10,%.10%\n", -10) !=
	ft_printf(".10-10,%.10%\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".-10-10,%.-10%\n", -10) !=
	ft_printf(".-10-10,%.-10%\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".00,%.0%\n", 0) !=
	ft_printf(".00,%.0%\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".100,%.10%\n", 0) !=
	ft_printf(".100,%.10%\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".-100,%.-10%\n", 0) !=
	ft_printf(".-100,%.-10%\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".*10,%.*%\n", 0 ,10) !=
	ft_printf(".*10,%.*%\n", 0, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".*10,%.*%\n", 10 ,10) !=
	ft_printf(".*10,%.*%\n", 10, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

			if (ft_printf(".*10,%.*%\n", -10 ,10) !=
	ft_printf(".*10,%.*%\n", -10, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("010,%0%--\n", 10) !=
	ft_printf("010,%0%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("1010,%10%--\n", 10) !=
	ft_printf("1010,%10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-1010,%-10%--\n", 10) !=
	ft_printf("-1010,%-10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("*10,%*%--\n", -10, 10) !=
	ft_printf("*10,%*%--\n", -10, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("010,%0%--\n", -10) !=
	ft_printf("010,%0%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("10-10,%10%--\n", -10) !=
	ft_printf("10-10,%10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-10-10,%-10%--\n", -10) !=
	ft_printf("-10-10,%-10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("00,%0%--\n", 0) !=
	ft_printf("00,%0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("100,%10%--\n", 0) !=
	ft_printf("100,%10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-100,%-10%--\n", 0) !=
	ft_printf("-100,%-10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("#,%#%--\n", 10) !=
	ft_printf("#,%#%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("#,%#%--\n", -10) !=
	ft_printf("#,%#%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("#,%#%--\n", 0) !=
	ft_printf("#,%#%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("-,%-%--\n", 10) !=
	ft_printf("-,%-%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-,%-%--\n", -10) !=
	ft_printf("-,%-%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-,%-%--\n", 0) !=
	ft_printf("-,%-%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("+,%+%--\n", 10) !=
	ft_printf("+,%+%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+,%+%--\n", -10) !=
	ft_printf("+,%+%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+,%+%--\n", 0) !=
	ft_printf("+,%+%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");



		if (ft_printf(" ,% %--\n", 10) !=
	ft_printf(" ,% %--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" ,% %--\n", -10) !=
	ft_printf(" ,% %--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" ,% %--\n", 0) !=
	ft_printf(" ,% %--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("0,%0%--\n", 10) !=
	ft_printf("0,%0%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("0,%0%--\n", -10) !=
	ft_printf("0,%0%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("0,%0%--\n", 0) !=
	ft_printf("0,%0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");




		if (ft_printf("020,%020%--\n", 10) !=
	ft_printf("020,%020%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020,%020%--\n", -10) !=
	ft_printf("020,%020%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020,%020%--\n", 0) !=
	ft_printf("020,%020%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf(" 20,% 20%--\n", 10) !=
	ft_printf(" 20,% 20%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20,% 20%--\n", -10) !=
	ft_printf(" 20,% 20%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20,% 20%--\n", 0) !=
	ft_printf(" 20,% 20%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("+20,%+20%--\n", 10) !=
	ft_printf("+20,%+20%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20,%+20%--\n", -10) !=
	ft_printf("+20,%+20%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20,%+20%--\n", 0) !=
	ft_printf("+20,%+20%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+,%+%--\n", 0) !=
	ft_printf("+,%+%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20,%20%--\n", 0) !=
	ft_printf("20,%20%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20,%-20%--\n", 10) !=
	ft_printf("-20,%-20%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20,%-20%--\n", -10) !=
	ft_printf("-20,%-20%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20,%-20%--\n", 0) !=
	ft_printf("-20,%-20%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");



		if (ft_printf("020.10,%020.10%--\n", 10) !=
	ft_printf("020.10,%020.10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.10,%020.10%--\n", -10) !=
	ft_printf("020.10,%020.10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.10,%020.10%--\n", 0) !=
	ft_printf("020.10,%020.10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.10,% 20.10%--\n", 10) !=
	ft_printf(" 20.10,% 20.10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.10,% 20.10%--\n", -10) !=
	ft_printf(" 20.10,% 20.10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.10,% 20.10%--\n", 0) !=
	ft_printf(" 20.10,% 20.10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.10,%+20.10%--\n", 10) !=
	ft_printf("+20.10,%+20.10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.10,%+20.10%--\n", -10) !=
	ft_printf("+20.10,%+20.10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.10,%+20.10%--\n", 0) !=
	ft_printf("+20.10,%+20.10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.10,%20.10%--\n", 0) !=
	ft_printf("20.10,%20.10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.10,%-20.10%--\n", 10) !=
	ft_printf("-20.10,%-20.10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.10,%-20.10%--\n", -10) !=
	ft_printf("-20.10,%-20.10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.10,%-20.10%--\n", 0) !=
	ft_printf("-20.10,%-20.10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");




		if (ft_printf("020.1,%020.1%--\n", 10) !=
	ft_printf("020.1,%020.1%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.1,%020.0%--\n", -10) !=
	ft_printf("020.1,%020.1%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.1,%020.1%--\n", 0) !=
	ft_printf("020.1,%020.1%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.1,% 20.1%--\n", 10) !=
	ft_printf(" 20.1,% 20.1%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.1,% 20.1%--\n", -10) !=
	ft_printf(" 20.1,% 20.1%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.1,% 20.1%--\n", 0) !=
	ft_printf(" 20.1,% 20.1%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.1,%+20.1%--\n", 10) !=
	ft_printf("+20.1,%+20.1%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.1,%+20.1%--\n", -10) !=
	ft_printf("+20.1,%+20.1%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.1,%+20.1%--\n", 0) !=
	ft_printf("+20.1,%+20.1%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.1,%20.1%--\n", 0) !=
	ft_printf("20.1,%20.1%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.1,%-20.1%--\n", 10) !=
	ft_printf("-20.1,%-20.1%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.1,%-20.1%--\n", -10) !=
	ft_printf("-20.1,%-20.1%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.1,%-20.1%--\n", 0) !=
	ft_printf("-20.1,%-20.1%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");




		if (ft_printf("020.-10,%020.-10%--\n", 10) !=
	ft_printf("020.-10,%020.-10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.-10,%020.-10%--\n", -10) !=
	ft_printf("020.-10,%020.-10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.-10,%020.-10%--\n", 0) !=
	ft_printf("020.-10,%020.-10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.-10,% 20.-10%--\n", 10) !=
	ft_printf(" 20.-10,% 20.-10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.-10,% 20.-10%--\n", -10) !=
	ft_printf(" 20.-10,% 20.-10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.-10,% 20.-10%--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.-10,%+20.-10%--\n", 10) !=
	ft_printf("+20.-10,%+20.-10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.-10,%+20.-10%--\n", -10) !=
	ft_printf("+20.-10,%+20.-10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.-10,%+20.-10%--\n", 0) !=
	ft_printf("+20.-10,%+20.-10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.-10,%20.-10%--\n", 0) !=
	ft_printf("20.-10,%20.-10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.-10,%-20.-10%--\n", 10) !=
	ft_printf("-20.-10,%-20.-10%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.-10,%-20.-10%--\n", -10) !=
	ft_printf("-20.-10,%-20.-10%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.-10,%-20.-10%--\n", 0) !=
	ft_printf("-20.-10,%-20.-10%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");



			if (ft_printf("020.0,%020.0%--\n", 10) !=
	ft_printf("020.0,%020.0%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.0,%020.0%--\n", -10) !=
	ft_printf("020.0,%020.0%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.0,%020.0%--\n", 0) !=
	ft_printf("020.0,%020.0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.0,% 20.0%--\n", 10) !=
	ft_printf(" 20.0,% 20.0%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.0,% 20.0%--\n", -10) !=
	ft_printf(" 20.0,% 20.0%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.0,% 20.0%--\n", 0) !=
	ft_printf(" 20.0,% 20.0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.0,%+20.0%--\n", 10) !=
	ft_printf("+20.0,%+20.0%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.0,%+20.0%--\n", -10) !=
	ft_printf("+20.0,%+20.0%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.0,%+20.0%--\n", 0) !=
	ft_printf("+20.0,%+20.0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.0,%20.0%--\n", 0) !=
	ft_printf("20.0,%20.0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.0,%-20.0%--\n", 10) !=
	ft_printf("-20.0,%-20.0%--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.0,%-20.0%--\n", -10) !=
	ft_printf("-20.0,%-20.0%--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.0,%-20.0%--\n", 0) !=
	ft_printf("-20.0,%-20.0%--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");
*/

	   if (printf("%o\n", 2147483647) !=
	ft_printf("%o\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%o\n", 2147483648) !=
	ft_printf("%o\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh127,%hho\n", 127) !=
	ft_printf("hh127,%hho\n", 127))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh128,%hho\n", 128) !=
	ft_printf("hh128,%hho\n", 128))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("h32767,%ho\n", 32767) !=
	ft_printf("h32767,%ho\n", 32767))
	   	printf("no match:\n");
	printf("\n");

	if (printf("h32768,%ho\n", 32768) !=
	ft_printf("h32768,%ho\n", 32768))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("l2147483647,%lo\n", 2147483647) !=
	ft_printf("l2147483647,%lo\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	if (printf("l2147483648,%lo\n", 2147483648) !=
	ft_printf("l2147483648,%lo\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("ll9223372036854775807,%llo\n", 9223372036854775807) !=
	ft_printf("ll9223372036854775807,%llo\n", 9223372036854775807))
	   	printf("no match:\n");
	printf("\n");

//	if (printf("ll9223372036854775808,%llo\n", 9223372036854775808) !=
//	ft_printf("ll9223372036854775808,%llo\n", 9223372036854775808))
//	   	printf("no match:\n");
//	printf("\n");

		if (printf("ll-9223372036854775807,%llo\n", -9223372036854775807) !=
	ft_printf("ll-9223372036854775807,%llo\n", -9223372036854775807))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("z65535,%zo\n", 65535) !=
	ft_printf("z65535,%zo\n", 65535))
	   	printf("no match:\n");
	printf("\n");

	if (printf("z65536,%zo\n", 65536) !=
	ft_printf("z65536,%zo\n", 65536))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".010,%.0o\n", 10) !=
	ft_printf(".010,%.0o\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".1010,%.10o\n", 10) !=
	ft_printf(".1010,%.10o\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-1010,%.-10o\n", 10) !=
	ft_printf(".-1010,%.-10o\n", 10))
	   	printf("no match:\n");
	printf("\n");


	if (printf(".010,%.0o\n", -10) !=
	ft_printf(".010,%.0o\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".10-10,%.10o\n", -10) !=
	ft_printf(".10-10,%.10o\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-10-10,%.-10o\n", -10) !=
	ft_printf(".-10-10,%.-10o\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".00,%.0o\n", 0) !=
	ft_printf(".00,%.0o\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".100,%.10o\n", 0) !=
	ft_printf(".100,%.10o\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.-10o\n", 0) !=
	ft_printf(".-100,%.-10o\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*o\n", 0 ,10) !=
	ft_printf(".*10,%.*o\n", 0, 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*o\n", 10 ,10) !=
	ft_printf(".*10,%.*o\n", 10, 10))
	   	printf("no match:\n");
	printf("\n");

			if (printf(".*10,%.*o\n", -10 ,10) !=
	ft_printf(".*10,%.*o\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0o--\n", 10) !=
	ft_printf("010,%0o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("1010,%10o--\n", 10) !=
	ft_printf("1010,%10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-1010,%-10o--\n", 10) !=
	ft_printf("-1010,%-10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("*10,%*o--\n", -10, 10) !=
	ft_printf("*10,%*o--\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0o--\n", -10) !=
	ft_printf("010,%0o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("10-10,%10o--\n", -10) !=
	ft_printf("10-10,%10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-10-10,%-10o--\n", -10) !=
	ft_printf("-10-10,%-10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("00,%0o--\n", 0) !=
	ft_printf("00,%0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf("100,%10o--\n", 0) !=
	ft_printf("100,%10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-100,%-10o--\n", 0) !=
	ft_printf("-100,%-10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("#,%#o--\n", 10) !=
	ft_printf("#,%#o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#o--\n", -10) !=
	ft_printf("#,%#o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#o--\n", 0) !=
	ft_printf("#,%#o--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("-,%-o--\n", 10) !=
	ft_printf("-,%-o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-o--\n", -10) !=
	ft_printf("-,%-o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-o--\n", 0) !=
	ft_printf("-,%-o--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+,%+o--\n", 10) !=
	ft_printf("+,%+o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+o--\n", -10) !=
	ft_printf("+,%+o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+o--\n", 0) !=
	ft_printf("+,%+o--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf(" ,% o--\n", 10) !=
	ft_printf(" ,% o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% o--\n", -10) !=
	ft_printf(" ,% o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% o--\n", 0) !=
	ft_printf(" ,% o--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("0,%0o--\n", 10) !=
	ft_printf("0,%0o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0o--\n", -10) !=
	ft_printf("0,%0o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0o--\n", 0) !=
	ft_printf("0,%0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020,%020o--\n", 10) !=
	ft_printf("020,%020o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020o--\n", -10) !=
	ft_printf("020,%020o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020o--\n", 0) !=
	ft_printf("020,%020o--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf(" 20,% 20o--\n", 10) !=
	ft_printf(" 20,% 20o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20o--\n", -10) !=
	ft_printf(" 20,% 20o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20o--\n", 0) !=
	ft_printf(" 20,% 20o--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+20,%+20o--\n", 10) !=
	ft_printf("+20,%+20o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20o--\n", -10) !=
	ft_printf("+20,%+20o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20o--\n", 0) !=
	ft_printf("+20,%+20o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+o--\n", 0) !=
	ft_printf("+,%+o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20,%20o--\n", 0) !=
	ft_printf("20,%20o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20o--\n", 10) !=
	ft_printf("-20,%-20o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20o--\n", -10) !=
	ft_printf("-20,%-20o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20o--\n", 0) !=
	ft_printf("-20,%-20o--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf("020.10,%020.10o--\n", 10) !=
	ft_printf("020.10,%020.10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10o--\n", -10) !=
	ft_printf("020.10,%020.10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10o--\n", 0) !=
	ft_printf("020.10,%020.10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10o--\n", 10) !=
	ft_printf(" 20.10,% 20.10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10o--\n", -10) !=
	ft_printf(" 20.10,% 20.10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10o--\n", 0) !=
	ft_printf(" 20.10,% 20.10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10o--\n", 10) !=
	ft_printf("+20.10,%+20.10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10o--\n", -10) !=
	ft_printf("+20.10,%+20.10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10o--\n", 0) !=
	ft_printf("+20.10,%+20.10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.10,%20.10o--\n", 0) !=
	ft_printf("20.10,%20.10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10o--\n", 10) !=
	ft_printf("-20.10,%-20.10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10o--\n", -10) !=
	ft_printf("-20.10,%-20.10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10o--\n", 0) !=
	ft_printf("-20.10,%-20.10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.1,%020.1o--\n", 10) !=
	ft_printf("020.1,%020.1o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.0o--\n", -10) !=
	ft_printf("020.1,%020.1o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.1o--\n", 0) !=
	ft_printf("020.1,%020.1o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1o--\n", 10) !=
	ft_printf(" 20.1,% 20.1o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1o--\n", -10) !=
	ft_printf(" 20.1,% 20.1o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1o--\n", 0) !=
	ft_printf(" 20.1,% 20.1o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1o--\n", 10) !=
	ft_printf("+20.1,%+20.1o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1o--\n", -10) !=
	ft_printf("+20.1,%+20.1o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1o--\n", 0) !=
	ft_printf("+20.1,%+20.1o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.1,%20.1o--\n", 0) !=
	ft_printf("20.1,%20.1o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1o--\n", 10) !=
	ft_printf("-20.1,%-20.1o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1o--\n", -10) !=
	ft_printf("-20.1,%-20.1o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1o--\n", 0) !=
	ft_printf("-20.1,%-20.1o--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.-10,%020.-10o--\n", 10) !=
	ft_printf("020.-10,%020.-10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10o--\n", -10) !=
	ft_printf("020.-10,%020.-10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10o--\n", 0) !=
	ft_printf("020.-10,%020.-10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10o--\n", 10) !=
	ft_printf(" 20.-10,% 20.-10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10o--\n", -10) !=
	ft_printf(" 20.-10,% 20.-10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10o--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10o--\n", 10) !=
	ft_printf("+20.-10,%+20.-10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10o--\n", -10) !=
	ft_printf("+20.-10,%+20.-10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10o--\n", 0) !=
	ft_printf("+20.-10,%+20.-10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.-10,%20.-10o--\n", 0) !=
	ft_printf("20.-10,%20.-10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10o--\n", 10) !=
	ft_printf("-20.-10,%-20.-10o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10o--\n", -10) !=
	ft_printf("-20.-10,%-20.-10o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10o--\n", 0) !=
	ft_printf("-20.-10,%-20.-10o--\n", 0))
	   	printf("no match:\n");
	printf("\n");



			if (printf("020.0,%020.0o--\n", 10) !=
	ft_printf("020.0,%020.0o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0o--\n", -10) !=
	ft_printf("020.0,%020.0o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0o--\n", 0) !=
	ft_printf("020.0,%020.0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0o--\n", 10) !=
	ft_printf(" 20.0,% 20.0o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0o--\n", -10) !=
	ft_printf(" 20.0,% 20.0o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0o--\n", 0) !=
	ft_printf(" 20.0,% 20.0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0o--\n", 10) !=
	ft_printf("+20.0,%+20.0o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0o--\n", -10) !=
	ft_printf("+20.0,%+20.0o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0o--\n", 0) !=
	ft_printf("+20.0,%+20.0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.0,%20.0o--\n", 0) !=
	ft_printf("20.0,%20.0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0o--\n", 10) !=
	ft_printf("-20.0,%-20.0o--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0o--\n", -10) !=
	ft_printf("-20.0,%-20.0o--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0o--\n", 0) !=
	ft_printf("-20.0,%-20.0o--\n", 0))
	   	printf("no match:\n");
	printf("\n");
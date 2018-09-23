
	   if (ft_printf("%b\n", 1) !=
	ft_printf("%b\n", 1))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("%b\n", 2) !=
	ft_printf("%b\n", 2))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("%b\n", 0) !=
	ft_printf("%b\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("%b\n", -1) !=
	ft_printf("%b\n", -1))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("%b\n", 2147483648) !=
	ft_printf("%b\n", 2147483648))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("hh127,%hhb\n", 127) !=
	ft_printf("hh127,%hhb\n", 127))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("hh128,%hhb\n", 128) !=
	ft_printf("hh128,%hhb\n", 128))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("h32767,%hb\n", 32767) !=
	ft_printf("h32767,%hb\n", 32767))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("h32768,%hb\n", 32768) !=
	ft_printf("h32768,%hb\n", 32768))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("l2147483647,%lb\n", 2147483647) !=
	ft_printf("l2147483647,%lb\n", 2147483647))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("l2147483648,%lb\n", 2147483648) !=
	ft_printf("l2147483648,%lb\n", 2147483648))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("ll9223372036854775807,%llb\n", 9223372036854775807) !=
	ft_printf("ll9223372036854775807,%llb\n", 9223372036854775807))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("ll9223372036854775808,%llb\n", 9223372036854775808) !=
	ft_printf("ll9223372036854775808,%llb\n", 9223372036854775808))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("ll-9223372036854775807,%llb\n", -9223372036854775807) !=
	ft_printf("ll-9223372036854775807,%llb\n", -9223372036854775807))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	   if (ft_printf("z65535,%zb\n", 65535) !=
	ft_printf("z65535,%zb\n", 65535))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("z65536,%zb\n", 65536) !=
	ft_printf("z65536,%zb\n", 65536))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".010,%.0b\n", 10) !=
	ft_printf(".010,%.0b\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".1010,%.10b\n", 10) !=
	ft_printf(".1010,%.10b\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".-1010,%.-10b\n", 10) !=
	ft_printf(".-1010,%.-10b\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");


	if (ft_printf(".010,%.0b\n", -10) !=
	ft_printf(".010,%.0b\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".10-10,%.10b\n", -10) !=
	ft_printf(".10-10,%.10b\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".-10-10,%.-10b\n", -10) !=
	ft_printf(".-10-10,%.-10b\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".00,%.0b\n", 0) !=
	ft_printf(".00,%.0b\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf(".100,%.10b\n", 0) !=
	ft_printf(".100,%.10b\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".-100,%.-10b\n", 0) !=
	ft_printf(".-100,%.-10b\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".*10,%.*b\n", 0 ,10) !=
	ft_printf(".*10,%.*b\n", 0, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(".*10,%.*b\n", 10 ,10) !=
	ft_printf(".*10,%.*b\n", 10, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

			if (ft_printf(".*10,%.*b\n", -10 ,10) !=
	ft_printf(".*10,%.*b\n", -10, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("010,%0b--\n", 10) !=
	ft_printf("010,%0b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("1010,%10b--\n", 10) !=
	ft_printf("1010,%10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-1010,%-10b--\n", 10) !=
	ft_printf("-1010,%-10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("*10,%*b--\n", -10, 10) !=
	ft_printf("*10,%*b--\n", -10, 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("010,%0b--\n", -10) !=
	ft_printf("010,%0b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("10-10,%10b--\n", -10) !=
	ft_printf("10-10,%10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-10-10,%-10b--\n", -10) !=
	ft_printf("-10-10,%-10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("00,%0b--\n", 0) !=
	ft_printf("00,%0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

	if (ft_printf("100,%10b--\n", 0) !=
	ft_printf("100,%10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-100,%-10b--\n", 0) !=
	ft_printf("-100,%-10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("#,%#b--\n", 10) !=
	ft_printf("#,%#b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("#,%#b--\n", -10) !=
	ft_printf("#,%#b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("#,%#b--\n", 0) !=
	ft_printf("#,%#b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("-,%-b--\n", 10) !=
	ft_printf("-,%-b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-,%-b--\n", -10) !=
	ft_printf("-,%-b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-,%-b--\n", 0) !=
	ft_printf("-,%-b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("+,%+b--\n", 10) !=
	ft_printf("+,%+b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+,%+b--\n", -10) !=
	ft_printf("+,%+b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+,%+b--\n", 0) !=
	ft_printf("+,%+b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");



		if (ft_printf(" ,% b--\n", 10) !=
	ft_printf(" ,% b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" ,% b--\n", -10) !=
	ft_printf(" ,% b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" ,% b--\n", 0) !=
	ft_printf(" ,% b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("0,%0b--\n", 10) !=
	ft_printf("0,%0b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("0,%0b--\n", -10) !=
	ft_printf("0,%0b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("0,%0b--\n", 0) !=
	ft_printf("0,%0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");




		if (ft_printf("020,%020b--\n", 10) !=
	ft_printf("020,%020b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020,%020b--\n", -10) !=
	ft_printf("020,%020b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020,%020b--\n", 0) !=
	ft_printf("020,%020b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf(" 20,% 20b--\n", 10) !=
	ft_printf(" 20,% 20b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20,% 20b--\n", -10) !=
	ft_printf(" 20,% 20b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20,% 20b--\n", 0) !=
	ft_printf(" 20,% 20b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


		if (ft_printf("+20,%+20b--\n", 10) !=
	ft_printf("+20,%+20b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20,%+20b--\n", -10) !=
	ft_printf("+20,%+20b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20,%+20b--\n", 0) !=
	ft_printf("+20,%+20b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+,%+b--\n", 0) !=
	ft_printf("+,%+b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20,%20b--\n", 0) !=
	ft_printf("20,%20b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20,%-20b--\n", 10) !=
	ft_printf("-20,%-20b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20,%-20b--\n", -10) !=
	ft_printf("-20,%-20b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20,%-20b--\n", 0) !=
	ft_printf("-20,%-20b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");



		if (ft_printf("020.10,%020.10b--\n", 10) !=
	ft_printf("020.10,%020.10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.10,%020.10b--\n", -10) !=
	ft_printf("020.10,%020.10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.10,%020.10b--\n", 0) !=
	ft_printf("020.10,%020.10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.10,% 20.10b--\n", 10) !=
	ft_printf(" 20.10,% 20.10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.10,% 20.10b--\n", -10) !=
	ft_printf(" 20.10,% 20.10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.10,% 20.10b--\n", 0) !=
	ft_printf(" 20.10,% 20.10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.10,%+20.10b--\n", 10) !=
	ft_printf("+20.10,%+20.10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.10,%+20.10b--\n", -10) !=
	ft_printf("+20.10,%+20.10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.10,%+20.10b--\n", 0) !=
	ft_printf("+20.10,%+20.10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.10,%20.10b--\n", 0) !=
	ft_printf("20.10,%20.10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.10,%-20.10b--\n", 10) !=
	ft_printf("-20.10,%-20.10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.10,%-20.10b--\n", -10) !=
	ft_printf("-20.10,%-20.10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.10,%-20.10b--\n", 0) !=
	ft_printf("-20.10,%-20.10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");




		if (ft_printf("020.1,%020.1b--\n", 10) !=
	ft_printf("020.1,%020.1b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.1,%020.0b--\n", -10) !=
	ft_printf("020.1,%020.1b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.1,%020.1b--\n", 0) !=
	ft_printf("020.1,%020.1b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.1,% 20.1b--\n", 10) !=
	ft_printf(" 20.1,% 20.1b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.1,% 20.1b--\n", -10) !=
	ft_printf(" 20.1,% 20.1b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.1,% 20.1b--\n", 0) !=
	ft_printf(" 20.1,% 20.1b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.1,%+20.1b--\n", 10) !=
	ft_printf("+20.1,%+20.1b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.1,%+20.1b--\n", -10) !=
	ft_printf("+20.1,%+20.1b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.1,%+20.1b--\n", 0) !=
	ft_printf("+20.1,%+20.1b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.1,%20.1b--\n", 0) !=
	ft_printf("20.1,%20.1b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.1,%-20.1b--\n", 10) !=
	ft_printf("-20.1,%-20.1b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.1,%-20.1b--\n", -10) !=
	ft_printf("-20.1,%-20.1b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.1,%-20.1b--\n", 0) !=
	ft_printf("-20.1,%-20.1b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");




		if (ft_printf("020.-10,%020.-10b--\n", 10) !=
	ft_printf("020.-10,%020.-10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.-10,%020.-10b--\n", -10) !=
	ft_printf("020.-10,%020.-10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.-10,%020.-10b--\n", 0) !=
	ft_printf("020.-10,%020.-10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.-10,% 20.-10b--\n", 10) !=
	ft_printf(" 20.-10,% 20.-10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.-10,% 20.-10b--\n", -10) !=
	ft_printf(" 20.-10,% 20.-10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.-10,% 20.-10b--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.-10,%+20.-10b--\n", 10) !=
	ft_printf("+20.-10,%+20.-10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.-10,%+20.-10b--\n", -10) !=
	ft_printf("+20.-10,%+20.-10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.-10,%+20.-10b--\n", 0) !=
	ft_printf("+20.-10,%+20.-10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.-10,%20.-10b--\n", 0) !=
	ft_printf("20.-10,%20.-10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.-10,%-20.-10b--\n", 10) !=
	ft_printf("-20.-10,%-20.-10b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.-10,%-20.-10b--\n", -10) !=
	ft_printf("-20.-10,%-20.-10b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.-10,%-20.-10b--\n", 0) !=
	ft_printf("-20.-10,%-20.-10b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");



			if (ft_printf("020.0,%020.0b--\n", 10) !=
	ft_printf("020.0,%020.0b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.0,%020.0b--\n", -10) !=
	ft_printf("020.0,%020.0b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("020.0,%020.0b--\n", 0) !=
	ft_printf("020.0,%020.0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.0,% 20.0b--\n", 10) !=
	ft_printf(" 20.0,% 20.0b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.0,% 20.0b--\n", -10) !=
	ft_printf(" 20.0,% 20.0b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf(" 20.0,% 20.0b--\n", 0) !=
	ft_printf(" 20.0,% 20.0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.0,%+20.0b--\n", 10) !=
	ft_printf("+20.0,%+20.0b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.0,%+20.0b--\n", -10) !=
	ft_printf("+20.0,%+20.0b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("+20.0,%+20.0b--\n", 0) !=
	ft_printf("+20.0,%+20.0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("20.0,%20.0b--\n", 0) !=
	ft_printf("20.0,%20.0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.0,%-20.0b--\n", 10) !=
	ft_printf("-20.0,%-20.0b--\n", 10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.0,%-20.0b--\n", -10) !=
	ft_printf("-20.0,%-20.0b--\n", -10))
	   	ft_printf("no match:\n");
	ft_printf("\n");

		if (ft_printf("-20.0,%-20.0b--\n", 0) !=
	ft_printf("-20.0,%-20.0b--\n", 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");


	/*   if (printf("%d\n", 2147483647) !=
	ft_printf("%d\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%d\n", 2147483648) !=
	ft_printf("%d\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");*/
/*
	   if (printf("hh127,%hhd\n", 127) !=
	ft_printf("hh127,%hhd\n", 127))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh128,%hhd\n", 128) !=
	ft_printf("hh128,%hhd\n", 128))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("h32767,%hd\n", 32767) !=
	ft_printf("h32767,%hd\n", 32767))
	   	printf("no match:\n");
	printf("\n");

	if (printf("h32768,%hd\n", 32768) !=
	ft_printf("h32768,%hd\n", 32768))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("l2147483647,%ld\n", 2147483647) !=
	ft_printf("l2147483647,%ld\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	if (printf("l2147483648,%ld\n", 2147483648) !=
	ft_printf("l2147483648,%ld\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("ll9223372036854775807,%lld\n", 9223372036854775807) !=
	ft_printf("ll9223372036854775807,%lld\n", 9223372036854775807))
	   	printf("no match:\n");
	printf("\n");

	if (printf("ll9223372036854775808,%lld\n", 9223372036854775808) !=
	ft_printf("ll9223372036854775808,%lld\n", 9223372036854775808))
	   	printf("no match:\n");
	printf("\n");

		if (printf("ll-9223372036854775807,%lld\n", -9223372036854775807) !=
	ft_printf("ll-9223372036854775807,%lld\n", -9223372036854775807))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("z65535,%zd\n", 65535) !=
	ft_printf("z65535,%zd\n", 65535))
	   	printf("no match:\n");
	printf("\n");

	if (printf("z65536,%zd\n", 65536) !=
	ft_printf("z65536,%zd\n", 65536))
	   	printf("no match:\n");
	printf("\n");*/
/*
	if (printf(".010,%.0d\n", 10) !=
	ft_printf(".010,%.0d\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".1010,%.10d\n", 10) !=
	ft_printf(".1010,%.10d\n", 10))
	   	printf("no match:\n");
	printf("\n");

   if (printf(".-1010,%-10d*\n", 10) !=
	ft_printf(".-1010,%-10d*\n", 10))
	   	printf("no match:\n");
	printf("\n");

   if (printf(".-1010,%-10d*\n", 10) !=
	ft_printf(".-1010,%-10d*\n", 10))
	   	printf("no match:\n");
	printf("\n");


	if (printf(".010,%.0d\n", -10) !=
	ft_printf(".010,%.0d\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".10-10,%.10d\n", -10) !=
	ft_printf(".10-10,%.10d\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-10-10,%.-10d\n", -10) !=
	ft_printf(".-10-10,%.-10d\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".00,%.0d\n", 0) !=
	ft_printf(".00,%.0d\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".100,%.10d\n", 0) !=
	ft_printf(".100,%.10d\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf(".-100,%.0d*\n", 0) !=
	ft_printf(".-100,%.0d*\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("%.0-10.-20d*\n", 10,20,30) !=
	ft_printf("%.0-10.-20d*\n", 10,20,30))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.-10d*\n", 0) !=
	ft_printf(".-100,%.-10d*\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.-10d*\n", -1) !=
	ft_printf(".-100,%.-10d*\n", -1))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.*d*\n" , -10, 1) !=
	ft_printf(".-100,%.*d*\n", -10, 1))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*d\n", 0 ,10) !=
	ft_printf(".*10,%.*d\n", 0, 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*d\n", 10 ,10) !=
	ft_printf(".*10,%.*d\n", 10, 10))
	   	printf("no match:\n");
	printf("\n");

			if (printf(".*10,%.*d\n", -10 ,10) !=
	ft_printf(".*10,%.*d\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0d--\n", 10) !=
	ft_printf("010,%0d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("1010,%10d--\n", 10) !=
	ft_printf("1010,%10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-1010,%-10d--\n", 10) !=
	ft_printf("-1010,%-10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("*10,%*d--\n", -10, 10) !=
	ft_printf("*10,%*d--\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0d--\n", -10) !=
	ft_printf("010,%0d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("10-10,%10d--\n", -10) !=
	ft_printf("10-10,%10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-10-10,%-10d--\n", -10) !=
	ft_printf("-10-10,%-10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("00,%0d--\n", 0) !=
	ft_printf("00,%0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf("100,%10d--\n", 0) !=
	ft_printf("100,%10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-100,%-10d--\n", 0) !=
	ft_printf("-100,%-10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

*/
		if (printf("#,%#d--\n", 10) !=
	ft_printf("#,%#d--\n", 10))
	   	printf("no match:\n");
	printf("\n");
/*
		if (printf("#,%#d--\n", -10) !=
	ft_printf("#,%#d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#d--\n", 0) !=
	ft_printf("#,%#d--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("-,%-d--\n", 10) !=
	ft_printf("-,%-d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-d--\n", -10) !=
	ft_printf("-,%-d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-d--\n", 0) !=
	ft_printf("-,%-d--\n", 0))
	   	printf("no match:\n");
	printf("\n");*/
/*

		if (printf("+,%+d--\n", 10) !=
	ft_printf("+,%+d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+d--\n", -10) !=
	ft_printf("+,%+d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+d--\n", 0) !=
	ft_printf("+,%+d--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf(" ,% d--\n", 10) !=
	ft_printf(" ,% d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% d--\n", -10) !=
	ft_printf(" ,% d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% d--\n", 0) !=
	ft_printf(" ,% d--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("0,%0d--\n", 10) !=
	ft_printf("0,%0d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0d--\n", -10) !=
	ft_printf("0,%0d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0d--\n", 0) !=
	ft_printf("0,%0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020,%020d--\n", 10) !=
	ft_printf("020,%020d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020d--\n", -10) !=
	ft_printf("020,%020d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020d--\n", 0) !=
	ft_printf("020,%020d--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf(" 20,% 20d--\n", 10) !=
	ft_printf(" 20,% 20d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20d--\n", -10) !=
	ft_printf(" 20,% 20d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20d--\n", 0) !=
	ft_printf(" 20,% 20d--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+20,%+20d--\n", 10) !=
	ft_printf("+20,%+20d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20d--\n", -10) !=
	ft_printf("+20,%+20d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20d--\n", 0) !=
	ft_printf("+20,%+20d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+d--\n", 0) !=
	ft_printf("+,%+d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20,%20d--\n", 0) !=
	ft_printf("20,%20d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20d--\n", 10) !=
	ft_printf("-20,%-20d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20d--\n", -10) !=
	ft_printf("-20,%-20d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20d--\n", 0) !=
	ft_printf("-20,%-20d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10d--\n", 10) !=
	ft_printf("020.10,%020.10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10d--\n", -10) !=
	ft_printf("020.10,%020.10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10d--\n", 0) !=
	ft_printf("020.10,%020.10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10d--\n", 10) !=
	ft_printf(" 20.10,% 20.10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10d--\n", -10) !=
	ft_printf(" 20.10,% 20.10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10d--\n", 0) !=
	ft_printf(" 20.10,% 20.10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10d--\n", 10) !=
	ft_printf("+20.10,%+20.10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10d--\n", -10) !=
	ft_printf("+20.10,%+20.10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10d--\n", 0) !=
	ft_printf("+20.10,%+20.10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.10,%20.10d--\n", 0) !=
	ft_printf("20.10,%20.10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10d--\n", 10) !=
	ft_printf("-20.10,%-20.10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10d--\n", -10) !=
	ft_printf("-20.10,%-20.10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10d--\n", 0) !=
	ft_printf("-20.10,%-20.10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.1,%020.1d--\n", 10) !=
	ft_printf("020.1,%020.1d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.0d--\n", -10) !=
	ft_printf("020.1,%020.1d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.1d--\n", 0) !=
	ft_printf("020.1,%020.1d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1d--\n", 10) !=
	ft_printf(" 20.1,% 20.1d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1d--\n", -10) !=
	ft_printf(" 20.1,% 20.1d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1d--\n", 0) !=
	ft_printf(" 20.1,% 20.1d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1d--\n", 10) !=
	ft_printf("+20.1,%+20.1d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1d--\n", -10) !=
	ft_printf("+20.1,%+20.1d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1d--\n", 0) !=
	ft_printf("+20.1,%+20.1d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.1,%20.1d--\n", 0) !=
	ft_printf("20.1,%20.1d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1d--\n", 10) !=
	ft_printf("-20.1,%-20.1d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1d--\n", -10) !=
	ft_printf("-20.1,%-20.1d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1d--\n", 0) !=
	ft_printf("-20.1,%-20.1d--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.-10,%020.-10d--\n", 10) !=
	ft_printf("020.-10,%020.-10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10d--\n", -10) !=
	ft_printf("020.-10,%020.-10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10d--\n", 0) !=
	ft_printf("020.-10,%020.-10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10d--\n", 10) !=
	ft_printf(" 20.-10,% 20.-10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10d--\n", -10) !=
	ft_printf(" 20.-10,% 20.-10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10d--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10d--\n", 10) !=
	ft_printf("+20.-10,%+20.-10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10d--\n", -10) !=
	ft_printf("+20.-10,%+20.-10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10d--\n", 0) !=
	ft_printf("+20.-10,%+20.-10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.-10,%20.-10d--\n", 0) !=
	ft_printf("20.-10,%20.-10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10d--\n", 10) !=
	ft_printf("-20.-10,%-20.-10d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10d--\n", -10) !=
	ft_printf("-20.-10,%-20.-10d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10d--\n", 0) !=
	ft_printf("-20.-10,%-20.-10d--\n", 0))
	   	printf("no match:\n");
	printf("\n");



			if (printf("020.0,%020.0d--\n", 10) !=
	ft_printf("020.0,%020.0d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0d--\n", -10) !=
	ft_printf("020.0,%020.0d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0d--\n", 0) !=
	ft_printf("020.0,%020.0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0d--\n", 10) !=
	ft_printf(" 20.0,% 20.0d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0d--\n", -10) !=
	ft_printf(" 20.0,% 20.0d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0d--\n", 0) !=
	ft_printf(" 20.0,% 20.0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0d--\n", 10) !=
	ft_printf("+20.0,%+20.0d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0d--\n", -10) !=
	ft_printf("+20.0,%+20.0d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0d--\n", 0) !=
	ft_printf("+20.0,%+20.0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.0,%20.0d--\n", 0) !=
	ft_printf("20.0,%20.0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0d--\n", 10) !=
	ft_printf("-20.0,%-20.0d--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0d--\n", -10) !=
	ft_printf("-20.0,%-20.0d--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0d--\n", 0) !=
	ft_printf("-20.0,%-20.0d--\n", 0))
	   	printf("no match:\n");
	printf("\n");

	*/


   if (printf("@moulitest: %#.x %#.0x\n", 0, 0) !=
	ft_printf("@moulitest: %#.x %#.0x\n", 0, 0))
	   	printf("no match:\n");
	printf("\n");


	   if (printf("%x\n", 2147483647) !=
	ft_printf("%x\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%x\n", 2147483648) !=
	ft_printf("%x\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh127,%hhx\n", 127) !=
	ft_printf("hh127,%hhx\n", 127))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh128,%hhx\n", 128) !=
	ft_printf("hh128,%hhx\n", 128))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("h32767,%hx\n", 32767) !=
	ft_printf("h32767,%hx\n", 32767))
	   	printf("no match:\n");
	printf("\n");

	if (printf("h32768,%hx\n", 32768) !=
	ft_printf("h32768,%hx\n", 32768))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("l2147483647,%lx\n", 2147483647) !=
	ft_printf("l2147483647,%lx\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	if (printf("l2147483648,%lx\n", 2147483648) !=
	ft_printf("l2147483648,%lx\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("ll9223372036854775807,%llx\n", 9223372036854775807) !=
	ft_printf("ll9223372036854775807,%llx\n", 9223372036854775807))
	   	printf("no match:\n");
	printf("\n");

	if (printf("ll9223372036854775808,%llx\n", 9223372036854775808) !=
	ft_printf("ll9223372036854775808,%llx\n", 9223372036854775808))
	   	printf("no match:\n");
	printf("\n");

		if (printf("ll-9223372036854775807,%llx\n", -9223372036854775807) !=
	ft_printf("ll-9223372036854775807,%llx\n", -9223372036854775807))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("z65535,%zx\n", 65535) !=
	ft_printf("z65535,%zx\n", 65535))
	   	printf("no match:\n");
	printf("\n");

	if (printf("z65536,%zx\n", 65536) !=
	ft_printf("z65536,%zx\n", 65536))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".010,%.0x\n", 10) !=
	ft_printf(".010,%.0x\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".1010,%.10x\n", 10) !=
	ft_printf(".1010,%.10x\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-1010,%.-10x\n", 10) !=
	ft_printf(".-1010,%.-10x\n", 10))
	   	printf("no match:\n");
	printf("\n");


	if (printf(".010,%.0x\n", -10) !=
	ft_printf(".010,%.0x\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".10-10,%.10x\n", -10) !=
	ft_printf(".10-10,%.10x\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-10-10,%.-10x\n", -10) !=
	ft_printf(".-10-10,%.-10x\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".00,%.0x\n", 0) !=
	ft_printf(".00,%.0x\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".100,%.10x\n", 0) !=
	ft_printf(".100,%.10x\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.-10x\n", 0) !=
	ft_printf(".-100,%.-10x\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*x\n", 0 ,10) !=
	ft_printf(".*10,%.*x\n", 0, 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*x\n", 10 ,10) !=
	ft_printf(".*10,%.*x\n", 10, 10))
	   	printf("no match:\n");
	printf("\n");

			if (printf(".*10,%.*x\n", -10 ,10) !=
	ft_printf(".*10,%.*x\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0x--\n", 10) !=
	ft_printf("010,%0x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("1010,%10x--\n", 10) !=
	ft_printf("1010,%10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-1010,%-10x--\n", 10) !=
	ft_printf("-1010,%-10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("*10,%*x--\n", -10, 10) !=
	ft_printf("*10,%*x--\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0x--\n", -10) !=
	ft_printf("010,%0x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("10-10,%10x--\n", -10) !=
	ft_printf("10-10,%10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-10-10,%-10x--\n", -10) !=
	ft_printf("-10-10,%-10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("00,%0x--\n", 0) !=
	ft_printf("00,%0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf("100,%10x--\n", 0) !=
	ft_printf("100,%10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-100,%-10x--\n", 0) !=
	ft_printf("-100,%-10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");


   if (printf("#,%#x--\n", 10) !=
	ft_printf("#,%#x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

   if (printf("#,%#x--\n", -10) !=
	ft_printf("#,%#x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

   if (printf("#,%#x--\n", 0) !=
	ft_printf("#,%#x--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("-,%-x--\n", 10) !=
	ft_printf("-,%-x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-x--\n", -10) !=
	ft_printf("-,%-x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-x--\n", 0) !=
	ft_printf("-,%-x--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+,%+x--\n", 10) !=
	ft_printf("+,%+x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+x--\n", -10) !=
	ft_printf("+,%+x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+x--\n", 0) !=
	ft_printf("+,%+x--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf(" ,% x--\n", 10) !=
	ft_printf(" ,% x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% x--\n", -10) !=
	ft_printf(" ,% x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% x--\n", 0) !=
	ft_printf(" ,% x--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("0,%0x--\n", 10) !=
	ft_printf("0,%0x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0x--\n", -10) !=
	ft_printf("0,%0x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0x--\n", 0) !=
	ft_printf("0,%0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020,%020x--\n", 10) !=
	ft_printf("020,%020x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020x--\n", -10) !=
	ft_printf("020,%020x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020x--\n", 0) !=
	ft_printf("020,%020x--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf(" 20,% 20x--\n", 10) !=
	ft_printf(" 20,% 20x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20x--\n", -10) !=
	ft_printf(" 20,% 20x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20x--\n", 0) !=
	ft_printf(" 20,% 20x--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+20,%+20x--\n", 10) !=
	ft_printf("+20,%+20x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20x--\n", -10) !=
	ft_printf("+20,%+20x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20x--\n", 0) !=
	ft_printf("+20,%+20x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+x--\n", 0) !=
	ft_printf("+,%+x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20,%20x--\n", 0) !=
	ft_printf("20,%20x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20x--\n", 10) !=
	ft_printf("-20,%-20x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20x--\n", -10) !=
	ft_printf("-20,%-20x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20x--\n", 0) !=
	ft_printf("-20,%-20x--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf("020.10,%020.10x--\n", 10) !=
	ft_printf("020.10,%020.10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10x--\n", -10) !=
	ft_printf("020.10,%020.10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10x--\n", 0) !=
	ft_printf("020.10,%020.10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10x--\n", 10) !=
	ft_printf(" 20.10,% 20.10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10x--\n", -10) !=
	ft_printf(" 20.10,% 20.10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10x--\n", 0) !=
	ft_printf(" 20.10,% 20.10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10x--\n", 10) !=
	ft_printf("+20.10,%+20.10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10x--\n", -10) !=
	ft_printf("+20.10,%+20.10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10x--\n", 0) !=
	ft_printf("+20.10,%+20.10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.10,%20.10x--\n", 0) !=
	ft_printf("20.10,%20.10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10x--\n", 10) !=
	ft_printf("-20.10,%-20.10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10x--\n", -10) !=
	ft_printf("-20.10,%-20.10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10x--\n", 0) !=
	ft_printf("-20.10,%-20.10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.1,%020.1x--\n", 10) !=
	ft_printf("020.1,%020.1x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.0x--\n", -10) !=
	ft_printf("020.1,%020.1x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.1x--\n", 0) !=
	ft_printf("020.1,%020.1x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1x--\n", 10) !=
	ft_printf(" 20.1,% 20.1x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1x--\n", -10) !=
	ft_printf(" 20.1,% 20.1x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1x--\n", 0) !=
	ft_printf(" 20.1,% 20.1x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1x--\n", 10) !=
	ft_printf("+20.1,%+20.1x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1x--\n", -10) !=
	ft_printf("+20.1,%+20.1x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1x--\n", 0) !=
	ft_printf("+20.1,%+20.1x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.1,%20.1x--\n", 0) !=
	ft_printf("20.1,%20.1x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1x--\n", 10) !=
	ft_printf("-20.1,%-20.1x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1x--\n", -10) !=
	ft_printf("-20.1,%-20.1x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1x--\n", 0) !=
	ft_printf("-20.1,%-20.1x--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.-10,%020.-10x--\n", 10) !=
	ft_printf("020.-10,%020.-10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10x--\n", -10) !=
	ft_printf("020.-10,%020.-10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10x--\n", 0) !=
	ft_printf("020.-10,%020.-10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10x--\n", 10) !=
	ft_printf(" 20.-10,% 20.-10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10x--\n", -10) !=
	ft_printf(" 20.-10,% 20.-10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10x--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10x--\n", 10) !=
	ft_printf("+20.-10,%+20.-10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10x--\n", -10) !=
	ft_printf("+20.-10,%+20.-10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10x--\n", 0) !=
	ft_printf("+20.-10,%+20.-10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.-10,%20.-10x--\n", 0) !=
	ft_printf("20.-10,%20.-10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10x--\n", 10) !=
	ft_printf("-20.-10,%-20.-10x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10x--\n", -10) !=
	ft_printf("-20.-10,%-20.-10x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10x--\n", 0) !=
	ft_printf("-20.-10,%-20.-10x--\n", 0))
	   	printf("no match:\n");
	printf("\n");



			if (printf("020.0,%020.0x--\n", 10) !=
	ft_printf("020.0,%020.0x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0x--\n", -10) !=
	ft_printf("020.0,%020.0x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0x--\n", 0) !=
	ft_printf("020.0,%020.0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0x--\n", 10) !=
	ft_printf(" 20.0,% 20.0x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0x--\n", -10) !=
	ft_printf(" 20.0,% 20.0x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0x--\n", 0) !=
	ft_printf(" 20.0,% 20.0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0x--\n", 10) !=
	ft_printf("+20.0,%+20.0x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0x--\n", -10) !=
	ft_printf("+20.0,%+20.0x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0x--\n", 0) !=
	ft_printf("+20.0,%+20.0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.0,%20.0x--\n", 0) !=
	ft_printf("20.0,%20.0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0x--\n", 10) !=
	ft_printf("-20.0,%-20.0x--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0x--\n", -10) !=
	ft_printf("-20.0,%-20.0x--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0x--\n", 0) !=
	ft_printf("-20.0,%-20.0x--\n", 0))
	   	printf("no match:\n");
	printf("\n");
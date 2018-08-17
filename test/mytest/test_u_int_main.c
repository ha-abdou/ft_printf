   if (printf("%u\n", 1) !=
	ft_printf("%u\n", 1))
	   	printf("no match:\n");
	printf("\n");

   if (printf("%u\n", 2147483647) !=
	ft_printf("%u\n", 2147483647))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%u\n", 2147483648) !=
	ft_printf("%u\n", 2147483648))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh255,%hhu\n", 255 ) !=
	ft_printf("hh255,%hhu\n", 255 ))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("hh256,%hhu\n", 256 ) !=
	ft_printf("hh256,%hhu\n", 256))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("h65535 ,%hu\n", 65535 ) !=
	ft_printf("h65535 ,%hu\n", 65535 ))
	   	printf("no match:\n");
	printf("\n");

	if (printf("h65536,%hu\n", 65536) !=
	ft_printf("h65536,%hu\n", 65536))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("l4294967295 ,%lu\n", 4294967295 ) !=
	ft_printf("l4294967295 ,%lu\n", 4294967295 ))
	   	printf("no match:\n");
	printf("\n");

	if (printf("l4294967296,%lu\n", 4294967296) !=
	ft_printf("l4294967296,%lu\n", 4294967296))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("ll18446744073709551615,%llu\n", 18446744073709551615 ) !=
	ft_printf("ll18446744073709551615,%llu\n", 18446744073709551615))
	   	printf("no match:\n");
	printf("\n");

	if (printf("ll18446744073709551616,%llu\n", 18446744073709551616) !=
	ft_printf("ll18446744073709551616,%llu\n", 18446744073709551616))
	   	printf("no match:\n");
	printf("\n");

		if (printf("ll-1,%llu\n", -1) !=
	ft_printf("ll-1,%llu\n", -1))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("z65535,%zu\n", 65535) !=
	ft_printf("z65535,%zu\n", 65535))
	   	printf("no match:\n");
	printf("\n");

	if (printf("z65536,%zu\n", 65536) !=
	ft_printf("z65536,%zu\n", 65536))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".010,%.0u\n", 10) !=
	ft_printf(".010,%.0u\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".1010,%.10u\n", 10) !=
	ft_printf(".1010,%.10u\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-1010,%.-10u\n", 10) !=
	ft_printf(".-1010,%.-10u\n", 10))
	   	printf("no match:\n");
	printf("\n");


	if (printf(".010,%.0u\n", -10) !=
	ft_printf(".010,%.0u\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".10-10,%.10u\n", -10) !=
	ft_printf(".10-10,%.10u\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-10-10,%.-10u\n", -10) !=
	ft_printf(".-10-10,%.-10u\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".00,%.0u\n", 0) !=
	ft_printf(".00,%.0u\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf(".100,%.10u\n", 0) !=
	ft_printf(".100,%.10u\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".-100,%.-10u\n", 0) !=
	ft_printf(".-100,%.-10u\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*u\n", 0 ,10) !=
	ft_printf(".*10,%.*u\n", 0, 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(".*10,%.*u\n", 10 ,10) !=
	ft_printf(".*10,%.*u\n", 10, 10))
	   	printf("no match:\n");
	printf("\n");

			if (printf(".*10,%.*u\n", -10 ,10) !=
	ft_printf(".*10,%.*u\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0u--\n", 10) !=
	ft_printf("010,%0u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("1010,%10u--\n", 10) !=
	ft_printf("1010,%10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-1010,%-10u--\n", 10) !=
	ft_printf("-1010,%-10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("*10,%*u--\n", -10, 10) !=
	ft_printf("*10,%*u--\n", -10, 10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("010,%0u--\n", -10) !=
	ft_printf("010,%0u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("10-10,%10u--\n", -10) !=
	ft_printf("10-10,%10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-10-10,%-10u--\n", -10) !=
	ft_printf("-10-10,%-10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

	if (printf("00,%0u--\n", 0) !=
	ft_printf("00,%0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

	if (printf("100,%10u--\n", 0) !=
	ft_printf("100,%10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-100,%-10u--\n", 0) !=
	ft_printf("-100,%-10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("#,%#u--\n", 10) !=
	ft_printf("#,%#u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#u--\n", -10) !=
	ft_printf("#,%#u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("#,%#u--\n", 0) !=
	ft_printf("#,%#u--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("-,%-u--\n", 10) !=
	ft_printf("-,%-u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-u--\n", -10) !=
	ft_printf("-,%-u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-,%-u--\n", 0) !=
	ft_printf("-,%-u--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+,%+u--\n", 10) !=
	ft_printf("+,%+u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+u--\n", -10) !=
	ft_printf("+,%+u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+u--\n", 0) !=
	ft_printf("+,%+u--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf(" ,% u--\n", 10) !=
	ft_printf(" ,% u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% u--\n", -10) !=
	ft_printf(" ,% u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" ,% u--\n", 0) !=
	ft_printf(" ,% u--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("0,%0u--\n", 10) !=
	ft_printf("0,%0u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0u--\n", -10) !=
	ft_printf("0,%0u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("0,%0u--\n", 0) !=
	ft_printf("0,%0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020,%020u--\n", 10) !=
	ft_printf("020,%020u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020u--\n", -10) !=
	ft_printf("020,%020u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020,%020u--\n", 0) !=
	ft_printf("020,%020u--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf(" 20,% 20u--\n", 10) !=
	ft_printf(" 20,% 20u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20u--\n", -10) !=
	ft_printf(" 20,% 20u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20,% 20u--\n", 0) !=
	ft_printf(" 20,% 20u--\n", 0))
	   	printf("no match:\n");
	printf("\n");


		if (printf("+20,%+20u--\n", 10) !=
	ft_printf("+20,%+20u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20u--\n", -10) !=
	ft_printf("+20,%+20u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20,%+20u--\n", 0) !=
	ft_printf("+20,%+20u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+,%+u--\n", 0) !=
	ft_printf("+,%+u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20,%20u--\n", 0) !=
	ft_printf("20,%20u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20u--\n", 10) !=
	ft_printf("-20,%-20u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20u--\n", -10) !=
	ft_printf("-20,%-20u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20,%-20u--\n", 0) !=
	ft_printf("-20,%-20u--\n", 0))
	   	printf("no match:\n");
	printf("\n");



		if (printf("020.10,%020.10u--\n", 10) !=
	ft_printf("020.10,%020.10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10u--\n", -10) !=
	ft_printf("020.10,%020.10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.10,%020.10u--\n", 0) !=
	ft_printf("020.10,%020.10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10u--\n", 10) !=
	ft_printf(" 20.10,% 20.10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10u--\n", -10) !=
	ft_printf(" 20.10,% 20.10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.10,% 20.10u--\n", 0) !=
	ft_printf(" 20.10,% 20.10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10u--\n", 10) !=
	ft_printf("+20.10,%+20.10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10u--\n", -10) !=
	ft_printf("+20.10,%+20.10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.10,%+20.10u--\n", 0) !=
	ft_printf("+20.10,%+20.10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.10,%20.10u--\n", 0) !=
	ft_printf("20.10,%20.10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10u--\n", 10) !=
	ft_printf("-20.10,%-20.10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10u--\n", -10) !=
	ft_printf("-20.10,%-20.10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.10,%-20.10u--\n", 0) !=
	ft_printf("-20.10,%-20.10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.1,%020.1u--\n", 10) !=
	ft_printf("020.1,%020.1u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.0u--\n", -10) !=
	ft_printf("020.1,%020.1u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.1,%020.1u--\n", 0) !=
	ft_printf("020.1,%020.1u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1u--\n", 10) !=
	ft_printf(" 20.1,% 20.1u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1u--\n", -10) !=
	ft_printf(" 20.1,% 20.1u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.1,% 20.1u--\n", 0) !=
	ft_printf(" 20.1,% 20.1u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1u--\n", 10) !=
	ft_printf("+20.1,%+20.1u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1u--\n", -10) !=
	ft_printf("+20.1,%+20.1u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.1,%+20.1u--\n", 0) !=
	ft_printf("+20.1,%+20.1u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.1,%20.1u--\n", 0) !=
	ft_printf("20.1,%20.1u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1u--\n", 10) !=
	ft_printf("-20.1,%-20.1u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1u--\n", -10) !=
	ft_printf("-20.1,%-20.1u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.1,%-20.1u--\n", 0) !=
	ft_printf("-20.1,%-20.1u--\n", 0))
	   	printf("no match:\n");
	printf("\n");




		if (printf("020.-10,%020.-10u--\n", 10) !=
	ft_printf("020.-10,%020.-10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10u--\n", -10) !=
	ft_printf("020.-10,%020.-10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.-10,%020.-10u--\n", 0) !=
	ft_printf("020.-10,%020.-10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10u--\n", 10) !=
	ft_printf(" 20.-10,% 20.-10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10u--\n", -10) !=
	ft_printf(" 20.-10,% 20.-10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.-10,% 20.-10u--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10u--\n", 10) !=
	ft_printf("+20.-10,%+20.-10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10u--\n", -10) !=
	ft_printf("+20.-10,%+20.-10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.-10,%+20.-10u--\n", 0) !=
	ft_printf("+20.-10,%+20.-10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.-10,%20.-10u--\n", 0) !=
	ft_printf("20.-10,%20.-10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10u--\n", 10) !=
	ft_printf("-20.-10,%-20.-10u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10u--\n", -10) !=
	ft_printf("-20.-10,%-20.-10u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.-10,%-20.-10u--\n", 0) !=
	ft_printf("-20.-10,%-20.-10u--\n", 0))
	   	printf("no match:\n");
	printf("\n");



			if (printf("020.0,%020.0u--\n", 10) !=
	ft_printf("020.0,%020.0u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0u--\n", -10) !=
	ft_printf("020.0,%020.0u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("020.0,%020.0u--\n", 0) !=
	ft_printf("020.0,%020.0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0u--\n", 10) !=
	ft_printf(" 20.0,% 20.0u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0u--\n", -10) !=
	ft_printf(" 20.0,% 20.0u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf(" 20.0,% 20.0u--\n", 0) !=
	ft_printf(" 20.0,% 20.0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0u--\n", 10) !=
	ft_printf("+20.0,%+20.0u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0u--\n", -10) !=
	ft_printf("+20.0,%+20.0u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("+20.0,%+20.0u--\n", 0) !=
	ft_printf("+20.0,%+20.0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("20.0,%20.0u--\n", 0) !=
	ft_printf("20.0,%20.0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0u--\n", 10) !=
	ft_printf("-20.0,%-20.0u--\n", 10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0u--\n", -10) !=
	ft_printf("-20.0,%-20.0u--\n", -10))
	   	printf("no match:\n");
	printf("\n");

		if (printf("-20.0,%-20.0u--\n", 0) !=
	ft_printf("-20.0,%-20.0u--\n", 0))
	   	printf("no match:\n");
	printf("\n");
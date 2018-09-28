	   // (printf("%c\n", 'a') !=
	ft_printf("%c\n", 'a');


	   // (printf("%c\n", 0) !=
	ft_printf("%c\n", 0);


	   // (printf("%c\n", 'a') !=
	ft_printf("%c\n", 'a');

	   // (printf("hh255,%hhc\n", 'a' ) !=
	ft_printf("hh255,%hhc\n", 'a' );

	   // (printf("hh256,%hhc\n", 'a' ) !=
	ft_printf("hh256,%hhc\n", 'a');

	   // (printf("h65535 ,%hc\n", 'a' ) !=
	ft_printf("h65535 ,%hc\n", 'a' );

	// (printf("h65536,%hc\n", 'a') !=
	ft_printf("h65536,%hc\n", 'a');

	   // (printf("l4294967295 ,%lc\n", 'a' ) !=
	ft_printf("l4294967295 ,%lc\n", 'a' );

	// (printf("l4294967296,%lc\n", 'a') !=
	ft_printf("l4294967296,%lc\n", 'a');

	   // (printf("ll18446744073709551615,%llc\n", 'a' ) !=
	ft_printf("ll18446744073709551615,%llc\n", 'a');

	// (printf("ll18446744073709551616,%llc\n", 'a') !=
	ft_printf("ll18446744073709551616,%llc\n", 'a');

	   // (printf("z65535,%zc\n", 'a') !=
	ft_printf("z65535,%zc\n", 'a');

	// (printf("z65536,%zc\n", 'a') !=
	ft_printf("z65536,%zc\n", 'a');

	// (printf(".0a,%.0c\n", 'a') !=
	ft_printf(".0a,%.0c\n", 'a');

	// (printf(".10a,%.10c\n", 'a') !=
	ft_printf(".10a,%.10c\n", 'a');

		// (printf(".-10a,%.-10c\n", 'a') !=
	ft_printf(".-10a,%.-10c\n", 'a');


	// (printf(".0a,%.0c\n", 'a') !=
	ft_printf(".0a,%.0c\n", 'a');

	// (printf(".10-10,%.10c\n", 'a') !=
	ft_printf(".10-10,%.10c\n", 'a');

		// (printf(".-10-10,%.-10c\n", 'a') !=
	ft_printf(".-10-10,%.-10c\n", 'a');

	// (printf(".00,%.0c\n", 0) !=
	ft_printf(".00,%.0c\n", 0);

	// (printf(".100,%.10c\n", 0) !=
	ft_printf(".100,%.10c\n", 0);

		// (printf(".-100,%.-10c\n", 0) !=
	ft_printf(".-100,%.-10c\n", 0);

		// (printf(".*a,%.*c\n", 0 ,'a') !=
	ft_printf(".*a,%.*c\n", 0, 'a');

		// (printf(".*a,%.*c\n", 10 ,'a') !=
	ft_printf(".*a,%.*c\n", 10, 'a');

			// (printf(".*a,%.*c\n", -10 ,'a') !=
	ft_printf(".*a,%.*c\n", -10, 'a');
 
	// (printf("0a,%0c--\n", 'a') !=
	ft_printf("0a,%0c--\n", 'a');

	// (printf("10a,%10c--\n", 'a') !=
	ft_printf("10a,%10c--\n", 'a');

		// (printf("-10a,%-10c--\n", 'a') !=
	ft_printf("-10a,%-10c--\n", 'a');

		// (printf("*a,%*c--\n", -10, 'a') !=
	ft_printf("*a,%*c--\n", -10, 'a');

	// (printf("0a,%0c--\n", 'a') !=
	ft_printf("0a,%0c--\n", 'a');

	// (printf("10-10,%10c--\n", 'a') !=
	ft_printf("10-10,%10c--\n", 'a');

		// (printf("-10-10,%-10c--\n", 'a') !=
	ft_printf("-10-10,%-10c--\n", 'a');

	// (printf("00,%0c--\n", 0) !=
	ft_printf("00,%0c--\n", 0);

	// (printf("100 ,%10c--\n", '0') !=
	 ft_printf("100 ,%10c--\n", '0');

	// (printf("100 ,%10c--\n", 0) !=
	 ft_printf("100 ,%10c--\n", 0);

    // (printf("-100,%-10c--\n", 0) !=
	 ft_printf("-100,%-10c--\n", 0);


		// (printf("#,%#c--\n", 'a') !=
	ft_printf("#,%#c--\n", 'a');

		// (printf("#,%#c--\n", 'a') !=
	ft_printf("#,%#c--\n", 'a');

		// (printf("#,%#c--\n", 0) !=
	ft_printf("#,%#c--\n", 0);



		// (printf("-,%-c--\n", 'a') !=
	ft_printf("-,%-c--\n", 'a');

		// (printf("-,%-c--\n", 'a') !=
	ft_printf("-,%-c--\n", 'a');

		// (printf("-,%-c--\n", 0) !=
	ft_printf("-,%-c--\n", 0);


		// (printf("+,%+c--\n", 'a') !=
	ft_printf("+,%+c--\n", 'a');

		// (printf("+,%+c--\n", 'a') !=
	ft_printf("+,%+c--\n", 'a');

		// (printf("+,%+c--\n", 0) !=
	ft_printf("+,%+c--\n", 0);



		// (printf(" ,% c--\n", 'a') !=
	ft_printf(" ,% c--\n", 'a');

		// (printf(" ,% c--\n", 'a') !=
	ft_printf(" ,% c--\n", 'a');

		// (printf(" ,% c--\n", 0) !=
	ft_printf(" ,% c--\n", 0);


		// (printf("0,%0c--\n", 'a') !=
	ft_printf("0,%0c--\n", 'a');

		// (printf("0,%0c--\n", -'a') !=
	ft_printf("0,%0c--\n", -'a');

		// (printf("0,%0c--\n", 0) !=
	ft_printf("0,%0c--\n", 0);



		// (printf("020,%020c--\n", 'a') !=
	ft_printf("020,%020c--\n", 'a');

		// (printf("020,%020c--\n", 'a') !=
	ft_printf("020,%020c--\n", 'a');

		// (printf("020,%020c--\n", 0) !=
	ft_printf("020,%020c--\n", 0);


		// (printf(" 20,% 20c--\n", 'a') !=
	ft_printf(" 20,% 20c--\n", 'a');

		// (printf(" 20,% 20c--\n", 'a') !=
	ft_printf(" 20,% 20c--\n", 'a');

		// (printf(" 20,% 20c--\n", 0) !=
	ft_printf(" 20,% 20c--\n", 0);


		// (printf("+20,%+20c--\n", 'a') !=
	ft_printf("+20,%+20c--\n", 'a');

		// (printf("+20,%+20c--\n", 'a') !=
	ft_printf("+20,%+20c--\n", 'a');

		// (printf("+20,%+20c--\n", 0) !=
	ft_printf("+20,%+20c--\n", 0);

		// (printf("+,%+c--\n", 0) !=
	ft_printf("+,%+c--\n", 0);

		// (printf("20,%20c--\n", 0) !=
	ft_printf("20,%20c--\n", 0);

		// (printf("-20,%-20c--\n", 'a') !=
	ft_printf("-20,%-20c--\n", 'a');

		// (printf("-20,%-20c--\n", 'a') !=
	ft_printf("-20,%-20c--\n", 'a');

		// (printf("-20,%-20c--\n", 0) !=
	ft_printf("-20,%-20c--\n", 0);



		// (printf("020.a,%020.10c--\n", 'a') !=
	ft_printf("020.a,%020.10c--\n", 'a');

		// (printf("020.a,%020.10c--\n", 'a') !=
	ft_printf("020.a,%020.10c--\n", 'a');

		// (printf("020.a,%020.10c--\n", 0) !=
	ft_printf("020.a,%020.10c--\n", 0);

		// (printf(" 20.a,% 20.10c--\n", 'a') !=
	ft_printf(" 20.a,% 20.10c--\n", 'a');

		// (printf(" 20.a,% 20.10c--\n", 'a') !=
	ft_printf(" 20.a,% 20.10c--\n", 'a');

		// (printf(" 20.a,% 20.10c--\n", 0) !=
	ft_printf(" 20.a,% 20.10c--\n", 0);

		// (printf("+20.a,%+20.10c--\n", 'a') !=
	ft_printf("+20.a,%+20.10c--\n", 'a');

		// (printf("+20.a,%+20.10c--\n", 'a') !=
	ft_printf("+20.a,%+20.10c--\n", 'a');

		// (printf("+20.a,%+20.10c--\n", 0) !=
	ft_printf("+20.a,%+20.10c--\n", 0);

		// (printf("20.a,%20.10c--\n", 0) !=
	ft_printf("20.a,%20.10c--\n", 0);

		// (printf("-20.a,%-20.10c--\n", 'a') !=
	ft_printf("-20.a,%-20.10c--\n", 'a');

		// (printf("-20.a,%-20.10c--\n", 'a') !=
	ft_printf("-20.a,%-20.10c--\n", 'a');

		// (printf("-20.a,%-20.10c--\n", 0) !=
	ft_printf("-20.a,%-20.10c--\n", 0);




		// (printf("020.1,%020.1c--\n", 'a') !=
	ft_printf("020.1,%020.1c--\n", 'a');

		// (printf("020.1,%020.0c--\n", 'a') !=
	ft_printf("020.1,%020.1c--\n", 'a');

		// (printf("020.1,%020.1c--\n", 0) !=
	ft_printf("020.1,%020.1c--\n", 0);

		// (printf(" 20.1,% 20.1c--\n", 'a') !=
	ft_printf(" 20.1,% 20.1c--\n", 'a');

		// (printf(" 20.1,% 20.1c--\n", 'a') !=
	ft_printf(" 20.1,% 20.1c--\n", 'a');

		// (printf(" 20.1,% 20.1c--\n", 0) !=
	ft_printf(" 20.1,% 20.1c--\n", 0);

		// (printf("+20.1,%+20.1c--\n", 'a') !=
	ft_printf("+20.1,%+20.1c--\n", 'a');

		// (printf("+20.1,%+20.1c--\n", 'a') !=
	ft_printf("+20.1,%+20.1c--\n", 'a');

		// (printf("+20.1,%+20.1c--\n", 0) !=
	ft_printf("+20.1,%+20.1c--\n", 0);

		// (printf("20.1,%20.1c--\n", 0) !=
	ft_printf("20.1,%20.1c--\n", 0);

		// (printf("-20.1,%-20.1c--\n", 'a') !=
	ft_printf("-20.1,%-20.1c--\n", 'a');

		// (printf("-20.1,%-20.1c--\n", 'a') !=
	ft_printf("-20.1,%-20.1c--\n", 'a');

		// (printf("-20.1,%-20.1c--\n", 0) !=
	ft_printf("-20.1,%-20.1c--\n", 0);




		// (printf("020.-10,%020.-10c--\n", 'a') !=
	ft_printf("020.-10,%020.-10c--\n", 'a');

		// (printf("020.-10,%020.-10c--\n", 'a') !=
	ft_printf("020.-10,%020.-10c--\n", 'a');

		// (printf("020.-10,%020.-10c--\n", 0) !=
	ft_printf("020.-10,%020.-10c--\n", 0);

		// (printf(" 20.-10,% 20.-10c--\n", 'a') !=
	ft_printf(" 20.-10,% 20.-10c--\n", 'a');

		// (printf(" 20.-10,% 20.-10c--\n", 'a') !=
	ft_printf(" 20.-10,% 20.-10c--\n", 'a');

		// (printf(" 20.-10,% 20.-10c--\n", 0) !=
	ft_printf(" 20.-10,% 20.-10c--\n", 0);

		// (printf("+20.-10,%+20.-10c--\n", 'a') !=
	ft_printf("+20.-10,%+20.-10c--\n", 'a');

		// (printf("+20.-10,%+20.-10c--\n", 'a') !=
	ft_printf("+20.-10,%+20.-10c--\n", 'a');

		// (printf("+20.-10,%+20.-10c--\n", 0) !=
	ft_printf("+20.-10,%+20.-10c--\n", 0);

		// (printf("20.-10,%20.-10c--\n", 0) !=
	ft_printf("20.-10,%20.-10c--\n", 0);

		// (printf("-20.-10,%-20.-10c--\n", 'a') !=
	ft_printf("-20.-10,%-20.-10c--\n", 'a');

		// (printf("-20.-10,%-20.-10c--\n", 'a') !=
	ft_printf("-20.-10,%-20.-10c--\n", 'a');

		// (printf("-20.-10,%-20.-10c--\n", 0) !=
	ft_printf("-20.-10,%-20.-10c--\n", 0);



			// (printf("020.0,%020.0c--\n", 'a') !=
	ft_printf("020.0,%020.0c--\n", 'a');

		// (printf("020.0,%020.0c--\n", 'a') !=
	ft_printf("020.0,%020.0c--\n", 'a');

		// (printf("020.0,%020.0c--\n", 0) !=
	ft_printf("020.0,%020.0c--\n", 0);

		// (printf(" 20.0,% 20.0c--\n", 'a') !=
	ft_printf(" 20.0,% 20.0c--\n", 'a');

		// (printf(" 20.0,% 20.0c--\n", 'a') !=
	ft_printf(" 20.0,% 20.0c--\n", 'a');

		// (printf(" 20.0,% 20.0c--\n", 0) !=
	ft_printf(" 20.0,% 20.0c--\n", 0);

		// (printf("+20.0,%+20.0c--\n", 'a') !=
	ft_printf("+20.0,%+20.0c--\n", 'a');

		// (printf("+20.0,%+20.0c--\n", 'a') !=
	ft_printf("+20.0,%+20.0c--\n", 'a');

		// (printf("+20.0,%+20.0c--\n", 0) !=
	ft_printf("+20.0,%+20.0c--\n", 0);

		// (printf("20.0,%20.0c--\n", 0) !=
	ft_printf("20.0,%20.0c--\n", 0);

		// (printf("-20.0,%-20.0c--\n", 'a') !=
	ft_printf("-20.0,%-20.0c--\n", 'a');

		// (printf("-20.0,%-20.0c--\n", 'a') !=
	ft_printf("-20.0,%-20.0c--\n", 'a');

		// (printf("-20.0,%-20.0c--\n", 0) !=
	ft_printf("-20.0,%-20.0c--\n", 0);


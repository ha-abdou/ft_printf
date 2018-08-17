-	   if (printf("aa%###   ##    *.*12dnnnnnnd%d\n", 10, 15, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.*12dnnnnnnd%d\n", 10, 15, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("aa%###   ##    *.*12dnnnnnnd%d\n", -10, -15, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.*12dnnnnnnd%d\n", -10, -15, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("aa%###   ##    *.*12dnnnnnnd%d\n", 5, 10, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.*12dnnnnnnd%d\n", 5, 10, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("aa%###   ##    *.-1012dnnnnnnd%d\n", 5, 8, 20, 30, 40, 50, 60) !=
	ft_printf("aa%###   ##    *.-1012dnnnnnnd%d\n", 5, 8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.-1012d-->%d\n", 5, 8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.-1012d-->%d\n", 5, 8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.-*12d-->%d\n", 5, 8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.-*12d-->%d\n", 5, 8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.-*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.-*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%# -+00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%# -+00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("% -+#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("% -+#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%# +-00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%# +-00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("% *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("% *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-+*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%- *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%- *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%+ *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%+ *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%# *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%# *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("% -#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("% -#00#*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%0 *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%0 *.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%+0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%+0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%-0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%-0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");

	   if (printf("%#0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60) !=
	ft_printf("%#0*.*12d-->%d\n", 5, -8, 20, 30, 40, 50, 60))
	   	printf("no match:\n");
	printf("\n");
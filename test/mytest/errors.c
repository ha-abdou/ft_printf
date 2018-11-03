if (!setlocale(LC_ALL, ""))
    printf("Echec setlocal\n");
/*S*/
/*
wchar_t	s[4];
s[0] = 0x53;
s[1] = 0x3abc;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%S\n", s) !=
	   printf("-%S\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 0x53;
s[1] = 0xd800;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%S\n", s) !=
	   printf("-%S\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 'a';
s[1] = 254;
s[2] = 'b';
s[3] = '\0';
if (ft_printf("+%S\n", s) !=
	   printf("-%S\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 254;
s[1] = 256;
s[2] = 'b';
s[3] = '\0';
if (ft_printf("+%S\n", s) !=
	   printf("-%S\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 0x53;
s[1] = 0x3abc;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%.9lS\n", s) !=
	   printf("-%.9lS\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 0x53;
s[1] = 0x3abc;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%10ls\n", s) !=
	   printf("-%10lS\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 0x53;
s[1] = 0x3abc;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%.5ls\n", s) !=
	   printf("-%.5lS\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 0x53;
s[1] = 0x3abc;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%5S+\n", s) !=
	   printf("-%5S-\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 0x53;
s[1] = 0x3abc;
s[2] = 0x81000;
s[3] = '\0';
if (ft_printf("+%-12S+\n", s) !=
	   printf("-%-12S-\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 'a';
s[1] = 250;
s[2] = 'b';
s[3] = '\0';
if (ft_printf("+%-4S\n", s) !=
	   printf("-%-4S\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

s[0] = 'a';
s[1] = 250;
s[2] = 'b';
s[3] = '\0';
if (ft_printf("+%9ls\n", s) !=
	   printf("-%9ls\n", s))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%-+-12.7Dt%0 4i %04.2% et %lc titi\n", 125, 124, 256) !=
	   printf("-%-+-12.7Dt%0 4i %04.2% et %lc titi\n", 125, 124, 256))
	   	ft_printf("no match:\n");
	ft_printf("\n");

int		ret;
if (ft_printf("+test%-8p %---32p %#5.3x%#024X\n", &ret, &ret, 0x25, 0) !=
	   printf("-test%-8p %---32p %#5.3x%#024X\n", &ret, &ret, 0x25, 0))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("test %-7C %007d%-10.2ls!!\n", 0xd777, 0x45, L"ã€»") !=
	   printf("test %-7C %007d%-10.2ls!!\n", 0xd777, 0x45, L"ã€»"))
	   	ft_printf("no match:\n");
	ft_printf("\n");
*/

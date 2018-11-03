if (!setlocale(LC_ALL, ""))
    printf("Echec setlocal\n");
/*S*/

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


if (ft_printf("+%C+\n", 0x11ffff) !=
	   printf("-%C-\n", 0x11ffff))
	   	ft_printf("no match:\n");
	ft_printf("\n");
	

if (ft_printf("+%C+\n", (wint_t)-2) !=
	   printf("-%C-\n", (wint_t)-2))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%C+\n", 0xd800) !=
	   printf("-%C-\n", 0xd800))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%C+\n", 0xdb02) !=
	   printf("-%C-\n", 0xdb02))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%C+\n", 0xdfff) !=
	   printf("-%C-\n", 0xdfff))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%C+\n", 0xbffe) !=
	   printf("-%C-\n", 0xbffe))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%lc+\n", 254) !=
	   printf("-%lc-\n", 254))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%C+\n", 256) !=
	   printf("-%C-\n", 256))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%5lc+\n", 350) !=
	   printf("-%5lc-\n", 350))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%5c+\n", 'a') !=
	   printf("-%5c-\n", 'a'))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%-8C+\n", 1350) !=
	   printf("+%-8C+\n", 1350))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%8C et coco %C titi %lc\n", 3250, 0x11ffff, 'a') !=
	   printf("-%8C et coco %C titi %lc\n", 3250, 0x11ffff, 'a'))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%---8C et coco %1C titi\n", 3250, 0xffff) !=
	   printf("-%---8C et coco %1C titi\n", 3250, 0xffff))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+%6C et coco %C titi %C tyty\n", 3250, 0xd800, 'u') !=
	   printf("-%6C et coco %C titi %C tyty\n", 3250, 0xd800, 'u'))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+yo%2C%-12lc et %C titi %C tyty\n", 'u', 254, 256, 'a') !=
	   printf("+yo%2C%-12lc et %C titi %C tyty\n", 'u', 254, 256, 'a'))
	   	ft_printf("no match:\n");
	ft_printf("\n");

if (ft_printf("+test %-7C %007d%-10.2ls!!\n", 0xd777, 0x45, L"ã€»") !=
	   printf("+test %-7C %007d%-10.2ls!!\n", 0xd777, 0x45, L"ã€»"))
	   	ft_printf("no match:\n");
	ft_printf("\n");
	
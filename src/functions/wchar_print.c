#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_putwchar(wchar_t wc)
{
	int	i;

	i = 1;
	if (wc <= 127)
		ft_putchar(wc);
	else if (wc <= 2047)
	{
		ft_putchar((wc >> 6) + 0xC0);
		ft_putchar((wc & 0x3F) + 0x80);
		i++;
	}
	else if (wc <= 65535)
	{
		ft_putchar((wc >> 12) + 0xE0);
		ft_putchar(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar((wc & 0x3F) + 0x80);
		i += 2;
	}
	else if (wc <= 1114111)
	{
		ft_putchar((wc >> 18) + 0xF0);
		ft_putchar(((wc >> 12) & 0x3F) + 0x80);
		ft_putchar(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar((wc & 0x3F) + 0x80);
		i += 3;
	}
	return (i);
}

static int	ft_putwstr(wchar_t *ws)
{
	int	i;

	i = 0;
	while (*ws)
	{
		i += ft_putwchar(*ws);
		ws++;
	}
	return (i);
}

void		wchar_print(t_bundle *bundle, wchar_t *str, int len)
{
	if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
	{
		bundle->print_buffer(bundle, 1);
		bundle->printed_length += ft_putwchar(*str);
	}
	else
		bundle->cpy2buffer(bundle, (char*)str, len);
}

void		wstr_print(t_bundle *bundle, wchar_t *str, int len)
{
	if (ft_strcmp(bundle->sub_specifiers->length ,"l") == 0)
	{
		bundle->print_buffer(bundle, 1);
		bundle->printed_length += ft_putwstr(str);
	}
	else
		bundle->cpy2buffer(bundle, (char*)str, len);
}

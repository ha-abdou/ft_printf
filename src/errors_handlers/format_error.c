#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
//todo myputnbr


void		format_error(t_bundle *bundle, int i)
{
	ft_putstr("%");
	bundle->printed_length++;/*
	if (ft_strchr(bundle->sub_specifiers->flag, '#'))
		bundle->printed_length += ft_myputstr("#", 0, 1);
	if (ft_strchr(bundle->sub_specifiers->flag, '+'))
		bundle->printed_length += ft_myputstr("+", 0, 1);
	else if (ft_strchr(bundle->sub_specifiers->flag, ' '))
		bundle->printed_length += ft_myputstr(" ", 0, 1);
	if (ft_strchr(bundle->sub_specifiers->flag, '-'))
		bundle->printed_length += ft_myputstr("-", 0, 1);
	else if (ft_strchr(bundle->sub_specifiers->flag, '0'))
		bundle->printed_length += ft_myputstr("0", 0, 1);
	if (bundle->sub_specifiers->width != 0)
		bundle->printed_length += ft_myputnbr(bundle->sub_specifiers->width);
	if (bundle->sub_specifiers->precision >= 0)
	{
		ft_putstr(".");
		bundle->printed_length += ft_myputnbr(bundle->sub_specifiers->precision) + 1;
	}
	if (bundle->sub_specifiers->length)
		bundle->printed_length += ft_myputstr(bundle->sub_specifiers->length, 0, ft_strlen(bundle->sub_specifiers->length));*/
	bundle->i = i;
}

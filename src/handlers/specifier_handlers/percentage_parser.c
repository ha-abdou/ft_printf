#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
#include <stdio.h>

void		percentage_parser(void *self)
{
	t_bundle			*bundle;
//	char				*str;
//	char				*tmp;
	
	bundle = (t_bundle *)self;

	bundle->cpy2buffer(bundle, "%", 1);

//	str = ft_strcpy(ft_strnew(2), "%");
	/*
	if (bundle->sub_specifiers->width <= 1)
		bundle->cpy2buffer(bundle, str, 1);
	else if (bundle->sub_specifiers->width > 1)
	{
		if (ft_strchr(bundle->sub_specifiers->flag, '-'))
			bundle->cpy2buffer(bundle, str, 1);
		if (bundle->sub_specifiers->width > 1)
		{
			tmp = ft_strnew(bundle->sub_specifiers->width);
			ft_memset((void*)tmp, ' ', bundle->sub_specifiers->width - 1);
			bundle->cpy2buffer(bundle, tmp, ft_strlen(tmp));
		}
		if (!ft_strchr(bundle->sub_specifiers->flag, '-'))
			bundle->cpy2buffer(bundle, str, 1);
	}
	free(str);*/
}

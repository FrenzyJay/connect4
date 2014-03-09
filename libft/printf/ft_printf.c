/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 16:53:37 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/24 18:03:34 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libftprintf.h"

static void	ft_printstr(va_list *ap, int *len, t_flag *flag)
{
	int		size;

	if ((size = ft_fputstr(va_arg(*ap, char *), flag->offset)) != -1)
		*len = *len + size;
	else
		*len = *len + ft_fputstr("(null)", -1);
}

static void	ft_printchar(va_list *ap, int *len)
{
	int		c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
	*len = *len + 1;
}

static void	ft_printoctal(va_list *ap, int *len)
{
	long int	nb;

	nb = va_arg(*ap, long int);
	ft_putoctal(nb, len);
}

static int	ft_print(char *format, va_list *ap, int *len)
{
	t_flag	*flag;
	int		jumpto;

	flag = ft_init_flag();
	flag = ft_getflag(format, flag);
	if (flag && flag->flag != 0)
	{
		if (flag->flag == 1)
			*len = *len + ft_fputnbr(va_arg(*ap, int), flag->offset);
		else if (flag->flag == 2)
			ft_printstr(ap, len, flag);
		else if (flag->flag == 3)
			ft_printchar(ap, len);
		else if (flag->flag == 4)
			ft_fputnbru(va_arg(*ap, unsigned int), flag->offset, len);
		else if (flag->flag == 5)
			ft_printoctal(ap, len);
	}
	jumpto = flag->nbopt;
	free(flag);
	return (jumpto);
}

int			ft_printf(const char *format, ...)
{
	va_list 	ap;
	char		*toprint;
	int			i;
	int			len;

	len = 0;
	va_start(ap, format);
	toprint = (char *) format;
	i = 0;
	if (format)
	{
		while (*toprint && i != -1)
		{
			i = ft_chari(toprint, '%');
			if (i == -1)
				len = len + ft_fputstr(toprint, -1);
			else
			{
				len = len + ft_fputstr(toprint, i);
				toprint = toprint + ft_print(toprint + i + 1, &ap, &len) + i;
			}
		}
	}
	va_end(ap);
	return (len);
}


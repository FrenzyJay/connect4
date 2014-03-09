/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 00:59:49 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:27:54 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"

/*
** 1 : d & i; 2 : s; 3 : c; 4 : u
*/

static int	ft_isflag(char c)
{
	if (c == 'd' || c == 'i')
		return (1);
	else if (c == 's')
		return (2);
	else if (c == 'c')
		return (3);
	else if (c == 'u')
		return (4);
	else if (c == 'o')
		return (5);
	return (0);
}

t_flag		*ft_init_flag(void)
{
	t_flag	*flag;

	flag = (t_flag *) malloc(sizeof(t_flag));
	if (!flag)
		return (NULL);
	flag->offset = -1;
	flag->flag = 0;
	flag->nbopt = 0;
	return (flag);
}

t_flag		*ft_getflag(char *format, t_flag *flag)
{
	int	i;

	i = 0;
	if (format[i] == '%')
	{
		ft_fputstr("%", -1);
		i++;
	}
	else if ((flag->flag = ft_isflag(format[i])) > 0)
		i++;
	flag->nbopt = i + 1;
	return (flag);
}


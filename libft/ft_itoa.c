/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 06:46:59 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/24 18:01:08 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	ft_log10(int nb)
{
	int	ktr;

	ktr = 0;
	while (nb > 10)
	{
		nb = nb / 10;
		ktr = ktr + 1;
	}
	return (ktr + 1);
}

char		*ft_itoa(int nb)
{
	int		ktr;
	char	*str;
	int		isneg;

	isneg = 0;
	if (nb < 0)
	{
		isneg = 1;
		nb = -nb;
	}
	ktr = ft_log10(nb) + isneg;
	str = (char *) malloc(ktr + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, ktr + 1);
	while (ktr > isneg)
	{
		str[ktr - 1] = (nb % 10) + 48;
		nb = nb / 10;
		ktr = ktr - 1;
	}
	if (isneg == 1)
		str[ktr - 1] = '-';
	return (str);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 19:07:53 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/24 18:03:08 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_isdigit(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (str == NULL)
		return (0);
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

char			*ft_itoa(int nb)
{
	static char	buf[12];
	char		*ptr;

	buf[11] = '\0';
	ptr = &buf[11];
	if (nb >= 0)
	{
		if (nb == 0)
			*--ptr = '0';
		while (nb != 0)
		{
			*--ptr = '0' + (nb % 10);
			nb = nb / 10;
		}
	}
	else
	{
		while (nb != 0)
		{
			*--ptr = '0' - (nb % 10);
			nb = nb / 10;
		}
		*--ptr = '-';
	}
	return (ptr);
}

unsigned long	ft_itoo(int nb)
{
	int				i;
	unsigned long	octal;
	unsigned int	div;

	i = ft_intlen(nb);
	i = (i > 0 ? i : 1);
	octal = 0;
	while (i >= 0)
	{
		div = nb / ft_pow(8, i);
		octal = octal + div * ft_pow(10, i);
		nb = nb % ft_pow(8, i);
		i = i - 1;
	}
	return (octal);
}


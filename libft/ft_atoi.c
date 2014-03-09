/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 21:28:19 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/24 18:00:35 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isneg(const char *str)
{
	int	ktr;
	int	min;

	ktr = 0;
	min = 0;
	while (!ft_isdigit(str[ktr]) && str[ktr] != '\0')
	{
		if (str[ktr] == '-')
			min = min + 1;
		ktr = ktr + 1;
	}
	if (min == 1)
		return (1);
	else if (min > 1)
		return (2);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int	nb;
	int	kount;

	nb = 0;
	kount = 0;
	while (!ft_isalnum(str[kount]) && str[kount] != '\0')
		kount = kount + 1;
	while (ft_isdigit(str[kount]))
	{
		nb = nb * 10;
		nb = nb + (str[kount] - '0');
		kount = kount + 1;
	}
	if (ft_isneg(str) == 1)
		return (-nb);
	else if (ft_isneg(str) == 2)
		return (0);
	else
		return (nb);
}


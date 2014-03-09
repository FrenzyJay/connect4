/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 13:10:06 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:21:30 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_intlen(long int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int	ft_pow(int nb, int pow)
{
	size_t	result;

	result = nb;
	if (nb == 0)
		return (0);
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		result = result * nb;
		pow = pow - 1;
	}
	return (result);
}

int	ft_chari(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (i);
	return (-1);
}


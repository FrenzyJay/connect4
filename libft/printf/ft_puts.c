/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 19:30:52 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/21 04:23:17 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libftprintf.h"

int		ft_fputnbr(int nb, int offset)
{
	return (ft_fputstr(ft_itoa(nb), offset));
}

int		ft_putchar(char c)
{
	write(1, &c , 1);
	return (1);
}

void	ft_fputnbru(unsigned int nb, int offset, int *len)
{
	if (nb / 10 > 0)
		ft_fputnbru(nb / 10, offset, len);
	*len = *len + 1;
	ft_putchar(nb % 10 + '0');
}

void	ft_putoctal(long int nb, int *len)
{
	if (nb >= 8)
	{
		ft_putoctal(nb / 8, len);
		ft_putoctal(nb % 8, len);
	}
	else
	{
		*len = *len + 1;
		ft_putchar(48 + nb);
	}
}

int		ft_fputstr(char *str, int offset)
{
	int		i;
	int		j;
	char	*spaces;

	j = 0;
	if (!str)
		return (-1);
	i = ft_strlen(str);
	if (offset > i)
	{
		spaces = (char *) malloc(offset - i + 1);
		spaces[offset - i] = '\0';
		while (j < offset - i + 1)
		{
			spaces[j] = ' ';
			j++;
		}
		write(1, spaces, offset - i + 1);
		free(spaces);
		offset = i;
	}
	if (offset < 0)
		offset = i;
	write(1, str, offset);
	return (offset);
}


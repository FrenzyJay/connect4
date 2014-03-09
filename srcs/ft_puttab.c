/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:36:30 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 23:01:41 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "puissance4.h"

void	ft_putstrcolor(char *str, char *color, int width)
{
	if (str && color)
	{
		ft_putstr(color);
		while (width > 0)
		{
			write(1, " ", 1);
			width--;
		}
		ft_putstr(str);
		ft_putstr(ENDCOLOR);
	}
}

void	ft_putcolnum(int x, int width)
{
	int	nb;
	int	i;

	i = 1;
	nb = 0;
	while (i <= x)
	{
		nb = width - ft_logten(i);
		while (nb >= 0)
		{
			write(1, " ", 1);
			nb--;
		}
		ft_printf("%d", i);
		i++;
	}
	ft_printf("\n");
}

void	ft_puttab(int **tab, int y, int x)
{
	int	i;
	int	j;
	int	width;

	j = 0;
	width = ft_logten(x);
	ft_putstr(CLEARTERM);
	ft_printf("\n");
	while (++j < y)
	{
		i = 0;
		while (i < x)
		{
			if (tab[j][i] == 0)
				ft_putstrcolor("◉", GREY, width);
			else if (tab[j][i] == 1)
				ft_putstrcolor("◉", RED, width);
			else if (tab[j][i] == 2)
				ft_putstrcolor("◉", YELLOW, width);
			i++;
		}
		ft_putstrcolor(" ", RED, 0);
		ft_printf("\n");
	}
	ft_putcolnum(x, width);
}


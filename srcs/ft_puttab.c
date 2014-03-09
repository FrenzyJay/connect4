/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:36:30 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/08 18:58:35 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

void	ft_putstrcolor(char *str, char *color)
{
	if (str && color)
	{
		ft_putstr(color);
		ft_putstr(str);
		ft_putstr(ENDCOLOR);
	}
}

void	ft_puttab(int **tab, int y, int x)
{
	int	i;
	int	j;

	j = 0;
	ft_putstr(CLEARTERM);
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (tab[j][i] == 0)
				ft_putstrcolor(". ", GREY);
			else if (tab[j][i] == 1)
				ft_putstrcolor("0 ", RED);
			else if (tab[j][i] == 2)
				ft_putstrcolor("0 ", CYAN);
			i++;
		}
		ft_printf("\n");
		j++;
	}
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 03:02:19 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 22:04:13 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include "puissance4.h"

int		ft_logten(int x)
{
	int	len;

	len = 0;
	while (x > 0)
	{
		x = x / 10;
		len++;
	}
	return (len);
}

void	put_prompt(int player, t_grid *grid)
{
	ft_puttab(grid->map, grid->height, grid->width);
	if (player == 1)
		ft_printf("\n%splayer %d%s : ", SRED, player, ENDCOLOR);
	else
		ft_printf("\n%splayer %d%s : ", SYELLOW, player, ENDCOLOR);
}

void	victory(int player, t_grid *grid)
{
	ft_puttab(grid->map, grid->height, grid->width);
	if (player == 1)
		ft_putstrcolor("\nPlayer 1 WIN\n", SRED, 0);
	else
		ft_putstrcolor("\nPlayer 2 WIN\n", SYELLOW, 0);
}

int		ft_rand(void)
{
	int	random;

	random = 0;
	srand(time(NULL));
	random = rand();
	return (random);
}

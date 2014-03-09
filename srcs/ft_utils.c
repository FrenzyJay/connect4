/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 03:02:19 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 15:49:40 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int	ft_logten(int x)
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
		ft_printf("\n%splayer %d%s : ", RED, player, ENDCOLOR);
	else
		ft_printf("\n%splayer %d%s : ", YELLOW, player, ENDCOLOR);
}

void	victory(int player, t_grid *grid)
{
	ft_puttab(grid->map, grid->height, grid->width);
	if (player == 1)
		ft_putstrcolor("\nPlayer 1 WIN\n", RED, 0);
	else
		ft_putstrcolor("\nPlayer 2 WIN\n", YELLOW, 0);
}


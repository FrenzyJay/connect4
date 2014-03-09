/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_win.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:53:56 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/08 14:44:49 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int	nb_tl(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_tl(grid, y + 1, x - 1, player));
	}
	return (0);
}

int	nb_tr(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_tr(grid, y + 1, x + 1, player));
	}
	return (0);
}

int	nb_bl(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_bl(grid, y - 1, x - 1, player));
	}
	return (0);
}

int	nb_br(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_br(grid, y - 1, x + 1, player));
	}
	return (0);
}


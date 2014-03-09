/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_win.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:53:56 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/08 14:44:30 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int	nb_left(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_left(grid, y, x - 1, player));
	}
	return (0);
}

int	nb_right(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_right(grid, y, x + 1, player));
	}
	return (0);
}

int	nb_top(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_top(grid, y + 1, x, player));
	}
	return (0);
}

int	nb_bottom(t_grid *grid, int y, int x, int player)
{
	if (x >= 0 && y >= 0 && x < grid->width && y < grid->height)
	{
		if (grid->map[y][x] == player)
			return (1 + nb_bottom(grid, y - 1, x, player));
	}
	return (0);
}


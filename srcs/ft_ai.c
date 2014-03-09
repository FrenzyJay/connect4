/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ai.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:53:15 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 19:00:20 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int		player_victory(t_grid * grid, int player)
{	
	int	i;
	int	j;

	i = 0;
	while (i < grid->width)
	{
		j = grid->height - 1;
		while (j >= 0 && grid->map[j][i] != 0)
			j--;
		if (j >= 0)
		{
			grid->map[j][i] = player;
			if (check_win(grid, j, i, player) == 1)
			{
				grid->map[j][i] = 0;
				return (i + 1);
			}
			grid->map[j][i] = 0;
		}
		i++;
	}
	return (-1);
}

int		get_best_move(t_grid *grid, int player)
{
	int	coord[2];
	int	len;

	len = 3;
	while (len > 0)
	{
		coord[0] = 0;
		while (coord[0] < grid->width)
		{
			coord[1] = grid->height - 1;
			while (coord[1] >= 0 && grid->map[coord[1]][coord[0]] != 0)
				coord[1]--;
			if (coord[1] >= 0)
			{
				grid->map[coord[1]][coord[0]] = player;
				if (check_align(grid, coord, player, len) == 1)
				{
					grid->map[coord[1]][coord[0]] = 0;
					return (coord[0] + 1);
				}
				grid->map[coord[1]][coord[0]] = 0;
			}
			coord[0]++;
		}
		len--;
	}
	return (-1);
}

int		col_full(t_grid *grid, int col)
{
	int	i;

	i = grid->height - 1;
	while (i >= 0 && grid->map[i][col] != 0)
		i--;
	if (i >= 0)
		return (1);
	return (0);
}

int		random_move(int width)
{
	static int	i = 0;

	i++;
	if (i > width)
		i = i % width;
	return (i);
}

int		ft_ai(t_grid *grid)
{
	int	move;
	int	tmp;

	move = (grid->width + 1) / 2;
	if ((tmp = player_victory(grid, 2)) != -1)
		move = tmp;
	else
	{
		if ((tmp = player_victory(grid, 1)) != -1)
			move = tmp;
		else if ((tmp = get_best_move(grid, 1)) != -1)
			move = tmp;
		else if ((tmp = get_best_move(grid, 2)) != -1)
			move = tmp;
		else
		{
			while (col_full(grid, move) == 0)
				move = random_move(grid->width);
		}
	}
	ft_printf("%d\n", move);
	return (move);
}


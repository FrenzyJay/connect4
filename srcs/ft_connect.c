/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_connect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:50:22 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 18:30:48 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puissance4.h"

int		check_win(t_grid *grid, int y, int x, int player)
{
	if (nb_left(grid, y, x, player) + nb_right(grid, y, x, player) >= 5)
		return (1);
	if (nb_top(grid, y, x, player) + nb_bottom(grid, y, x, player) >= 5)
		return (1);
	if (nb_tl(grid, y, x, player) + nb_br(grid, y, x, player) >= 5)
		return (1);
	if (nb_bl(grid, y, x, player) + nb_tr(grid, y, x, player) >= 5)
		return (1);
	return (0);
}

int		check_align(t_grid *grid, int c[2], int player, int len)
{
	int	x;
	int	y;

	x = c[0];
	y = c[1];
	if (nb_left(grid, y, x, player) + nb_right(grid, y, x, player) >= len + 1)
		return (1);
	if (nb_top(grid, y, x, player) + nb_bottom(grid, y, x, player) >= len + 1)
		return (1);
	if (nb_tl(grid, y, x, player) + nb_br(grid, y, x, player) >= len + 1)
		return (1);
	if (nb_bl(grid, y, x, player) + nb_tr(grid, y, x, player) >= len + 1)
		return (1);
	return (0);
}

int		put_tocken(t_grid *grid, int move, int player)
{
	int	i;

	move--;
	i = grid->height - 1;
	if (move >= 0 && move < grid->width)
	{
		while (i >= 0 && grid->map[i][move] != 0)
			i--;
		if (i >= 0)
		{
			grid->map[i][move] = player;
			if (check_win(grid, i, move, player) == 1)
				return (2);
		}
		else
			return (1);
	}
	else
		return (1);
	return (0);
}

int		get_move(int player, t_grid *grid)
{
	int		move;
	char	*line;

	line = NULL;
	move = 0;
	if (player == 1 || player == 1)
	{
		get_next_line(0, &line);
		/* VERIFIER QU IL S AGIT BIEN D UN NOMBRE */
		move = ft_atoi(line);
		free(line);
	}
	else
	{
		move = ft_ai(grid);
	}
	return (move);
}

void	puissance4(t_grid *grid)
{
	int		end;
	int		move;
	int		player;
	int		result;
	int		nbcoup;

	end = 0;
	move = -1;
	/* RANDOMLY CHOOSE THE PLAYER WHO START */
	player = 1;
	result = 0;
	nbcoup = grid->width * grid->height;
	while (end == 0 && nbcoup > 0)
	{
		put_prompt(player, grid);
		move = get_move(player, grid);
		if ((result = put_tocken(grid, move, player)) == 0)
		{
			player = (player == 1 ? 2 : 1);
			nbcoup--;
		}
		else if (result == 2)
		{
			victory(player, grid);
			end = 1;
		}
	}
	if (nbcoup == 0)
		ft_printf("Draw\n");
}


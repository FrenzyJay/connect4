/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:10:46 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/08 20:37:44 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "puissance4.h"

int		check_win(t_grid *grid, int y, int x)
{
	int	player;

	player = grid->map[y][x];
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
			if (check_win(grid, i, move) == 1)
				return (2);
		}
		else
			return (1);
	}
	else
		return (1);
	return (0);
}

int		ft_ia(t_grid *grid)
{
	(void)grid;
	return (4);
}

void	puissance4(t_grid *grid)
{
	int		end;
	char	*line;
	int		move;
	int		player;
	int		result;
	int		nbcoup;

	end = 0;
	move = -1;
	line = NULL;

	/* RANDOMLY CHOOSE THE PLAYER WHO START */
	player = 1;

	result = 0;
	nbcoup = grid->width * grid->height;
	while (end == 0 && nbcoup > 0)
	{
		ft_puttab(grid->map, grid->height, grid->width);
		if (player == 1)
			ft_printf("\n%splayer %d%s : ", RED, player, ENDCOLOR);
		else
			ft_printf("\n%splayer %d%s : ", CYAN, player, ENDCOLOR);

		if (player == 1 || player == 2)
		{
			get_next_line(0, &line);
			/* VERIFIER QU IL S AGIT BIEN D UN NOMBRE */
			move = ft_atoi(line);
			free(line);
		}
		else
		{
			move = ft_ia(grid);
		}

		if ((result = put_tocken(grid, move, player)) == 0)
		{
			player = (player == 1 ? 2 : 1);
			nbcoup--;
		}
		else if (result == 2)
		{
			ft_puttab(grid->map, grid->height, grid->width);
			if (player == 1)
				ft_putstrcolor("\nPlayer 1 WIN\n", RED);
			else
				ft_putstrcolor("\nPlayer 2 WIN\n", CYAN);
			end = 1;
		}
	}
}

int		main(int argc, char **argv)
{
	t_grid	grid;

	if (argc != 3)
		return (ft_error("Usage : ./puissance4 nbRows nbCols\n"));
	/* VERIFIER QU IL S AGIT BIEN DE 2 NOMBRES */
	grid.height = ft_atoi(argv[1]);
	grid.width = ft_atoi(argv[2]);
	if (grid.height < 6 || grid.width < 7)
		return (ft_error("The grid must be at least a 6x7\n"));
	grid.map = ft_newtab(grid.height, grid.width);

	puissance4(&grid);

	ft_destroytab(grid.map, grid.height);
	return (0);
}


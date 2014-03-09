/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:10:46 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 15:54:41 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

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


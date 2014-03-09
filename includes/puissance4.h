/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:13:55 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/08 17:37:11 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include "libft.h"

# define ENDCOLOR "\33[0m"
# define RED "\33[31m"
# define CYAN "\33[36m"
# define GREY "\33[1;30m"
# define CLEARTERM "\033[2J\r"

typedef struct	s_grid
{
	int			width;
	int			height;
	int			**map;
}				t_grid;

int		**ft_newtab(int height, int width);
void	ft_putstrcolor(char *str, char *color);
void	ft_puttab(int **tab, int y, int x);
void	ft_destroytab(int **tab, int y);

/*
** ft_win.c
*/
int	nb_left(t_grid *grid, int y, int x, int player);
int	nb_right(t_grid *grid, int y, int x, int player);
int	nb_top(t_grid *grid, int y, int x, int player);
int	nb_bottom(t_grid *grid, int y, int x, int player);

/*
** ft_win_more.c
*/
int	nb_tl(t_grid *grid, int y, int x, int player);
int	nb_tr(t_grid *grid, int y, int x, int player);
int	nb_bl(t_grid *grid, int y, int x, int player);
int	nb_br(t_grid *grid, int y, int x, int player);

#endif /* !PUISSANCE4_H */


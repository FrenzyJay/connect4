/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:13:55 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/09 21:13:31 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include "libft.h"

# define ENDCOLOR "\33[0m"
# define RED "\33[31m\33[44m"
# define SRED "\33[31m"
# define CYAN "\33[36m\33[44m"
# define YELLOW "\33[0;33m\33[44m"
# define SYELLOW "\33[0;33m"
# define GREY "\33[1;30m\33[44m"
# define CLEARTERM "\033[2J\033[0;0H"

typedef struct	s_grid
{
	int			width;
	int			height;
	int			**map;
}				t_grid;

int		**ft_newtab(int height, int width);
void	ft_putstrcolor(char *str, char *color, int width);
void	ft_puttab(int **tab, int y, int x);
void	ft_destroytab(int **tab, int y);

/*
** ft_win.c
*/
int		nb_left(t_grid *grid, int y, int x, int player);
int		nb_right(t_grid *grid, int y, int x, int player);
int		nb_top(t_grid *grid, int y, int x, int player);
int		nb_bottom(t_grid *grid, int y, int x, int player);

/*
** ft_win_more.c
*/
int		nb_tl(t_grid *grid, int y, int x, int player);
int		nb_tr(t_grid *grid, int y, int x, int player);
int		nb_bl(t_grid *grid, int y, int x, int player);
int		nb_br(t_grid *grid, int y, int x, int player);

/*
** ft_utils.c
*/
int		ft_logten(int x);
void	put_prompt(int player, t_grid *grid);
void	victory(int player, t_grid *grid);

/*
** ft_connect.c
*/
void	puissance4(t_grid *grid);
int		get_move(int player, t_grid *grid);
int		put_tocken(t_grid *grid, int move, int player);
int		check_win(t_grid *grid, int y, int x, int player);
int		check_align(t_grid *grid, int c[2], int player, int len);

/*
** ft_ai.c
*/
int		ft_ai(t_grid *grid);

#endif /* !PUISSANCE4_H */


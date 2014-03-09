/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 16:52:26 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/24 18:02:28 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>

typedef struct	s_flag
{
	int	flag;
	int	offset;
	int	nbopt;
}				t_flag;

int				ft_chari(char *str, char c);
int				ft_isdigit(char c);
size_t			ft_strlen(char const *str);
int				ft_atoi(const char *str);
char			*ft_itoa(int nb);
char			*ft_utoa(unsigned int nb);
int				ft_printf(const char *format, ...);
int				ft_fputstr(char *str, int offset);
int				ft_fputnbr(int nb, int offset);
void			ft_fputnbru(unsigned int nb, int offset, int *len);
t_flag			*ft_getflag(char *format, t_flag *flag);
t_flag			*ft_init_flag(void);
int				ft_intlen(long int nb);
int				ft_pow(int nb, int pow);
unsigned long	ft_itoo(int nb);
void			ft_putoctal(long int nb, int *len);

#endif /* !LIBFTPRINTF_H */


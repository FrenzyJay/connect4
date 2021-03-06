/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:05:56 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/07 20:05:58 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error(char *msg)
{
	int	i;

	i = 0;
	while (msg && msg[i])
		i++;
	write(2, msg, i);
	return (1);
}

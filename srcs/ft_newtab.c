/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:39:10 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/07 20:56:10 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puissance4.h"

int	**ft_newtab(int height, int width)
{
	int	i;
	int	**tab;

	i = 0;
	tab = (int **)ft_memalloc(sizeof(int *) * height);
	while (tab && i < height)
	{
		tab[i] = (int *)ft_memalloc(sizeof(int) * width);
		i++;
	}
	return (tab);
}


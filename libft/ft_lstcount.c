/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 05:21:02 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/23 06:15:09 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstcount(t_list *list)
{
	int		i;
	t_list	*curs;

	if (!list)
		return (0);
	i = 0;
	curs = list;
	while (curs->next != NULL)
	{
		curs = curs->next;
		i++;
	}
	return (i);
}


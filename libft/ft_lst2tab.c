/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 05:28:00 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/23 05:37:17 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_lst2tab(t_list *list)
{
	char	**newtab;
	t_list	*curs;
	int		i;
	int		j;

	if (!list)
		return (NULL);
	i = ft_lstcount(list);
	j = 0;
	curs = list;
	newtab = ft_memalloc(sizeof(char *) * (i + 1));
	while (j < i)
	{
		newtab[j] = curs->content;
		curs = curs->next;
		j++;
	}
	return (newtab);
}


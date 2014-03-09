/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 12:26:28 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:31:08 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bt_add(t_btree **rt, void *it, int (*cmpf)(const char *, const char *))
{
	if (!*rt)
		(*rt) = bt_new(it);
	else
	{
		if (cmpf((char *) (*rt)->item, (char *) it) >= 0)
		{
			if ((*rt)->left != 0)
				return (bt_add(&(*rt)->left, it, &(*cmpf)));
			else
				(*rt)->left = bt_new(it);
		}
		else
		{
			if ((*rt)->right != 0)
				return (bt_add(&(*rt)->right, it, cmpf));
			else
				(*rt)->right = bt_new(it);
		}
	}
}

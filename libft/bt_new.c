/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 12:25:56 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:13:37 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_btree	*bt_new(void *item)
{
	t_btree	*node;

	node = malloc(sizeof(t_btree));
	node->right = NULL;
	node->left = NULL;
	node->item = item;
	return (node);
}

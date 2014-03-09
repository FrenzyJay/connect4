/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbtree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:15:57 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:15:59 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_btree.h"
#include "libft.h"

void	ft_putbtree(t_btree **root)
{
	if (*root != NULL)
	{
		ft_putbtree(&(*root)->left);
		ft_putstr((char *) (*root)->item);
		ft_putstr(" ~> ");
		ft_putbtree(&(*root)->right);
	}
}

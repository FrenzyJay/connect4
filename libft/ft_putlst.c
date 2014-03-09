/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:16:10 by jvincent          #+#    #+#             */
/*   Updated: 2014/01/23 06:15:33 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *alst)
{
	t_list	*ptr;

	ptr = alst;
	while (ptr->next != NULL)
	{
		ft_putstr(ptr->content);
		if (ptr->next != NULL)
			ft_putstr(" ~> ");
		ptr = ptr->next;
	}
}

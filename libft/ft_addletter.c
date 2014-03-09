/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addletter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:05:04 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/07 20:05:06 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_word	*ft_addletter(t_word *word, char c)
{
	t_word	*fresh;

	if ((fresh = (t_word *)malloc(sizeof(t_word))) == NULL)
		return (NULL);
	fresh->c = c;
	fresh->next = word;
	word = fresh;
	return (word);
}

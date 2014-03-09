/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 23:17:39 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:26:05 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*buf;

	buf = (void *) malloc(n);
	if (buf)
	{
		buf = ft_memcpy(buf, s2, n);
		s1 = ft_memcpy(s1, buf, n);
		free(buf);
	}
	return (s1);
}


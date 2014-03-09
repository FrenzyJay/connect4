/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:50:28 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:16:29 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	ktr;

	ktr = 0;
	if (s1 && s2)
	{
		while (ktr < n)
		{
			((char*)s1)[ktr] = ((char*)s2)[ktr];
			ktr = ktr + 1;
		}
	}
	return (s1);
}


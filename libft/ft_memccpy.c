/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:46:34 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:15:58 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	ktr;

	ktr = 0;
	while (ktr < n && *(char*)(s2 + ktr) != (unsigned char) c)
	{
		((char*)s1)[ktr] = ((char*)s2)[ktr];
		ktr = ktr + 1;
	}
	if (*(char*)(s2 + ktr) == (unsigned char) c && ktr < n)
	{
		((char*)s1)[ktr] = ((char*)s2)[ktr];
		return (s1 + ktr + 1);
	}
	return (NULL);
}


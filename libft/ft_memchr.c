/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:42:17 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:16:11 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	ktr;

	if (s && c > 0 && n > 0)
	{
		ktr = 0;
		while (ktr < n && *(char*)(s + ktr) != (unsigned char)c)
			ktr = ktr + 1;
		if (*(char*)(s + ktr) == c)
			return ((void*)s + ktr);
	}
	return (NULL);
}


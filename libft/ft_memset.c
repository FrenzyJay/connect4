/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:37:42 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:26:22 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t	ktr;

	ktr = 0;
	if (ptr != NULL && c > 0 && len > 0)
	{
		while (ktr < len)
		{
			*(unsigned char*) (ptr + ktr) = (unsigned char) c;
			ktr = ktr + 1;
		}
	}
	return (ptr);
}


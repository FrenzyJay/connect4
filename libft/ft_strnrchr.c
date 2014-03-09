/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:06:49 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/07 20:06:53 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnrchr(const char *s, int c, int index)
{
	int	ktr;
	int	nb;

	if (s)
	{
		nb = 0;
		ktr = 0;
		while (s[ktr] != '\0')
			ktr = ktr + 1;
		while (ktr != 0 && nb != index)
		{
			if (s[ktr] == c)
				nb++;
			ktr = ktr - 1;
		}
		if (nb == index)
			return ((char*)s + ktr);
	}
	return (NULL);
}


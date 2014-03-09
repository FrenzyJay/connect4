/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:07:06 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:28:50 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	ktr;

	if (s)
	{
		ktr = 0;
		while (s[ktr] != '\0')
			ktr = ktr + 1;
		while (ktr != 0 && s[ktr] != c)
			ktr = ktr - 1;
		if (s[ktr] == c)
			return ((char*)s + ktr);
	}
	return (NULL);
}


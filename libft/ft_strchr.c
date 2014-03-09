/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:48:03 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:18:57 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	ktr;

	ktr = 0;
	if (s)
	{
		while (s[ktr] != '\0' && s[ktr] != (char)c)
			ktr = ktr + 1;
		if (s[ktr] == (char)c)
			return ((char*)s + ktr);
	}
	return (NULL);
}


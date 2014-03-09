/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:26:50 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:31:01 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	k;
	size_t	k2;

	if (s1 && s2)
	{
		if (s2[0] == '\0')
			return ((char*) s1);
		k2 = 0;
		k = 0;
		while (s1[k] != '\0' && k + k2 < n)
		{
			k2 = 0;
			while (s1[k + k2] == s2[k2] && s2[k2] != '\0'
				&& s1[k + k2] != '\0' && k + k2 < n)
			{
				if (s2[k2 + 1] == '\0')
					return ((char*) s1 + k);
				k2 = k2 + 1;
			}
			k = k + 1;
		}
	}
	return (NULL);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:26:50 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:25:36 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int	k;
	int	k2;

	if (s1 && s2)
	{
		if (s2[0] == '\0')
			return ((char*) s1);
		k = 0;
		while (s1[k] != '\0')
		{
			k2 = 0;
			while (s1[k + k2] == s2[k2]
				&& s2[k2] != '\0' && s1[k + k2] != '\0')
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


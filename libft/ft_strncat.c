/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:07:55 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:28:08 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	ktr;
	size_t	ktr2;

	if (s1 && s2)
	{
		ktr = 0;
		ktr2 = 0;
		while (s1[ktr] != '\0')
			ktr = ktr + 1;
		while (ktr2 < n && s2[ktr2] != '\0')
		{
			s1[ktr + ktr2] = s2[ktr2];
			ktr2 = ktr2 + 1;
		}
		s1[ktr + ktr2] = '\0';
	}
	return (s1);
}


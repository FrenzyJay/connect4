/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:53:45 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:28:28 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	kount;

	if (s1 && s2)
	{
		kount = 0;
		ft_bzero(s1, n);
		while (kount < n && (s1[kount] != '\0' || s2[kount] != '\0'))
		{
			s1[kount] = s2[kount];
			kount = kount + 1;
		}
	}
	return (s1);
}


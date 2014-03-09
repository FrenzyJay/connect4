/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 23:05:30 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:15:25 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	buf1;
	unsigned char	buf2;

	if (s1 && s2)
	{
		while (n)
		{
			buf1 = *(unsigned char*) s1;
			buf2 = *(unsigned char*) s2;
			if (buf1 != buf2)
				return (buf1 - buf2);
			n = n - 1;
			s1++;
			s2++;
		}
	}
	return (0);
}


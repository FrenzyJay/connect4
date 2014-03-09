/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:22:07 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:13:35 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!size && !dst && !src)
		return (0);
	while (dst[i] && i < size)
		i++;
	while (j + i + 1 < size && src[j])
	{
		if (j + i < size)
			dst[i + j] = src[j];
		j++;
	}
	if (j + i < size && !src[j])
		dst[i + j] = '\0';
	if (size < i)
		return (size + j);
	return (ft_strlen(src) + i);
}


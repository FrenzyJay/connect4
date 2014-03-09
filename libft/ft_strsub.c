/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:53:03 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:28:58 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	ktr;

	if (s)
	{
		str = (char *) malloc(len + 1);
		if (!str)
			return (NULL);
		ktr = 0;
		while (len > 0)
		{
			str[ktr] = s[start];
			start = start + 1;
			ktr = ktr + 1;
			len = len - 1;
		}
		str[ktr] = '\0';
		return (str);
	}
	return (NULL);
}


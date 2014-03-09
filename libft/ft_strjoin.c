/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:21:38 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:18:09 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	slen1;
	size_t	slen2;

	if (s1 && s2)
	{
		slen1 = ft_strlen(s1);
		slen2 = ft_strlen(s2);
		if ((new = ft_strnew(slen1 + slen2 + 1)) == NULL)
			return (NULL);
		i = 0;
		while (i < slen1 + slen2)
		{
			if (i < slen1)
				new[i] = s1[i];
			else
				new[i] = *s2++;
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	else
		return (NULL);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:28:31 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:29:10 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (s)
	{
		i = 0;
		while (s[i] != '\0' && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
			i = i + 1;
		j = ft_strlen((const char *)s) - 1;
		k = 0;
		while (j > 0 && (s[j] == '\n' || s[j] == '\t' || s[j] == ' '))
		{
			k = k + 1;
			j = j - 1;
		}
		if ((ft_strlen(s) - i - k) == ft_strlen(s))
			return (ft_strdup((char *) s));
		str = (char *) malloc(ft_strlen((const char *) s) - i - k);
		str = ft_strsub(s, (unsigned int) i, ft_strlen(s) - i - k);
		return (str);
	}
	return (NULL);
}


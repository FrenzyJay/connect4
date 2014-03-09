/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:38:12 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:27:53 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	len;
	size_t	size;

	size = 0;
	if (s)
	{
		len = ft_strlen((const char *) s);
		str = (char *) malloc(len);
		if (!str)
			return (NULL);
		while (s[size] != '\0')
		{
			str[size] = (*f)(*(char *)(s + size));
			size = size + 1;
		}
		return (str);
	}
	return (NULL);
}


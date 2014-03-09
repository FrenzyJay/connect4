/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:18:37 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:18:38 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[size] = (*f)(size, *(char *)(s + size));
			size = size + 1;
		}
		return (str);
	}
	return (NULL);
}


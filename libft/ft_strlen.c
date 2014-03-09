/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/21 01:29:44 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:27:40 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	kount;

	kount = 0;
	if (str != NULL)
	{
			while (str[kount] != '\0')
			kount++;
	}
	return (kount);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:16:29 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/29 16:16:31 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	ktr;

	ktr = 0;
	if (str != NULL)
	{
		while (str[ktr] != '\0')
		{
			write(fd, &str[ktr], 1);
			ktr = ktr + 1;
		}
	}
}


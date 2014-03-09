/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:06:20 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/07 20:06:25 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_putword(t_word *word)
{
	int		i;
	int		j;
	char	*buf;
	t_word	*current;

	i = ft_wordlen(word) + 1;
	buf = (char *)malloc(sizeof(char) * i);
	buf[i - 1] = '\0';
	current = word;
	j = i;
	while (current)
	{
		i--;
		buf[i] = current->c;
		current = current->next;
	}
	write(1, buf, j);
	free(buf);
	buf = NULL;
	ft_freeword(word);
}


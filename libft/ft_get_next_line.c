/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 05:56:19 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/21 08:59:39 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static char		*ft_getline(char *file)
{
	size_t	len;
	char	*line;

	len = 0;
	while (file[len] != '\n' && file[len] != '\0')
		len++;
	line = ft_strnew(len + 1);
	line = ft_strncpy(line, file, len);
	ft_strdel(&file);
	return (line);
}

static int		ft_readfile(int const fd, char **file)
{
	char	*buff;
	char	*tmp;
	int		ret;

	if ((buff = ft_strnew(BUFF_SIZE + 1)) == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		tmp = *file;
		*file = ft_strjoin(*file, buff);
		ft_strdel(&tmp);
		if (ft_strchr(buff, '\n') != NULL)
		{
			ft_strdel(&buff);
			return (ret);
		}
	}
	ft_strdel(&buff);
	ft_strdel(file);
	return (ret);
}

static int		ft_getfile(int const fd, char **line, char **file)
{
	int				ret;

	if (!*file)
		*file = ft_strnew(2);
	if (ft_strchr(*file, '\n') != NULL)
	{
		*line = *file;
		*file = ft_strdup((ft_strchr(*file, '\n') + 1));
		*line = ft_getline(*line);
		return (1);
	}
	else
	{
		ret = ft_readfile(fd, file);
		if (ret == 0 || ret == -1)
			return (ret);
		*line = *file;
		*file = ft_strdup((ft_strchr(*file, '\n')) + 1);
		*line = ft_getline(*line);
		return (1);
	}
}

int				get_next_line(int const fd, char **line)
{
	static char		*file;
	int				ret;

	if (BUFF_SIZE < 1 || !line || fd < 0)
		return (-1);
	ret = ft_getfile(fd, line, &file);
	if (ret == -1 || ret == 0)
		return (ret);
	return (1);
}


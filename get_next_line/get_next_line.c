/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:11:20 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/04/28 23:11:24 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	check_start(char **start, char **line)
{
	char	*ptr_nl;

	ptr_nl = NULL;
	if (*start)
	{
		if ((ptr_nl = ft_strchr(*start, '\n')))
		{
			*ptr_nl = '\0';
			*line = ft_strdup(*start);
			ft_strlcpy(*start, ++ptr_nl, ft_strlen(ptr_nl) + 1);
			return (1);
		}
		*line = ft_strdup(*start);
		free(*start);
		*start = NULL;
	}
	else
	{
		*line = malloc(sizeof(char));
		**line = '\0';
	}
	return (0);
}

int			get_next_line(int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	size_t		len_buff;
	char		*ptr_nl;
	char		*tmp;
	static char	*start;

	if (fd == -1)
		return (-1);
	if (check_start(&start, line))
		return (1);
	while ((len_buff = read(fd, buff, BUFF_SIZE)))
	{
		buff[len_buff] = '\0';
		if ((ptr_nl = ft_strchr(buff, '\n')))
		{
			*ptr_nl = '\0';
			*line = ft_strjoin(*line, buff);
			start = ft_strdup(++ptr_nl);
			return (1);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buff);
		free(tmp);
	}
	return (ft_strlen(*line) ? 1 : 0);
}

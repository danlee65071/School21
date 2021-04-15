/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:21:27 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 11:21:28 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char            **read_map( char *file_name, int high, int width)
{
	int     f;
	int     i;
	int     j;
	char    **map;
	char    c;

	f = open(file_name, O_RDONLY);
	if (f == -1)
		return (0);
	i = 0;
	map = malloc(sizeof(char *) * high + 1);
	while (i < high)
	{
		map[i] = malloc(sizeof(char) * width);
		i++;
	}
	i = 0;
	j = 0;
	while (read(f, &c, 1))
	{
		if (c == '\n' && i == 0)
			i++;
		else if (c == '\n' && i != 0 && i <= high)
		{
			map[i - 1][j] = '\0';
			i++;
			j = 0;
		}
		else if (c != '\n' && i != 0)
			map[i - 1][j++] = c;
	}
	map[i - 1] = 0;
	close (f);
	return (map);
}

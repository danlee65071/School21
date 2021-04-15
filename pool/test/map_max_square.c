/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_max_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:00:05 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/09 15:00:07 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

void	map_max_square(char **map, int high, int width, t_max_square *max_square)
{
	int		i;
	int		j;
	char	**tmp;

	tmp = malloc(sizeof(char *) * high);
	i = 0;
	while (i < high)
	{
		tmp[i] = malloc(sizeof(char) * width);
		i++;
	}
	i = 0;
	while (i < high)
	{
		j = 0;
		while (j < width)
		{
			if (i >= max_square->y && i <= (max_square->y + max_square->size) && j >= max_square->x && j <= (max_square->x + max_square->size))
					tmp[i][j] = 'x';
			else
				tmp[i][j] = map[i][j];
			j++;
		}
		i++;
	}
	map = tmp;
	print_map(map, high, width);
	free(tmp);
}

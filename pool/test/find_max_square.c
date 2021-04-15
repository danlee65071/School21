/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:55:05 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/09 12:55:07 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

void	find_max_square(int **int_map, int high, int width, t_max_square *res)
{
	t_max_square	*tmp;
	int				x;
	int				y;
	int				size;
	int				max_size;

	y = max_size = 0;
	tmp = malloc(sizeof(t_max_square));
	while (y < high - max_size)
	{
		x = 0;
		while (x < width - max_size)
		{
			//iterating_square(int_map, x, y, max_size, tmp);
            size = max_size;
            while ((size + y) < high && is_correct_square(int_map, x, y, size))
            {
                if (size > max_size)
                {
                    res->x = x;
                    res->y = y;
                    res->size = size;
                    max_size = size;
                }
                size++;
            }
			x++;
		}
		y++;
	}
	free(tmp);
}

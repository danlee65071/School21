/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterating_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:49:21 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 09:49:22 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	iterating_square(int **int_map, int x, int y, int size, t_max_square	*res)
{
	/*if (is_correct_square(int_map, x, y, size))
	{
		res->x = x;
		res->y = y;
		res->size = size;
		iterating_square(int_map, x, y, size + 1, res);
	}*/
    while (is_correct_square(int_map, x, y, size) && size < 9)
    {
        res->x = x;
        res->y = y;
        res->size = size;
        size++;
    }
}

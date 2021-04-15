/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_int_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:24:09 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 12:24:11 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**create_int_map(int high, int width)
{
	int	**int_map;
	int	i;

	int_map = (int **)malloc(sizeof(int *) * high);
	i = 0;
	while (i < high)
	{
		int_map[i] = malloc(sizeof(int) * width);
		i++;
	}
	return (int_map);
}

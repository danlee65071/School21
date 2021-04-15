/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:10:31 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 13:10:32 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	map_validation(char **map, char *first_line, int high, int width, char empty, char obstacle)
{
	if (!map_cmp_line(map, high, width))
		return (0);
	else if (high < 1)
		return (0);
	else if (!map_symbols_check(map, high, width, empty, obstacle))
		return (0);
	return (1);
}

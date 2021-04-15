/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_symbols.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:59:21 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 10:59:24 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	read_map_symbols(char *first_line, char *empty, char *obstacle, char *full)
{
	int i;

	i = 0;
	while (first_line[i++])
		;
	if (i >= 5)
	{
		*empty = first_line[i - 4];
		*obstacle = first_line[i - 3];
		*full = first_line[i - 2];
	}
	else
		return (0);
	return (1);
}

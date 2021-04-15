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

#include "../includes/bsq.h"

void	read_map_symbols(char *first_line, char *empty, char *obstacle, char *full)
{
	int i;

	i = 0;
	while (first_line[i])
	{
		if (first_line[i] < '0' || first_line[i] > '9')
			break ;
		i++;
	}
	*empty = first_line[i++];
	*obstacle = first_line[i++];
	*full = first_line[i];
}

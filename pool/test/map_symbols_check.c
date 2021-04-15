/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_symbols_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:01:46 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 14:01:48 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	map_symbols_check(char **map, int high, int width, char empty, char obstacle)
{
	int i;
	int j;
	
	i = 0;
	while (i < high)
	{
		j = 0;
		while (j < width)
		{
			if (map[i][j] != empty && map[i][j] != obstacle)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

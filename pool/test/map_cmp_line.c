/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_cmp_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:30:42 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 13:30:44 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	map_cmp_line(char **map, int high, int width)
{
	int i;
	int	j;
	
	i = 0;
	while (map[i] != 0)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			j++;
		}
		if (j != width)
			return (0);
		i++;
	}
	if (i != high)
		return (0);
	return (1);
}

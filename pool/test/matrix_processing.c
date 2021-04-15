/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_processing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:14:09 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/08 20:14:11 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	matrix_processing(int **int_map, char **map, int width, int high, char obstacle)
{
	int	i;
	int	j;
	int tmp;

	i = 1;
	while (i < high)
	{
	j = 1;
		while (j < width)
		{
			if (map[i][j] == obstacle)
				int_map[i][j] = 1;
			tmp = int_map[i][j];
			int_map[i][j] = tmp + int_map[i][j - 1] + int_map[i - 1][j] - int_map[i - 1][j - 1];
			j++;
		}
		i++;
	}
}

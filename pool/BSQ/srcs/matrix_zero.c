/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:29:04 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/08 19:29:09 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	matrix_zero(int	**int_map, int width, int high)
{
	int	i;
	int	j;

	i = 0;
	while (i < high)
	{
		j = 0;
		while (j < width)
			{
				int_map[i][j] = 0;
				j++;
			}
		i++;
	}
}

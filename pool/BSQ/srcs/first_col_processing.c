/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_col_processing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:48:36 by kelisabe          #+#    #+#             */
/*   Updated: 2021/02/08 22:48:39 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_col_processing(int **int_map, char **map, int high)
{
	int i;
	int digit;

	i = 0;
	digit = 0;
	while (i < high)
	{
		if (map[i][0] == 'o')
			digit++;
		int_map[i][0] = digit;
		i++;
	}
}

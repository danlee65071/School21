/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line_processing.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:34:37 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/08 18:34:41 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_line_processing(int **int_map, char **map)
{
	int	digit;
	int	i;

	digit = 0;
	i = 0;
	while (map[0][i])
	{
		if (map[0][i] == 'o')
			digit++;
		int_map[0][i] = digit;
		i++;
	}
}

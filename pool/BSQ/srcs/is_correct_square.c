/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_correct_square.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:58:35 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/09 12:58:37 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_correct_square(int **int_map, int x, int y, int size)
{
	int	check;
	int	a;
	int	b;
	int	c;
	int	d;

	if (size == 0)
		check = int_map[y][x];
	else
	{
		a = 0;
		b = 0;
		c = 0;
		d = int_map[y + size][x + size];
		if (x == 0 && y)
			b = int_map[y - 1][x + size];
		else if (x && y == 0)
			c = int_map[y + size][x - 1];
		else if (x != 0 && y != 0)
		{
			a = int_map[y - 1][x - 1];
			b = int_map[y - 1][x + size];
			c = int_map[y + size][x - 1];
			d = int_map[y + size][x + size];
		}
		check = a + c - b - d;
	}
	if (check)
		return (0);
	return (1);
}

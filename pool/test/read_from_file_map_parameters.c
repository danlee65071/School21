/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_from_file_map_parameters.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:32:13 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/10 10:32:14 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"

int	read_from_file_map_parameters(char *file_name, char *first_line, int *high, int *width,
										char *empty, char *obstacle, char *full)
{
	char	c;
	int		is_first_line;
	int		i;
	int		j;
	int		f;

	is_first_line = 1;
	i = 0;
	j = 0;
	f = open(file_name, O_RDONLY);
	if (f == -1)
		return (0);
	while (read(f, &c, 1))
	{
		if (c != '\n' && is_first_line)
			first_line[j++] = c;
		else if (c == '\n' && is_first_line)
		{
			is_first_line = 0;
			first_line[j] = '\0';
			j = 0;
		}
		else if (c == '\n' && !is_first_line)
		{
			i++;
			if (j > *width)
				*width = j;
			j = 0;
		}
		else if (c != '\n' && !is_first_line)
			j++;
	}
	*high = atoi(first_line);
	if (!read_map_symbols(first_line, empty, obstacle, full))
        return (0);
	close(f);
	return (1);
}

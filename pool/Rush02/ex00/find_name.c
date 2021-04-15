/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_name.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:41:27 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/06 19:41:29 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <fcntl.h>

int	g_f;

t_str	*find_name(int maxlen, char *file_name)
{
	int		rank;
	int		i;
	char	str_num[255];
	char	c;

	i = 0;
	rank = 0;
	g_f = open(file_name, O_RDONLY);
	while (read(g_f, &c, 1))
	{
		if (rank > maxlen)
			break ;
		else if (c >= '0' && c <= '9')
			rank++;
		else if (c == '\n')
		{
			rank = 0;
			str_num[i] = '\0';
			i = 0;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			str_num[i++] = c;
	}
	close(g_f);
	return (str_num);
}

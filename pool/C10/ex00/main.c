/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:52:34 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/01 11:52:36 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		f;
	char	c;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		f = open(argv[1], O_RDONLY);
		if (f == -1)
			write(2, "Cannot read file.\n", 18);
		else
			while (read(f, &c, 1))
				write(1, &c, 1);
		close(f);
	}
	return (0);
}

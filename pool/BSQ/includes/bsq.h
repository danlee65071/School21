/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:41:14 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/08 22:41:16 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct	s_max_square
{
	int	x;
	int	y;
	int	size;
}				t_max_square;

void			matrix_zero(int	**int_map, int width, int high);
int				matrix_width(char **map);
void			matrix_processing(int **int_map, char **map, int width, int high);
void			first_line_processing(int **int_map, char **map);
void			first_col_processing(int **int_map, char **map, int high);
void			print_map(char **map, int high, int width);
int				is_correct_square(int **int_map, int x, int y, int size);
void			iterating_square(int **int_map, int x, int y, int size, t_max_square    *res);
void			find_max_square(int **int_map, int high, int width, t_max_square *res);
void			map_max_square(char **map, int high, int width, t_max_square *max_square);
int				matrix_length(char **map);
int				bsq_atoi(char *s);
int				read_from_file_map_parameters(char *file_name, char *first_line, int *high, int *width,
										char *empty, char *obstacle, char *full);
void			read_map_symbols(char *first_line, char *empty, char *obstacle, char *full);
char			**read_map( char *file_name, int high, int width);

#endif

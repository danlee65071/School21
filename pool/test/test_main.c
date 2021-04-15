#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

int main()
{
	char	*file_name;
	char	*str_files[] = {"map.txt", "map2.txt", NULL};
    char    **map = 0;
	int		high;
	int		width;
	char	first_line[255];
	char	empty;
	char	obstacle;
	char	full;
	int		**int_map = 0;
	t_max_square	res;
	int i;
	
	i = 0;
	while (str_files[i])
	{
		map = 0;
		int_map = 0;
		file_name = str_files[i];
		high = 0;
		width = 0;
		if (read_from_file_map_parameters( file_name, first_line, &high, &width, &empty, &obstacle, &full) == 0)
		{
			printf("map error\n");
			i++;
			continue ;
		}
		else
			printf("high = %d width = %d empty = %c obstacle = %c full = %c\n", high, width, empty, obstacle, full);
		map = read_map(file_name, high, width);
		//print_map(map, high, width);
		int_map = create_int_map(high, width);
		if (!map_validation(map, first_line, high, width, empty, obstacle))
		{
			printf("map error\n");
			i++;
			continue ;
		}
		matrix_zero(int_map, width, high);
		first_line_processing(int_map, map, obstacle);
		first_col_processing(int_map, map, high, obstacle);
		matrix_processing(int_map, map, width, high, obstacle);
		
		find_max_square(int_map, high, width, &res);
		printf("x = %d y = %d size = %d\n", res.x, res.y, res.size);
		map_max_square(map, high, width, &res);
		free_arr(map, int_map, high);
		i++;
	}
	return (0);
}

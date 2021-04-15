#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

int	main()
{
	char	*map[] = { "..o........................",
						"....o......................",
						"............o..............",
						"...........................",
						"o...o......................",
						"...............o...........",
						"...........................",
						"......o..............o.....",
						"..o.......o................", 0};
	int		high;
	int		width;
	int		**int_map;
	int		i;
    int     j;
	t_max_square	*res;
	
	high = matrix_length(map) - 1;
	width = matrix_width(map);
	i = 0;
	int_map = malloc(sizeof(int *) * high);
	while (i < high)
	{
		int_map[i] = malloc(sizeof(int) * width);
		i++;
	}
    res = malloc(sizeof(t_max_square));
	matrix_zero(int_map, width, high);
	first_line_processing(int_map, map);
	first_col_processing(int_map, map, high);
	matrix_processing(int_map, map, width, high);
    
    /*i = 0;
    while (i < high)
    {
        j = 0;
        while (j < width)
        {
            printf("%d ", int_map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }*/
    
	find_max_square(int_map, high, width, res);
    printf("x = %d y = %d size = %d\n", res->x, res->y, res->size);
	map_max_square(map, high, width, res);
	free(int_map);
    free(res);
	return (0);
}
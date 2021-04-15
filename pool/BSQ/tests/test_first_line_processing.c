#include <stdio.h>
#include <stdlib.h>

void	first_line_processing(int **int_map, char **map);
void	matrix_zero(int	**int_map, int width, int high);

int	main()
{
	char	*map[] = {  "..o........................", 
						"....o......................",
						"............o..............",
						"...........................",
						"....o......................",
						"...............o...........",
						"...........................",
						"......o..............o.....",
						"..o.......o................"};
	int		**int_map;
	int		i;

	i = 0;
	int_map = malloc(sizeof(int *) * 100);
	while (i < 100)
	{
		int_map[i] = malloc(sizeof(int) * 100);
		i++;
	}
	matrix_zero(int_map, 100, 100);
	first_line_processing(int_map, map);
	i = 0;
	while (map[0][i])
	{
		printf("%d", int_map[0][i]);
		i++;
	}
	printf("\n");
	free(int_map);
	return (0);
}


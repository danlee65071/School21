#include <stdio.h>
#include "bsq.h"

int main()
{
	char	*file_name = "map.txt";
	int		high;
	int		width;
	char	first_line[255];
	char	empty;
	char	obstacle;
	char	full;

	high = 0;
	width = 0;
	if (read_from_file_map_parameters( file_name, first_line, &high, &width, &empty, &obstacle, &full) == -1)
		printf("Error\n");
	else
		printf("high = %d width = %d empty = %c obstacle = %c full = %c\n", high, width, empty, obstacle, full);
	
	return (0);
}
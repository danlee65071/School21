#include <stdio.h>
#include "get_next_line.h"

int main() {
	char *line;
	int fd;

	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
	}
	close(fd);
	return 0;
}

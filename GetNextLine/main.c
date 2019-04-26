#include "get_next_line.h"

int     main()
{
	int     fd;
	char    *line;

	fd = open("test.txt", O_RDONLY);

	int ret;
	while ((ret = get_next_line(fd, &line)) > 0) 
	{
		printf("%s\n", line);
		printf("%d\n", ret);
		free(line);
	}
}

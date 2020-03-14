#include "get_next_line.h"

int     main(int ac, char **av)
{
	int     fd;
	int ret;
	char    *line;

	fd = open("test.txt", O_RDONLY);
	
	while (1)
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			ft_putstr(line);
			free(line);
		}
	return (0);
}

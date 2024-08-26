#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		i;
	
	i = 0;
	if (!av[1])
		return (0);
	while ((av[1][i]) && (av[1][i] == ' ' || av[1][i] == '\t'))
		i++;
	while ((av[1][i]) && (av[1][i] != ' ' && av[1][i] != '\t'))
	{
		write(1, &av[1][i], 1);
		i++;
	}
	return (0);
}
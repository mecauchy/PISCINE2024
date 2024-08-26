#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	res;

	i = 0;
	if (!av[1])
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			res = av[1][i] - 'a';
			while (res)
			{
				write(1, &av[1][i], 1);
				res--;
			}
		}
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			res = av[1][i] - 'A';
			while (res)
			{
				write(1, &av[1][i], 1);
				res--;
			}
		}
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
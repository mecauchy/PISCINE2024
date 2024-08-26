#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*void	reverse(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
		j++;
	while (str[j] != str[-1])
	{
		write(1, &str[j], 1);
		j--;
	}
}

int	main(int ac, char **av)
{
	reverse(av[1]);
	return (0);
}*/


int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[1][i])
	{
		//write(1, &av[1][i], 1);
		i++;
	}
	i--;
	printf("chaine :: %s\n", av[1]);
	while (i != -1)
	{
		write(1, &av[1][i], 1);
		// printf("itt : %d\n", i);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}

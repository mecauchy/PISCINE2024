#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	search_and_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			write(1, &b, 1);
		else if (str[i] != a)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
		search_and_replace(av[1], *av[2], *av[3]);
	write(1, "\n", 1);
	return (0);
}
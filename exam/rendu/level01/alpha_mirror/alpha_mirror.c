#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	alpha_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	return (c);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1][0]);
		printf("%c, \n", alpha_mirror(av[1][0]));
	write(1, "\n", 1);
	return (0);
}
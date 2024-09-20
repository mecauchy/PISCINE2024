#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	pgcd(int a, int b)
{
	int	div;
	int	res;
	int	temp_a;
	int	temp_b;
	div = 0;
	while (div <= a && div <= b && a >= 0 && b >= 0)
	{
		temp_a = a / div;
		temp_a = a % div;
		temp_b = b / div;
		temp_b = b % div;
		if (temp_a == 0 && temp_b == 0)
			res = div;
		div++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int	res;

	if (ac == 3)
	{
		res = pgcd(atoi(av[1]), atoi(av[2]));
		printf("main = %d\n", res);
	}
	if (ac != 3)
		write(1, "\n", 1);
	return (0);
}
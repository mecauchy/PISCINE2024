#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (1);
	if (nb == 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			//printf("nb isn't prime : %d\n", nb);
			return (1);
		}
		i++;
	}
	//printf("nb is prime : %d\n", nb);
	return (0);
}

int	add_prime_sum(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i <= nb)
	{
		if (!(ft_is_prime(i)))
		{
			res += i;
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	int	nb;
	int	i;

	nb = 5;
	i = add_prime_sum(nb);
	printf("add prime = %d\n", i);
	return (0);
}
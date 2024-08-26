#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	if (!str)
		return (0);
	while (str[i] && str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		printf("res :: %d\n", res);
		i++;
	}
	printf("result :: %d\n", res);
	return (sign * res);
}

int	main(int ac, char **av)
{
	int	res;

	res = ft_atoi(av[1]);
	printf("%d\n", res);
	return (0);
}
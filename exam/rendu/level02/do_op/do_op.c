#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		i++;
	}
	return (sign * res);
}

int	main(int ac, char **av)
{
	int		s1;
	char	mult;
	int		s2;
	int		res;
	int		i;

	if (ac == 4 && av[1] && av[2] && av[3] && (!av[2][1]))
	{
		s1 = ft_atoi(av[1]);
		mult = av[2][0];
		s2 = ft_atoi(av[3]);
		if (mult == '+')
			res = s1 + s2;
		if (mult == '-')
			res = s1 - s2;
		if (mult == '*')
			res = s1 * s2;
		if (mult == '/')
			res = s1 / s2;
		if (mult == '%')
			res = s1 % s2;
		printf("%d\n", res);
	}
	return (0);
}
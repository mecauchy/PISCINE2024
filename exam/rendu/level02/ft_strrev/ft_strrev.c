#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		res[i] = str[i];
		write(1, &res[i], 1);
		i--;
	}
	return (res);
}

int	main(int ac, char **av)
{
	char	*res;

	if (ac == 2)
		res = ft_strrev(av[1]);
	write(1, "\n", 1);
	return (0);
}
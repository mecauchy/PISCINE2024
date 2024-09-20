#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*expand_str(char *str)
{
	int		i;
	int		j;
	int		a;
	char	*res;

	i = 0;
	j = 0;
	a = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			res[j] = str[i];
			j++;
		}
		a = 0;
		while (str[i + 1] == ' ' || str[i + 1] == '\t')
		{
			while (a <= 2)
			{
				res[j] = ' ';
				j++;
				a++;
			}
			i++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}

int	main(int ac, char **av)
{
	char	*res;

	if (ac == 2)
	{
		res = expand_str(av[1]);
		printf("main :: %s\n", res);
	}
	else
		write(1, "\n", 1);
}
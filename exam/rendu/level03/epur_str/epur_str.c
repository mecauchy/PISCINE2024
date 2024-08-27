#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*epur_str(char *str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while ((str[i]) && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			res[j] = str[i];
			j++;
		}
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t'))
		{
			if (str[i + 1] != ' ')
			{
				res[j] = ' ';
				j++;
				break ;
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
	char	*str = NULL;

	if (ac == 2)
	{
		str = epur_str(av[1]);
		printf("main : %s\n", str);
	}
	else
		write(1, "\n", 1);
	return (0);
}
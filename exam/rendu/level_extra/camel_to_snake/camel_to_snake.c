#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	real_len(char *str)
{
	int	i;
	int	new_len;

	i = 0;
	new_len = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			new_len++;
		i++;
		new_len++;
	}
	return (new_len);
}

char	*camel_to_snake(char *str)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * real_len(str) + 1);
	if (!res)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			res[j] = '_';
			j++;
			res[j] = str[i] + 32;
		}
		else
		{
			res[j] = str[i];
		}
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

int	main(int ac, char **av)
{
	int	new;
	char	*mot;
	char	*res;

	mot = av[1];
	if (ac == 2)
	{
		res = camel_to_snake(mot);
		printf("new = %s\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	wd_len(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i] && str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			while (str[i] && str[i] == ' ')
				i++;
			count++;
		}
		else
		{
			count++;
			i++;
		}
	}
	return (count);
}

int	index_start(char *str)
{
	int	i = 0;

	while (str[i] && str[i] == ' ')
		i++;
	while (str[i] && str[i] != ' ')
		i++;
	while (str[i] && str[i] == ' ')
		i++;
	return (i);
}

char	*rostring(char *str)
{
	int	i = 0;
	int	j = 0;
	int	start;
	int	new=0;
	char	*res;

	res = (char *)malloc(sizeof(char) * (wd_len(str) + 1));
	if (!res)
		return (NULL);
	start = index_start(str);
	j = start;
	while (str[start])
	{
		if (str[start] == ' ')
		{
			res[new] = ' ';
			while (str[start] && str[start] == ' ')
				start++;
			new++;
		}
		else
		{
			res[new] = str[start];
			new++;
			start++;
		}
	}
	if (str[start - 1] != ' ' && str[j] != '\0')
	{
		res[new] = ' ';
		new++;
	}
	while (i < j)
	{
		while (i < j && str[i] && str[i] == ' ')
			i++;
		while (i < j && str[i] && str[i] != ' ')
		{
			res[new] = str[i];
			i++;
			new++;
		}
	}
	res[new] = '\0';
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", rostring(av[1]));
}
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lowercase(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			//write(1, &str[i], 1);
		}
		//else
		//	write(1, &str[i], 1);
		i++;
	}
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
			return (1);
	return (0);
}

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	ft_lowercase(str);
	while (str[i])
	{
		if (is_alpha(str[0]))
		{
			str[0] -= 32;
			write(1, &str[i], 1);
			i += 1;
		}
		if (str[i] != ' ' && str[i - 1] == ' ' && is_alpha(str[i]))
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac > i)
	{
		str_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
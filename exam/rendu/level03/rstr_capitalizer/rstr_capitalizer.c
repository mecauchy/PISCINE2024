#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
			return (1);
	return (0);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_lowercase(str);
		if (str[i] != ' ' && str[i + 1] == ' ' && is_alpha(str[i]))
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else if (str[i + 1] == '\0' && str[i] != ' ' && is_alpha(str[i]))
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
		rstr_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	if (ac == 1)
		write(1, "\n", 1);
	return (0);
}
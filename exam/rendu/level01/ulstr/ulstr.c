#include <unistd.h>
#include <stdio.h>

void	ulstr(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		write(1, "\n", 1);
		return ;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	ulstr(av[1]);
	return (0);
}
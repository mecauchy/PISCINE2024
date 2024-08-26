#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'z')
				write(1, "a", 1);
			if (str[i] == 'Z')
				write(1, "A", 1);
			else if (str[i] >= 'a' && str[i] < 'z' || str[i] >= 'A' && str[i] < 'Z')
			{
				str[i] += 1;
				write(1, &str[i], 1);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	rotone(av[1]);
	return (0);
}
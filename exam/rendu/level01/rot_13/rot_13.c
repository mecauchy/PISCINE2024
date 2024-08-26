#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	rot_13(char *str)
{
	int		i;

	i = 0;
	if (!str)
	{
		write(1, "\n", 1);
		return ;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
			{
				str[i] += 13;
				write(1, &str[i], 1);
			}
			else if (str[i] >= 'n' && str[i] <= 'z' || str[i] >= 'N' && str[i] <= 'Z')
			{
				str[i] -= 13;
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
	rot_13(av[1]);
	return (0);
}
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	rev_wstr(char *str)
{
	int		i;
	int		start;
	int		end;

	i = 0;
	end = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] && str[i + 1] == ' ')
			return ;
		i++;
	}
	i--;
	if (str[0] == ' ' || str[i] == ' ')
		return ;
	end = i;
	while (i >= 0)
	{
		if (str[i] != ' ')
		{
			i--;
		}
		if (str[i] == ' ' || i == 0)
		{
			start = i;
			if (i != 0)
				i++;
			while (i <= end)
			{
				write(1, &str[i], 1);
				i++;
			}
			if (start != 0)
			{
				write(1, " ", 1);
			}
			i = start;
			if (str[i] == ' ' && str[i - 1])
				i--;
			end = i;
			if (i == 0 && str[i + 1] == ' ')
				write(1, &str[i], 1);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	return (0);
}
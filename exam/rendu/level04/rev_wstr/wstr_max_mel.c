#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	rev_wstr(char *str)
{
	int		i;
	int		start;
	int		end;
	int		index;

	i = 0;
	start = 0;
	end = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] && str[i + 1] == ' ')
			return ;
		i++;
	}
	if (str[0] == ' ' || str[i - 1] == ' ')
		return ;
	i--;
	end = i;
	while (i >= 0)
	{
		if (str[i] != ' ' && i != 0)
			i--;
		if (str[i] == ' ' || i == 0)
		{
			start = i;
			while (i <= end)
			{
				if (str[i] != ' ')
					printf("%c", str[i]);
				i++;
			}
			if (start != 0)
				printf(" ");
			i = start - 1;
			end = start;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	return (0);
}
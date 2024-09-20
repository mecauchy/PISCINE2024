#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ecart(int start, int end)
{
	int	i;

	i = 0;
	while (end >= start + i)
	{
		// printf("i = %d\n", i);
		i++;
	}
	return (i);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	*new;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	tab = malloc(sizeof(int) * (ecart(start, end)));
	if (!tab)
		return (0);
	while (end >= start)
	{
		tab[i] = start;
		//printf("st : %d\n", start);
		//printf("ir = %d\n", tab[i]);
		i++;
		start++;
	}
	return (tab);
}

int	main(void)
{
	int	*tab;
	int	start;
	int	end;
	int	i;

	start = -5;
	end = 10;
	i = 0;
	tab = ft_range(start, end);
	while (i < ecart(start, end))
	{
		// printf("start = %d\n", start);
		printf("res %d\n", tab[i]);
		i++;
	}
	return (0);
}
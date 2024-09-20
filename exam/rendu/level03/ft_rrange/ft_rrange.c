#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	value;

	value = end;
	tab = malloc(sizeof(int) * (end - start) + 1);
	if (!tab)
		return (0);
	i = 0;
	while (i < end)
	{
		tab[i] = value;
		//printf("end = %d\n", end);
		value--;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	start;
	int	end;
	int	*tab;
	int	i;

	start = -4;
	end = 3;
	i = 0;
	//tab = ft_rrange(start, end);
	while (i < end)
	{
		tab = ft_rrange(start, end);
		printf("%d\n", tab[i]);
		//printf("i = %d\n", i);
		i++;
	}
	return (0);
}
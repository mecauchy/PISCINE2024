#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

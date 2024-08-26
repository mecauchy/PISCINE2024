#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = NULL;
	if (!range)
		return (-1);
	tmp = *range;
	tmp = (int *)malloc(sizeof(int) * (max - min));
	if (!tmp)
		return (-1);
	if (min >= max)
	{
		tmp = NULL;
		return (0);
	}
	while (i < max - min)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (i);
}
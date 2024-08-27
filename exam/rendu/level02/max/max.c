#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
	int		i;
	int		lmax;

	i = 0;
	lmax = tab[0];
	if (!len)
		return (0);
	while (i <= len)
	{
		if (lmax < tab[i])
			lmax = tab[i];
		i++;
	}
	return (lmax);
}

int	main(void)
{
	int				tab[] = {2000, 2, 11, 4, 9};
	unsigned int	len = 5;
	int				maxime;

	maxime = max(tab, len);
	printf("maxime est à : %d ", maxime);
	return (0);
}
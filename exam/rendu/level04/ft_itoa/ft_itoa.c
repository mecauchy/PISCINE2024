#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	size(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		count;

	count = size(nbr);
	res = malloc(sizeof(char) * count + 1);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		res[0] = '0';
	res[count] = '\0';
	while (nbr > 0)
	{
		count--;
		res[count] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (res);
}

int	main(void)
{
	char	*res;
	int		nbr;

	nbr = -1200003;
	res = ft_itoa(nbr);
	printf("%s\n", res);
	return (0);
}
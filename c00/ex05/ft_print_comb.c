#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				if (i != '0' || j != '1' || k != '2')
					write(1, ", ", 2);
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

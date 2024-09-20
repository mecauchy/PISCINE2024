#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}
void	tab_mult(int nb)
{
	int	i;
	int	res;

	i = 1;
	while (i <= 9 && nb >= 0)
	{
		res = i * nb;
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(nb);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(res);
		ft_putchar('\n');
		i++;
	}
	//printf("result :: %d\n", res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		tab_mult(atoi(av[1]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
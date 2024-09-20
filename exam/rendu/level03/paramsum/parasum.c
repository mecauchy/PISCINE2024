#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
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
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		i++;
	}
	if (ac == 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	if (ac > 1 && ac <= 9)
	{
		ft_putchar(i + '0');
		ft_putchar('\n');
	}
	if (ac >= 10)
	{
		ft_putnbr(i);
		ft_putchar('\n');
	}
	return (0);
}
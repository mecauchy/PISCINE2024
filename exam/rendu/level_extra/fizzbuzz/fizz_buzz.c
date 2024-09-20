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
	int	res;

	if (nb < 0)
		nb = -nb;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	fizz_buzz(void)
{
	int	min;
	int	max;

	min = 1;
	max = 100;
	while (min <= max)
	{
		if (min % 3 == 0 && min %  5 == 0)
			write(1, "fizzbuzz\n", 10);
		else if (min % 3 == 0)
			write(1, "fizz\n", 6);
		else if (min % 5 == 0)
			write(1, "buzz\n", 6);
		else
		{
			ft_putnbr(min);
			ft_putchar('\n');
		}
		min++;
	}
}

int	main(void)
{
	//int	nb;

	//nb = 26;
	//ft_putnbr(nb);
	fizz_buzz();
	return (0);
}
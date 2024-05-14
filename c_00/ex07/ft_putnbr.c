#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putnbr(int nb)
{
    while (nb == '-' || nb == '+')
    {
        if (nb == '-')
            nb = -nb;
        nb++;
    }
    while (nb >= 10)
    {
        nb = ft_putnbr(nb/ 10);
        nb = ft_putnbr(nb % 10);
        write(1, &nb, 1);
        nb++;
    }
    while (nb < 10)
    {
        write(1, &nb, 1);
    }
}
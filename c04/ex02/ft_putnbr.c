#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putnbr(int nb)
{
    char    nbr;
    
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        nbr = nb + 48;
        write(1, &nbr, 1);
    }
    return;
}
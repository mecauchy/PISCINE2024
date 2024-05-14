#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putnbr(int nb)
{
    char    nbr;
    
    //printf("%d\n", nb);
    if (nb < 0)
        nbr = -nb;
       // write(1, "-", 1);
        //printf("%d\n", nb);
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
        //printf("%d\n", nb);
    }
    else
    {
        nbr = 48 + nb ;
        write(1, &nbr, 1);
        //printf("%d\n", nb);
        return ;
    }
    return;
}

int main(void)
{
    ft_putnbr(-10984567);
}
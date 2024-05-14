#include <unistd.h>
#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
    // printf("%d\n", *nbr); TEST RESULTAT //
}

int main(void)
{
    int nbr;

    ft_ft(&nbr);
}
#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    // printf("%d %d\n", a, b); TEST
    *div = a / b;
    *mod = a % b;
    // printf("%d %d\n", *div, *mod); TEST VALEUR 
}

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 4;
    b = 2;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
}
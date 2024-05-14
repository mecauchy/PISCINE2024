#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int c;
    int d;

    c = *a;
    d = *b;
    // printf("%d %d\n", c, d);
    *a = c / d;
    *b = c % d;
    // printf("%d %d\n", *a, *b);
}

int main(void)
{
    int a;
    int b;

    a = 4;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
}
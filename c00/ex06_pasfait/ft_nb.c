#include <unistd.h>
#include <stdio.h>

void    ft_nb(int a, int b)
{
    char    *nb;

    while (a < 10 || b < 10)
    {
        nb += a + b + '0';
        write(1, nb, 1);
        a++;
        b++;
    }
}

int main(void)
{
    int a;
    int b;

    a = 8;
    b = 9;
    ft_nb(a, b);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('9');
    return 0;
}
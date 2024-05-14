#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int     sign;
    int     i;
    int     res;

    sign = -1;
    i = 0;
    if ((str[i] != '\0') && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -sign;
        i++;
    }
    if (str[i] >= 10)
    {
        res = str[i] / 10;
        res = str[i] % 10;
        i++;
    }
    else
        printf("%c\n", str[i]);
        res = str[i] - 48 ;
        printf("%c\n", str[i]);
    return (sign * res);
}

int main(void)
{
    printf("%d\n", ft_atoi("5"));
}
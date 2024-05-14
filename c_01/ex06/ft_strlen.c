#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    //printf("%d\n", i);
    return (i);
}

int main(void)
{
    char    *str;

    str = "abvc";
    ft_strlen(str);
}
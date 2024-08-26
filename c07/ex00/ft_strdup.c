#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
   // printf("%d\n", i);
    return (i);
}

char    *ft_strdup(char *str)
{
    int i;
    char *dup;
    i = 0;
    while(str[i])
    {
        dup = malloc(sizeof(char *) * (ft_strlen(str) + 1));
            if (!dup)
                return (NULL);
        dup[i] = str[i];
        write(1, &dup[i], 1);
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main(void)
{
    char *str;

    str = "tristan";
    ft_strlen(str);
}

/*int main(int ac, char **av)
{
    char *str;
    str = ft_strdup(av[1]);
    return (0);
}
*/
#include <stdio.h>
#include <stdlib.h>

static int ft_is_sep(char *str, int index, char charset)
{
    if (str[index] == charset)
        return (1);
    return (0);
}

static int ft_ltrcnt(char *str, int start, char charset)
{
    int i = 0;

    while (str[start + i] && !(ft_is_sep(str, start + i, charset)))
        i++;
    return (i);
}

static int ft_wrdcnt(char *str, char charset)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        while (str[i] && ft_is_sep(str, i, charset))
            i++;
        if (str[i])
        {
            j++; // Incrémente le compteur de mots
            i += ft_ltrcnt(str, i, charset); // Avance jusqu'à la fin du mot
        }
    }
    return (j);
}

static char *ft_wdcpy(char *str, int start, int size)
{
    char *dest;

    dest = malloc(sizeof(char) * (size + 1));
    if (dest == NULL)
        return (NULL);
    dest[size] = '\0';
    while (size--)
        dest[size] = str[start + size]; // Copier à partir de l'index `start`
    return (dest);
}

char **ft_split(char const *s, char c)
{
    char    **str;
    int     size;
    int     i = 0;
    int     j;
    int     start = 0;

    size = ft_wrdcnt((char *)s, c);
    str = malloc(sizeof(char *) * (size + 1));
    if (str == NULL)
        return (NULL);
    while (i < size)
    {
        while (s[start] && ft_is_sep((char *)s, start, c))
            start++; // Saute les séparateurs
        j = ft_ltrcnt((char *)s, start, c); // Longueur du mot
        str[i] = ft_wdcpy((char *)s, start, j); // Copie du mot
        if (str[i] == NULL)
            return (NULL);
        start += j; // Passe au mot suivant
        i++;
    }
    str[size] = 0; // Dernier élément NULL pour marquer la fin du tableau
    return (str);
}

int main(void)
{
    char **result;
    char *test_string = "Bonjour, je m'appelle ChatGPT";
    char delimiter = ' ';
    int i;

    // Appel de la fonction ft_split
    result = ft_split(test_string, delimiter);

    // Affichage des résultats
    if (result != NULL)
    {
        i = 0;
        while (result[i] != NULL)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]); // Libération de la mémoire allouée pour chaque mot
            i++;
        }
        free(result); // Libération du tableau de pointeurs
    }

    return (0);
}

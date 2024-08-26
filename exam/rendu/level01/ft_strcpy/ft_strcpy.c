#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
    const char *src = "Bonjour, monde!";
    char *dest;

    // Allouer suffisamment de mémoire pour contenir la chaîne source
    dest = (char *)malloc((strlen(src) + 1) * sizeof(char));
    if (dest == NULL)
    {
        printf("Échec de l'allocation mémoire\n");
        return (1);
    }

    // Copier la chaîne source dans la destination

    // Afficher la chaîne copiée
    printf("Chaîne source : %s\n", src);
    printf("Chaîne destination : %s\n", ft_strcpy(dest, src));

    // Libérer la mémoire allouée
    free(dest);

    return (0);
}
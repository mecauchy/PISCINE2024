#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("chaine s2 : %s\n", s2);
	printf("s1 + 1 : %c\n", s2[j]);
	while (s1[i])
	{
		if (s2[j] && s2[j] == s1[i])
		{
			//printf("s1 :: %c\n", s1[i]);
			printf("s2 :: %c\n", s2[j]);
			write(1, &s1[i], 1);
			i++;
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	wdmatch(av[1], av[2]);
	return (0);
}
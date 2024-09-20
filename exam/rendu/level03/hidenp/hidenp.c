#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	char	*res;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			res[i] = s1[i];
			i++;
		}
		j++;
	}
	res[i] = '\0';
	if (ft_strlen(s1) == ft_strlen(res))
		write(1, "1\n", 1);
	else
		write(1, "0\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
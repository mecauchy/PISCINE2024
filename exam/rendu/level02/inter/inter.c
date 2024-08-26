#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	doublon(char *str, char c, int index)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (i <= index)
	{
		if (str[i] == c)
			count++;
		if (count == 2)
			return (1);
		i++;
	}
	return (0);
}

char	*checkin(char *s1)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * strlen(s1) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		if (!(doublon(s1, s1[i], i)))
		{
			new[j] = s1[i];
			j++;
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}


void	inter(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = checkin(s1);
	while (new[i])
	{
		j = 0;
		while (s2[j])
		{
			if (new[i] == s2[j])
			{
				write(1, &new[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
    	inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
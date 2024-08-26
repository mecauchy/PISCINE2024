#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	check_doublon(char *s1, char c, int index)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i <= index)
	{
		if (s1[i] == c)
			count++;
		if (count == 2)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_check(char *s1)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * strlen(s1));
	if (!new)
		return (NULL);
	while (s1[i])
	{
		if (!(check_doublon(s1, s1[i], i)))
		{
			new[j] = s1[i];
			j++;
		}
		i++;
	}
	return (new);
}

char	*ft_join(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*join;
	char	*str1;
	char	*str2;

	i = 0;
	j = 0;
	k = 0;
	join = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
	if (!join)
		return (NULL);
	str1 = ft_check(s1);
	str2 = ft_check(s2);
	while (str1[i])
	{
		join[j] = str1[i];
		//printf("i1 :: %d\n", i);
		i++;
		j++;
	}
	//printf("join1 :: %s\n", join);
	while (str2[k])
	{
		join[j] = str2[k];
		//printf("i2 :: %d\n", i);
		k++;
		j++;
	}
	//printf("join2 :: %s\n", join);
	return (join);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	char	*new_str;
	char	*res;

	i = 0;
	new_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (!new_str)
		return ;
	new_str = ft_join(s1, s2);
	res = ft_check(new_str);
	//printf("newstr = %s\n", new_str);
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	//printf("%s\n", new);
	return (0);
}
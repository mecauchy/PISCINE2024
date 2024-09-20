#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	len_first_word(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i] && str[i] != ' ')
	{
		i++;
		j++;
	}
	return (j);
}

char	*first_word(char *str)
{
	int	i;
	int	j;
	int	size;
	char	*res;

	i = 0;
	j = 0;
	size = len_first_word(str);
	res = malloc(sizeof(char) * size + 1);
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' && str[i + 1] && str[i + 1] == ' ')
			{
				i++;
			}
			break ;
		}
		else
		{
			res[j] = str[i];
	
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}

int	len_tr(char *str)
{
	int	i;
	int	j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * 50);
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
	{
		i++;
		j++;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' && str[i + 1] == ' ')
			{
				i++;
				j++;
			}
			break ;
		}
		else
		{
			res[j] = str[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	j++;
	return (j);
}

char	*rostring(char *str)
{
	int	i;
	int	j;
	int	sup;
	int	k;
	char	*res;
	char	*end;

	i = 0;
	j = 0;
	k = 0;
	sup = len_tr(str);
	res = malloc(sizeof(char) * 50);
	if (!res)
		return (NULL);
	while (i < sup)
	{

		i++;
	}
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] && str[i + 1] == ' ')
		{

	
	
			i++;
		}
		if (str[i] == ' ' && str[i + 1] && str[i + 1] != ' ')
		{
			res[j] = ' ';
			i++;
	
	
			j++;
		}
		if (str[i] != ' ')
		{
			res[j] = str[i];
		//	j++;
		//	i++;
		}
		//else
			//i++;
		i++;
		j++;
	}
	end = first_word(str);
	//while (end[k] && end[k] == ' ')
	//{
	//	i++;
	//}
	//j++;
	if (end[k])
	{
		res[j] = ' ';
		j++;
	}
	while (end[k])
	{
		res[j] = end[k];
		j++;
		k++;
	}
	res[j] = '\0';
	return (res);
}


int	main(int ac, char **av)
{
	char	*str;
	if (ac == 2)
	{
		str = rostring(av[1]);
		printf("%s\n", str);
		return (0);
	}
}
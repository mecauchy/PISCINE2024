#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int strslen(int size, char **strs, char *sep)
{
	int len;
	int i;

	i = 0;
	len = 0;
	if (!strs)
        return (0);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (sep)
			len += ft_strlen(sep);
		i++;
	}
	return (len - ft_strlen(sep));
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
	int     i;
	int     j;
	int		k;
	char    *str;

	i = 0;
	j = 0;
	k = 0;
	str = malloc(sizeof(char) * strslen(size, strs, sep) + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		while (strs && strs[i][j])
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		if (i != size - 1)
		{	
			while (sep && sep[j])
			{
				str[k] = sep[j];
				k++;
				j++;
			}
		}
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}
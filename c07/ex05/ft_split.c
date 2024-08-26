#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_is_charset(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == charset[0])
		{
			while (charset[j] && charset[j] == str[i + j])
			{
				j++;
			}

		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
}
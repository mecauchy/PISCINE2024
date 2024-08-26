#include <unistd.h>
#include <stdio.h>

void	aff_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			write(1, &str[i], 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str;

	str = "098a762";
	aff_a(str);
	return (0);
}
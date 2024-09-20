#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_in_base(char c, int str_base)
{
	int	res;

	if (c == '0')
	{
		res = c - '0';
		if (res < str_base)
		{
			//printf("zero === %d\n", res);
			return (0);
		}
	}
	if (c >= '1' && c <= '9')
	{
		res = c - '0';
		if (res < str_base)
		{
			//printf("aa %d\n", res);
			return (res);
		}
	}
	if (c >= 'a' && c <= 'f')
	{
		res = c - 'a' + 10;
		if (res < str_base)
		{
			//printf("bb %d\n", res);
			return (res);
		}
	}
	if (c >= 'A' && c <= 'F')
	{
		res = c - 'A' + 10;
		if (res < str_base)
		{
			//printf("cc %d\n", res);
			return (res);
		}
	}
	return (-1);
}

int	ft_check_base(int str_base)
{
	if (str_base > 1 && str_base <= 16)
	{
		//printf("%d\n", str_base);
		return (1);
		//write(1, "non\n", 5);
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;
	int	temp;

	i = 0;
	sign = 1;
	res = 0;
	if (!str_base || !str)
	{
		write(1, "non\n", 5);
		return (0);
	}
	while ((str[i]) && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i]) && (is_in_base(str[i], str_base) != -1) && ft_check_base(str_base))
	{
		temp = is_in_base(str[i], str_base);
		//printf("TEMP === %d\n", temp);
		//printf("GG %d\n", res);
		res = res * str_base + is_in_base(str[i], str_base);
		//printf("batard %d\n", res);
		//printf("char = %c\n", str[i]);
		i++;
	}
	return (sign * res);
}

/*int	main(void)
{
	int	res;
	char	c;
	int		nbr;


	c = '9';
	nbr = 16;
	res = is_in_base(c, nbr);
	printf("TRES = res = %d\n", res);
}*/

int	main(void)
{
	printf("A  %d\n", ft_atoi_base("1011", 2)); // 11
	//printf("int : %d\n", ft_check_base(7));
	printf("B  %d\n", ft_atoi_base("175", 8)); // 125
	printf("C  %d\n", ft_atoi_base("42", 10)); // 42
	printf("C  %d\n", ft_atoi_base("1F4", 16)); // 500
	printf("C  %d\n", ft_atoi_base("aB3", 16)); // 2739
	printf("C  %d\n", ft_atoi_base("243", 5)); // 73
	printf("C  %d\n", ft_atoi_base("-123", 10)); // -123
	printf("C  %d\n", ft_atoi_base("-1C8", 16)); // -456
	printf("resultat  %d\n", ft_atoi_base("10", 16)); // 10
}

/*int	main(int ac, char **av)
{
	int			res;
	const char	*str;
	int			base;

	str = "1a7";
	base = 16;
	res = ft_atoi_base(str, base);
	printf("result %d\n", res);
	return (0);
}*/
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("a : %d b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("a : %d b : %d\n", a, b);
	return (0);
}
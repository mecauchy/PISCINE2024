#include <unistd.h>
#include <stdio.h>

void	ft_countdown(void)
{
	write(1, "9876543210\n", 11);
}

int	main(void)
{
	ft_countdown();
	return (0);
}
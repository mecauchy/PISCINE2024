#include <unistd.h>
#include <stdio.h>

void	hello(void)
{
	write(1, "Hello, World!\n", 13);
	return ;
}

int	main(int ac, char **av)
{
	hello();
	return (0);
}
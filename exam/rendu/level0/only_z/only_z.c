#include <unistd.h>

void	only_z(void)
{
	write(1, "z", 1);
}

int	main(void)
{
	only_z();
}
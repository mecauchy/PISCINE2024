int	main(void)
{
	int *tab;
	int min;
	int max;
	int	res;

	min = -5;
	max = 10;
	tab = NULL;
	res = ft_ultimate_range(&tab, min, max);
	printf("res = %d\n", res);
	for (int i = 0; i < max - min; i++)
		printf("%d: %d\n", i, tab[i]);
	return (0);
}
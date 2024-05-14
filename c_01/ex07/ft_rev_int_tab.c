#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size / 2)
    {
        ft_swap(&tab[i], &tab[size - i - 1]);
        i++;
    }
}

void    ft_print_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}

int main(void)
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size;
    int i;

    size = 10;
    printf("Before : \n");
    ft_print_tab(tab, size);
    printf(" \n");
    ft_rev_int_tab(tab, size);
    printf("After : \n");
    ft_print_tab(tab, size);
    return (0);
}
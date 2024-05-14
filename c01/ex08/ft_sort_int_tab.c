#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
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

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (j < size - 1)
    {
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
                ft_swap(&tab[i], &tab[i + 1]);
            i++;
        }
        i = 0;
        j++;
    }
}

int main(void)
{
    int tab[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size;
    int i;

    size = 10;
    printf("Before : \n");
    ft_print_tab(tab, size);
    printf(" \n");
    ft_sort_int_tab(tab, size);
    printf("After : \n");
    ft_print_tab(tab, size);
    return (0);
}
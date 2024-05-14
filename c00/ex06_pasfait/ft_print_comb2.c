#include <unistd.h>
#include <stdio.h>

void    ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    b = '0';
    c = '0';
    d = '0';
    while (a <= '9' && b <= '8')
    {
        while (c <= '9' && d <= '9')
        {
            if (a != c || b  != d)
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, " ", 1);
                write(1, &c, 1);
                write(1, &d, 1);
                if (a != '9' || b != '8' || c != '9' || d != '9')
                    write(1, ", " , 2);
            }
            /*if (d < '9')
                d++;
            else
            {
                d = '0';
                c++ ;
            }*/
        }
        c  = '0';
        if (b < '9')
        {
            d = b + 1;
            b++;
        }
        else
        {
            d = '0';
            c = a + 1;
            b  = '0';
            a++;
        }        
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
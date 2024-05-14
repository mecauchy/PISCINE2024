#include <unistd.h>

void    ft_print_comb(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    b = '0';
    c = '0';
    d = '0';
    while (a <= '9')
    {   
        //b = '0';
        while (b <= '9')
        {
            //c = '0';
            while (c <= '9')
            {
                //d = '0';
                while (d <= '9')
                {
                    //if (b < d && a <= c)
                        write(1, &a, 1);
                        write(1, &b, 1);
                        write(1, " ", 1);
                        write(1, &c, 1);
                        write(1, &d, 1);
                        //if (a != '9' || b != '8' || c != '9' || d != '9')
                        write(1, ", ", 2);
                        d++;
                }
                c++;
                d = c + 1;
            }
            b++;
            c = b;
        }
        a++;
        b = a;
    }
    //write(1, "\n", 1);
}

int main(void)
{
    ft_print_comb();
    return 0;
}
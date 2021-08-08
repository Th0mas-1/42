#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_boucle(char x, char y, char z)
{
    while (x <= '7')
    {
        y = x + 1;
        while (y <= '8')
        {
            z = y + 1;
            while (z <= '9')
            {
                ft_putchar(x);
                ft_putchar(y);
                ft_putchar(z);
                if (x != '7')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                z++;
            }
            y++;
        }
        x++;
    }
}

void    ft_init(void)
{
    char     a;
    char     b;
    char     c;

    a = '0';
    ft_boucle(a, b, c);
}

int     main(void)
{
    ft_init();
    return (0);
}


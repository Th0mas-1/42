#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_mod(char *d)
{
    *d = (*d + 2);
}

int main(void)
{
    char    a = '5';
    char    *ptr_a;

    ptr_a = &a;
    ft_putchar(a);
    ft_mod(ptr_a);
    ft_putchar(a);

    return (0);
}



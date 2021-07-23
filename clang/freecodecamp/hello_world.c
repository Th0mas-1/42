#include <unistd.h>

void    ft_write()
{
    write (1, "hello world\n", 12);
}

int main()
{
    ft_write();
    return (0);
}

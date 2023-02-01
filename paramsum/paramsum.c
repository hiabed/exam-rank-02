#include<stdio.h>
#include<unistd.h>

void ft_putnbr(int n)
{
    if(n >= 10)
    {
        ft_putnbr(n / 10);
        n = n % 10;
        n = n + 48;
        write(1, &n, 1);
    }

    else if(n <= 9)
    {
        n = n + 48;
        write(1, &n, 1);
    }
}

int main(int ac, char const *av[])
{
    if(ac == 1)
    {
        write(1, "0\n", 2);
        return 0;
    }
    int i = 0;
    while(av[i])
        i++;
    ft_putnbr(i - 1);
    write(1, "\n", 1);
}

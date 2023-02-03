#include<unistd.h>
#include<string.h>

void ft_putnbr(int n)
{
    int tmp = n % 10;
    if (n >= 10)
    {
        n = (n / 10) + 48;
        write(1, &n, 1);
    }
    tmp += 48;
    write(1, &tmp, 1);
}

int main()
{
    int j;
    j = 1;

    while (j < 100)
    {
        if (j % 3 == 0 && j % 5 == 0)
        {
            write(1, "fizzbuzz\n", 9);
            j++;
        }
        if (j % 3 == 0)
        {
            write(1, "fizz\n", 5);
            j++;
        }
        if (j % 5 == 0)
        {
            write(1, "buzz\n", 5);
            j++;
        }
        else
        {
            ft_putnbr(j);
            write(1, "\n", 1);
            j++;
        }
    }
    return 0;
}

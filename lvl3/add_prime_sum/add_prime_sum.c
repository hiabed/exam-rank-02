#include<unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

void    ft_putnbr(int n)
{
    if(n > 9)
    {
        ft_putnbr(n / 10);
        n = n % 10 + 48;
        write(1, &n, 1);
    }
    else if(n < 0)
    {
        write(1, "-", 1);
        n = -n;
        ft_putnbr(n);
    }
    else
    {
        n = n % 10 + 48;
        write(1, &n, 1);
    }
}

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    if(s[i] == '-')
        sign = -1;
    if(s[i] == '+' || s[i] == '-')
        i++;
    if(ft_strlen(s) > 20)
    {
        if(s[0] == '+' || (s[0] >= '0' && s[0] <= '9'))
            return -1;
        else if(s[0] == '-')
            return 0;
    }
    while(s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return res * sign;
}

int main(int ac, char *av[])
{
    if(ac == 2)
    {
        int i = ft_atoi(av[1]);
        int k = ft_atoi(av[1]) - 1;
        int res;
        if(ft_atoi(av[1]) < 0)
        {
            write(1, "0\n", 2);
            return 0;
        }
        while(i >= 2)
        {
            if(i == 2)
                res = res + i;
            while((i % k != 0))
            {
                if(i == 2)
                    write(1, &i, 1);
                if((k) == 2)
                {
                    res = res + i;
                    break;
                }
                k--;
            }
            i--;
        }
        ft_putnbr(res);
        write(1, "\n", 1);
    }
    else
        write(1, "0\n", 2);
}
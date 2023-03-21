#include<stdio.h>
#include<stdlib.h>

int num_len(int n)
{
    int i = 0;
    if(n <= 0)
    {
        n = n * -1;
        i++;
    }
    while(n >= 1)
    {
        i++;
        n /= 10;
    }
    return i;
}

int power_of_ten(int n)
{
    int i = 0;
    int d = 1;
    while(i < n)
    {
        d = d * 10;
        i++;
    }
    return d;
}

char	*ft_itoa(int nbr)
{
    int i = 0;
    int len = num_len(nbr);
    int len_condition = num_len(nbr);
    char *s = malloc((num_len(nbr) * sizeof(char)) + 1);
    if(nbr < 0)
    {
        nbr = nbr * -1;
        s[i] = '-';
        i++;
        len--;
    }
    while(i < len_condition)
    {
        s[i] = (nbr / power_of_ten(len - 1)) + '0';
        nbr = nbr % power_of_ten(len - 1);
        len--;
        i++;
    }
    return s;
}

// int main()
// {
//     printf("ft_itoa => %s\n", ft_itoa(-254));
//     printf("10 pow of 2: %d\n", power_of_ten(2));
//     printf("num len => %d", num_len(0));
//     return 0;
// }

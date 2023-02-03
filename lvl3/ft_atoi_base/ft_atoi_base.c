#include<stdio.h>
#include<unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res;
    int sign = 1;

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if(str[i] == '+')
        i++;
    if(str_base <= 10)
    {
        while(str[i] >= '0' && str[i] < str_base + 48)
        {
            res = res * str_base + str[i] - '0';
            i++;
        }
    }
    while(str[i] && (str_base > 10 && str_base <= 16))
    {
        if(str[i] >= '0' && str[i] <= str_base + 48)
            res = res * str_base + str[i] - '0';
         if(str[i] >= 'A' && str[i] <= str_base + 54)
            res = res * str_base + str[i] - '0' - 7;
        if(str[i] >= 'a' && str[i] <= str_base + 86)
            res = res * str_base + str[i] - '0' - 39;
        if(str[i] > 'f')
            break;
        i++;
    }
    return (res * sign);
}

// int main()
// {
//     printf("%d\n", ft_atoi_base("ff", 15));
// }
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
        while(str[i] >= '0' && str[i] <= str_base + 48 - 1)
        {
            res = res * str_base + str[i] - '0';
            i++;
        }
    }
    while(str[i] && (str_base >= 11 && str_base <= 16))
    {
        if(str[i] >= '0' && str[i] <= '9')
            res = res * str_base + str[i] - '0';
        if(str_base == 11)
            if((str[i] == 'A'))
                res = res * str_base + str[i] - '0' - 7;
        if(str_base == 12)
            if((str[i] >= 'A' && str[i] <= 'B'))
                res = res * str_base + str[i] - '0' - 7;
        if(str_base == 13)
            if((str[i] >= 'A' && str[i] <= 'C'))
                res = res * str_base + str[i] - '0' - 7;
        if(str_base == 14)
            if((str[i] >= 'A' && str[i] <= 'D'))
                res = res * str_base + str[i] - '0' - 7;
        if(str_base == 15)
            if((str[i] >= 'A' && str[i] <= 'E'))
                res = res * str_base + str[i] - '0' - 7;
        if(str_base == 16)
            if((str[i] >= 'A' && str[i] <= 'F'))
                res = res * str_base + str[i] - '0' - 7;
        if(str_base == 11)
            if((str[i] == 'a'))
                res = res * str_base + str[i] - '0' - 39;
        if(str_base == 12)
            if((str[i] >= 'a' && str[i] <= 'b'))
                res = res * str_base + str[i] - '0' - 39;
        if(str_base == 13)
            if((str[i] >= 'a' && str[i] <= 'c'))
                res = res * str_base + str[i] - '0' - 39;
        if(str_base == 14)
            if((str[i] >= 'a' && str[i] <= 'd'))
                res = res * str_base + str[i] - '0' - 39;
        if(str_base == 15)
            if((str[i] >= 'a' && str[i] <= 'e'))
                res = res * str_base + str[i] - '0' - 39;
        if(str_base == 16)
            if((str[i] >= 'a' && str[i] <= 'f'))
                res = res * str_base + str[i] - '0' - 39;
        if(str[i] > 'f')
            break;
        i++;
    }
    return (res * sign);
}

// int main()
// {
//     printf("%d\n", ft_atoi_base("10125rr", 2));
// }
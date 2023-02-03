#include<stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str);
    char tmp;
    while(i < len / 2)
    {
        tmp = str[len - 1 - i];
        str[len - 1 - i] = str[i];       //put first char in last char;
        str[i] = tmp;               //put last char in first char;
        i++;
    }
    return (str);
}

int main(void)
{
    char s[] = "abcd";
    printf("%s\n", ft_strrev(s));
}


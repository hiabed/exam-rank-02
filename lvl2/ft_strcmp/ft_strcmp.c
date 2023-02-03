#include<unistd.h>
#include<stdio.h>
#include<string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] || s2[i])
    {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}

// int main()
// {
//     char *s1 = "qqqq";
//     char *s2 = "qqq";
//     printf("my own strcmp is =>%d\n", ft_strcmp(s1, s2));
//     printf("original strcmp ==>%d\n", strcmp(s1, s2));
//     return 0;
// }

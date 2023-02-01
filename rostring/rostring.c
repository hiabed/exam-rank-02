#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

int first_word_plus_spaces(char *s)
{
    int i = 0;
    while(s[i] && (s[i] == ' '))
        i++;
    while(s[i] && (s[i] != ' '))
        i++;
    while(s[i] && (s[i] == ' '))
        i++;
    return i;
}

void    rostring(char *s)
{
    int i = first_word_plus_spaces(s);
    int j = 0;
    int before_end = ft_strlen(s) - 1;
    while(s[before_end] == ' ')
        before_end--;
    while(s[i] && i < before_end)
    {
        while(s[i] == ' ' && s[i])
        {
            i++;
            if(s[i] != ' ')
                write(1, " ", 1);           
        }
        write(1, &s[i], 1);
        i++;
    }
    if(s[i])
        write(1, " ", 1);
    i = 0;
    while(s[i] && (s[i] == ' '))
        i++;
    while(s[i] && (s[i] != ' '))
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char *av[])
{
    int i = 0;
    if(ac > 1)
        rostring(av[1]);
    write(1, "\n", 1);
}

// int main()
// {
//     char *s = "   hello world      dsfsgf sfg sfgsf gsfg sfg ";
//     printf("%s", rostring(s));
// }

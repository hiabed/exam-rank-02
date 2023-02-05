#include<stdio.h>
#include<stdlib.h>

int count_words(char *s)
{
    int i = 0;
    int count = 0;
    while(s[i])
    {
        while(s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
            i++;
        while(s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
            i++;
        if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || !s[i])
            count++;
        while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
            i++;
    }
    return count;
}

int chars_in_word(char *s, int i)
{
    int wc = 0;
    while(s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
    {
        i++;
        wc++;
    }
    return wc;
}

char **ft_split(char *s)
{
    int i = 0;
    int j = 0;
    int l;
    char **s_array = malloc(count_words(s) * sizeof(char *) + 1);
    while(s[i])
    {
        while(s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
            i++;
        l = 0;
        if(s[i])
        {
            s_array[j] = malloc(chars_in_word(s, i) + 1);
            while(s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
                s_array[j][l++] = s[i++]; 
            s_array[j][l] = '\0';
            j++;
        }
    }
    s_array[j] = NULL;
    return s_array;
}


int main()
{
    // char *s = "                hello      world                   !";
    // printf("%d", count_words(s));
    // char *s = " hello worldd                   !";
    // printf("%d", chars_in_word(s, 1));

    char *s = "            hello       worldd        fghfhfgh        fghfghfgh   fghfghfgh   hfghfghfgh     fhfghfghfh                ";
    printf("%s", ft_split(s)[7]);
}
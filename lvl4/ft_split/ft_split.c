#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

char ** allocate_for_array(char **s)
{
    char **s = malloc(count_words(&s) * sizeof(char *) + 1);
    if(!s)
        return NULL;
}

char **ft_split(char *str)
{
    int i;
    int j;
    int l;
    i = 0;
    j = 0;
    // char **s_array = malloc(count_words(str) * sizeof(char *) + 1);
    // if(!s_array)
    //     return NULL;
    char **s_array;
    allocate_for_array(s_array);
    
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        l = 0;
        if(str[i])
        {
            s_array[j] = malloc(chars_in_word(str, i) + 1);
            if(!s_array[j])
                return NULL;
            while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
                s_array[j][l++] = str[i++]; 
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

    char *s = "            hello       worldd                       ";
    printf("%s", ft_split(s)[0]);
}
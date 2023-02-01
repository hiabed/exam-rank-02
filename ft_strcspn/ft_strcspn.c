#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    char *s1 = (char *)s;
    char *s2 = (char *)reject;

    int i = 0;
    int j;
    while(s[i])
    {
        j = 0;
        while(s1[i] != s2[j] && s2[j])
            j++;
        if (s1[i] == s2[j])
            break;
        i++;
    }
    return (size_t)i;
}
#include<string.h>
#include<stdio.h>
int main()
{
    printf("%zu\n",    strcspn("abcd", "jkljkljkljd"));
    printf("%zu\n", ft_strcspn("abcd", "jkljkljkdlj"));
    //return the index of the first char finded in "reject string";
}
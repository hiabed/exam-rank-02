#include<unistd.h>
#include<stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max;
    if(!tab[i])
        return 0;
    max = tab[0];
    while(i < len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return max;
}

int main()
{
    int tab[5] = {5, 16, 15, 7, 19};
    printf("%d", max(tab, 5));
}
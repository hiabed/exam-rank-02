#include<stdio.h>
#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
    int j = 0;
    int i = end;
    int *res = malloc((end - start + 1) * sizeof(int));
    if(i >= start)
    {
        while(i >= start)
        {
            res[j] = end - j;
            j++;
            i--;
        }
        return res;
    }
    if(i < start)
    {
        j = 0;
        res = malloc((start - end + 1) * sizeof(int));          //if end < start need to change allocation formula;
        while(i <= start)
        {
            res[j] = end + j;                                   //"+j" instead of -j and increment "i" ofc;
            j++;
            i++;
        }
    }
    return res;
}

int main()
{
    int i = 0;
    while(i < 6)
    {
        printf("%d, ", ft_rrange(0, -3)[i]);
        i++;
    }
}
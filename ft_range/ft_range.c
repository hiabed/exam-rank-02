#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int *result = malloc((end - start) * sizeof(int) + 1);
    
    while(i < end - start + 1)
    {
        result[i] = i + start;
        i++;
    }
    return result;
}

int main()
{
    int i;
    int start = 6;
    int end = 19;

    printf("Range: ");
    for (i = 0; i < end - start + 1; i++)
    {
        printf("%d ",ft_range(start, end)[i]);
    }
    return  0;
}

#include<stdio.h>

void    ft_swap(int* a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    printf("%d\n", *a);
    printf("%d\n", *b);
}

int main()
{
    int a = 10;
    int b = 5;
    ft_swap(&a, &b);
}
#include<stdio.h>

void    sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int tmp;
    while(i < size - 1)
    {
        if(tab[i] <= tab[i + 1])
            i++;
        else
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
    }
}

// int main()            //switch void with int * for testing;
// {
//     int i = 0;
//     int tab[] = {9,3,5,2,1};
//     int size = 5;
//     while(i < size)
//         printf("%d, ", sort_int_tab(tab, size)[i++]);

// }

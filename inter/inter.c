#include<stdio.h>
#include<unistd.h>

int main(int ac, char *av[])
{
    if(ac >= 2)
    {
        int i = 0;
        int j;
        while(av[1][i])
        {
            j = i - 1;
            if(av[1][i] != av[1][j])
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

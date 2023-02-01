#include<stdio.h>
#include<unistd.h>

int main(int ac, char *av[])
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        while(av[1][i] && av[2][j])
        {
            j = 0;
            while((av[1][i] != av[2][j]) && av[2][j])
                j++;
            if(av[1][i] == av[2][j])
            {
                write(1, &av[1][i], 1);
                i++;
            }
            else
                i++;
        }
        write(1, "\n", 1);
    }
    if(ac != 3)
    {
        write(1, "\n", 1);
    }
}

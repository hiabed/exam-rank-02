#include<stdio.h>
#include<unistd.h>

int ft_strlen(char *s)
{
    int i;
    for(i = 0; s[i]; i++){}
    return i;
}

int main(int ac, char *av[])
{
    if(ac == 2)
    {
        int i = 0;
        int j = ft_strlen(av[1]) - 1;
        while(av[1][i] == ' ' || av[1][i] == '\t')                  //skip first white spaces;
            i++;
        while((av[1][j] == ' ' || av[1][j] == '\t'))                //skip last  white spaces;
            j--;
        while(av[1][i] && i <= j)
        {
            while(av[1][i] == ' ' || av[1][i] == '\t')
            {
                i++;
                if(av[1][i] >= 65 && av[1][i] < 127)
                    write(1, " ", 1);
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    if(ac != 2)
        write(1, "\n", 1);
    return 0;
}

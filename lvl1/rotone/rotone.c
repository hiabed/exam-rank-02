#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while (i < strlen(argv[1]))
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
            {
                argv[1][i] += 1;
                write(1, &argv[1][i], 1);
            }
            else if (argv[1][i] == 'z')
                write(1, "a", 1);
            else if(argv[1][i] == 'Z')
                write(1, "A", 1);
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
}

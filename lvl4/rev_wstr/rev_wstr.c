#include <unistd.h>

int main(int ac, char **av)
{
	int start;
	int end;
    int flag;
	int i = 0;
		
	if(ac == 2)
	{   
		while (av[1][i] != '\0')          //iterate to the end of the string;
			i++;
		while(i >= 0)
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')   //skip last white spaces;
				i--;
			end = i;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')     //back until we find the first space;
				i--;
			start = i + 1;    //increment i by one to skip the space that we found;
			flag = start;     //flag to stop adding space when we write the first word;
			while(start <= end)     //then write the word;
			{
				write (1, &av[1][start],1);
				start++;		
			}
            if(flag > 0)   //means the word is not the first word so we write space;
                write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
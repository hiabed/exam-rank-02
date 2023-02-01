#include<unistd.h>
#include<stdio.h>

void	print_bits(unsigned char octet)
{
    int i = 0;
    int tab[8];
    int res = octet;
    while (i < 8)
    {
        res = octet % 2;
        tab[i] = res + 48; 
        octet = octet / 2;
        i++;
    }
    i--;
    while (i >= 0)
    {
        write(1, &tab[i], 1);
        i--;
    }
}
int main(void)
{
    unsigned char c = 2;
    print_bits(c);
    return 0;
}

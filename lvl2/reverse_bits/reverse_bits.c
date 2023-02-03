#include<unistd.h>
#include<stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 0;
    int res = 0;

    while(i < 8)
    {
        res = (octet % 2) + 48;
        write(1, &res, 1);
        octet = octet / 2;
        i++;
    }
    return res;
}

int main()
{
    unsigned char c = 2;
    reverse_bits(c);

    return 0;
}

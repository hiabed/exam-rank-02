#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < 8)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (res);
}

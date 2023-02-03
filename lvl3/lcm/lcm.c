#include<stdio.h>

unsigned int    hcf(unsigned int a, unsigned int b)
{
    if(a >= b)
    {
        if(a % b == 0)
            return a / (a / b);
    }
    if(a <= b)
    {
        if(b % a == 0)
            return b / (b / a);
    }
    i++;
    return 1;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if(a == 0 || b == 0)
        return 0;
    unsigned int lcm = (a * b) / hcf(a, b);
    return lcm;
}


int main()
{
    printf("lcm is: %d\n", lcm(4, 0));
    printf("hcf is: %d", hcf(4, 12));
}
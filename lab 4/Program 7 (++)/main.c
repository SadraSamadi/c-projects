#include <stdio.h>

int main(void)
{
    int a, b, aincr, bincr;
    a = 1;
    b = 1;
    aincr = a++;
    bincr = ++b;
    printf("%i %i %i %i \n", a, aincr, b, bincr);
    return 0;
}

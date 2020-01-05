#include <stdio.h>

main()
{
    int i, a, b, c, d = 0, e;
    printf("Please enter a number : ");
    scanf("%i", &a);
    if (a < 0) {
        a = a * -1;
    }
    do {
        b = a%10;
        c = a/10;
        a = c;
        if (c < 10) {
            e = c;
        }
        d = d + b;
    } while (a >= 10);
    printf("The sum of numerics is : %i", d + e);
}

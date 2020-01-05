#include <stdio.h>

main()
{
    int i, a, c, d, e;
    printf("Please enter a number : ");
    scanf("%i", &a);
    printf("Reverse of number is : ");
    do {
        c = a%10;
        d = a/10;
        a = d;
        if (a < 10) {
            e = a;
        }
        printf("%i", c);
    } while (a >= 10);
    printf("%i", e);
}

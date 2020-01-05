#include <stdio.h>

main()
{
    int a, b, c;
    printf("Enter a number : ");
    scanf("%i", &a);
    if (a == 0) {
        printf("your number is even.\n");
    } else {
        c = a / 2;
        b = c * 2;
        if (b == a) {
            printf("your number is even.\n");
        } else {
            printf("your number is odd.\n");
        }
    }
}

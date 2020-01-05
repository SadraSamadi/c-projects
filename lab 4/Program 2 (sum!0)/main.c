#include <stdio.h>

main()
{
    int i, a, b = 0;
    printf("Please enter a number : ");
    scanf("%i", &a);
    if (a == 0) {
    } else {
        for (i = 1; i <= a; i++) {
            b = b + i;
        }
        printf("The result is : %i\n", b);
    }
}

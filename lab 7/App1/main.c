#include <stdio.h>

main()
{
    int x, n = 1, i;
    printf("Please enter a number : ");
    scanf("%i", &x);
    if (x == 0){
    } else {
        for (i = 1; i <= x; i++) {
            n = n * i;
        }
    }
    printf("\n%i! = %i\n", x, n);
}

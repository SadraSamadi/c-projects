#include <stdio.h>

main()
{
    int i, n, x = 1;
    printf("Please enter a number : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++) {
        x = x * i;
    }
    printf("%i! = %i", n, x);
}

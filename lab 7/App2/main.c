#include <stdio.h>

main()
{
    int x;
    printf("Please enter a number : ");
    scanf("%i", &x);
    printf("\n%i! = %i\n", x, fact(x));
}

int fact (int x) {
    int n = 1, i;
    if (x == 0) {
    } else {
        for (i = 1; i <= x; i++) {
            n = n * i;
        }
    }
    return n;
}

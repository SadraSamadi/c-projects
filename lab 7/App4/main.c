#include <stdio.h>
#include "fact.h"

main()
{
    int n, i, a, b, c = 0;
    char ch1 = -28, ch2 = 94;
    printf("Please enter a number : ");
    scanf("%i", &n);
    for (i = 0; i <= n; i++) {
        if (i == 0 || (i % 2) == 0) {
            a = 1;
        } else if (i == 1 || (i % 2) == 1) {
            a = -1;
        }
        b = fact(i);
        c = c + a * b;
    }
    printf("\n%i\n%c (-1)%ci(i!) = %i\ni = 0\n", n, ch1, ch2, c);
}

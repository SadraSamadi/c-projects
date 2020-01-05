#include <stdio.h>

main()
{
    int a, b, c = 0, i, n = 0;
    printf("Please enter a number : ");
    scanf("%i", &a);
    for (i = 1; i <= a; i++) {
        printf("enter mark %i : ", i);
        scanf("%i", &b);
        c = c + b;
        if (b < 10){
            n++;
        }
    }
    printf("Your average is %i\n", c / a);
    printf("you failed in %i lesson.\n", n);
}

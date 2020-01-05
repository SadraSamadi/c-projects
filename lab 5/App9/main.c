#include <stdio.h>

main()
{
    int i = 0, a, b, c, j;
    int x[9];
    printf("Please enter a number : ");
    scanf("%i", &a);
    do {
        b = a%10;
        c = a/10;
        a = c;
        x[i] = b;
        i++;
    } while (c >= 1);
    for (j = --i; j >= 0; j--) {
        switch (x[j]) {
        case 0 :
            printf("Zero ");
            break;
        case 1 :
            printf("One ");
            break;
        case 2 :
            printf("Two ");
            break;
        case 3 :
            printf("Three ");
            break;
        case 4 :
            printf("Four ");
            break;
        case 5 :
            printf("Five ");
            break;
        case 6 :
            printf("Six ");
            break;
        case 7 :
            printf("Seven ");
            break;
        case 8 :
            printf("Eight ");
            break;
        case 9 :
            printf("Nine ");
            break;
        }
    }
}

#include <stdio.h>

main()
{
    float x, y;
    char ch;
    printf("Begin Calculations\n");
    while (ch != '\n') {
        scanf("%f%c", &x, &ch);
        switch (ch) {
        case 'S' :
            y = x;
            printf("= %f\n", y);
            break;
        case '+' :
            printf("= %f\n", y = y + x);
            break;
        case '-' :
            printf("= %f\n", y = y - x);
            break;
        case '*' :
            printf("= %f\n", y = y * x);
            break;
        case '/' :
            printf("= %f\n", y = y / x);
            break;
        case '\n' :
            printf("= %f\n", y);
            printf("End of Calculations.");
            break;
        }
    }
}

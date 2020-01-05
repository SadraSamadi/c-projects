#include <stdio.h>

main()
{
    char ch, n;
    printf("Please enter a character : ");
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57) {
        n = ch - 48;
        printf("%i", n * n);
    } else if (ch >= 65 && ch <= 90) {
        printf("%c", ch + 32);
    } else if (ch >= 97 && ch <= 122) {
        printf("%c", ch - 32);
    }
}

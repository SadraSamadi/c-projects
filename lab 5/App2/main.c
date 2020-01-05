#include <stdio.h>

main()
{
    char ch;
    printf("please enter a character : ");
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57) {
        printf("your character is a digit.\n");
    } else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        printf("your character is an alphabet.\n");
    }
}

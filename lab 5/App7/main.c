#include <stdio.h>

main()
{
    int line = 0, word = 0, character = 0;
    char ch;
    printf("Enter characters : \n\n");
    while (ch != EOF) {
        ch = getchar();
        character++;
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == EOF)
            character--;
        if (ch == '\n')
            line++;
        if (ch == ' ' || ch == '\t' || ch == '\n')
            word++;
    }
    printf("\nnumber of lines is : %i\n", line);
    printf("number of words is : %i\n", word);
    printf("number of characters is : %i\n", character);
}

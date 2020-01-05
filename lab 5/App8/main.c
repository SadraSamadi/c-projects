#include <stdio.h>

main()
{
    int line = 0, word = 0, character = 0;
    char ch, a;
    printf("Enter characters : \n\n");
    while (ch != EOF) {
        a = ch;
        ch = getchar();
        character++;
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == EOF)
            character--;
        if (ch == '\n')
            line++;
        if (ch == ' ' || ch == '\t' || ch == '\n')
            word++;
        if ((a == ' ' && ch == ' ') || (a == '\n' && ch == '\n') || (a == '\t' && ch == '\t'))
            word--;
    }
    printf("\nnumber of lines is : %i\n", line);
    printf("number of words is : %i\n", word);
    printf("number of characters is : %i\n", character);
}

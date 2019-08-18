#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

main()
{
    int rn, i, j, temp, arrayCheck, counter, row_column, error;
    char ch1, ch2, direction;
    int array[3][3] = {{1, 2, 3},   // first row
                       {4, 5, 6},   // second row
                       {7, 8, 9}};  // third row
    srand(time(0));
    do {
        // Random relocation (rows) :
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                rn = rand() % (3 - j);
                temp = array[i][rn];
                array[i][rn] = array[i][2 - j];
                array[i][2 - j] = temp;
            }
        }
        // Random relocation (Columns) :
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                rn = rand() % (3 - j);
                temp = array[rn][i];
                array[rn][i] = array[2 - j][i];
                array[2 - j][i] = temp;
            }
        }
        // Checking array :
        counter = 1;
        arrayCheck = 0;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (array[i][j] == counter++)
                    arrayCheck++;
            }
        }
    } while (arrayCheck > 5);
    do {
        system("cls");  // Clear screen
        printTable(array);
        printf("\n==================================="
               "=============================================\n");
        printf("Please enter a direction (Up = w/W, Down = s/S, "
               "Right = d/D, Left = a/A)\n\tand a row or column (1, 2, 3) : ");
        // Checking array :
        counter = 1;
        arrayCheck = 0;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (array[i][j] == counter++)
                    arrayCheck++;
            }
        }
        if (arrayCheck == 9)
            break;
        // Getting direction and row or column :
        do {
            error = 0;
            ch1 = getche();
            if (ch1 == 'w' || ch1 == 'W')
                direction = 'w';
            else if (ch1 == 's' || ch1 == 'S')
                direction = 's';
            else if (ch1 == 'd' || ch1 == 'D')
                direction = 'd';
            else if (ch1 == 'a' || ch1 == 'A')
                direction = 'a';
            else {
                printf("\n\nInvalid direction ! Try again : ");
                error = 1;
                continue;
            }
            ch2 = getche();
            if (ch2 == '1')
                row_column = 0;
            else if (ch2 == '2')
                row_column = 1;
            else if (ch2 == '3')
                row_column = 2;
            else {
                printf("\n\nInvalid row or column ! Try again : ");
                error = 1;
            }
        } while (error == 1);
        move(array, direction, row_column);
    } while (1);
    printf("\n\n\n\n\t\t\t.:: You win in %i seconds ! ::.\n\n\n\n", clock() / 1000);
    system("pause");
}

printTable(int array[][3])
{
    printf(" -----------\n");
    printf("| %i | %i | %i |\n", array[0][0], array[0][1], array[0][2]);
    printf("|-----------|\n");
    printf("| %i | %i | %i |  <==  You should try to sort the numbers "
           "in the table.\n", array[1][0], array[1][1], array[1][2]);
    printf("|-----------|\n");
    printf("| %i | %i | %i |\n", array[2][0], array[2][1], array[2][2]);
    printf(" -----------\n");
}

void move(int array[][3], char direction, int row_column)
{
    int temp1, temp2;
    switch (direction) {
    case 'w' :
        temp1 = array[0][row_column];
        temp2 = array[1][row_column];
        array[1][row_column] = array[2][row_column];
        array[0][row_column] = temp2;
        array[2][row_column] = temp1;
        break;
    case 's' :
        temp1 = array[0][row_column];
        temp2 = array[1][row_column];
        array[0][row_column] = array[2][row_column];
        array[2][row_column] = temp2;
        array[1][row_column] = temp1;
        break;
    case 'd' :
        temp1 = array[row_column][0];
        temp2 = array[row_column][1];
        array[row_column][0] = array[row_column][2];
        array[row_column][2] = temp2;
        array[row_column][1] = temp1;
        break;
    case 'a' :
        temp1 = array[row_column][0];
        temp2 = array[row_column][1];
        array[row_column][1] = array[row_column][2];
        array[row_column][0] = temp2;
        array[row_column][2] = temp1;
        break;
    }
}

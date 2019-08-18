#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

COORD coord = {0, 0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main()
{
    int x, y, x0, y0, birds, error, t, rx1, rx2, ry1, ry2, i, pigg1, pigg2, flag1, flag2;
    float V, D, R;
    char ch;
    srand(time(0));
    do {
        birds = 5;
        x0 = 0;
        y0 = 0;
        pigg1 = 0;
        pigg2 = 0;
        flag1 = 1;
        flag2 = 1;
        system("cls");
        rx1 = 50 + rand() % 30;
        rx2 = 50 + rand() % 30;
        do {
            ry1 = rand() % 21;
            ry2 = rand() % 21;
        } while(rx1 == rx2);
        for (i = ry1; i <= 20; i++) {
            if (i == ry1) {
                gotoxy(rx1, i);
                printf("%c", 2);
            } else if (i == ry1 + 1) {
                gotoxy(rx1, i);
                printf("T");
            } else {
                gotoxy(rx1, i);
                printf("|");
            }
        }
        for (i = ry2; i <= 20; i++) {
            if (i == ry2) {
                gotoxy(rx2, i);
                printf("%c", 2);
            } else if (i == ry2 + 1) {
                gotoxy(rx2, i);
                printf("T");
            } else {
                gotoxy(rx2, i);
                printf("|");
            }
        }
        do {
            gotoxy(0, 21);
            printf("================================================================================");
            BIRDS(6);
            BIRDS(birds);
            gotoxy(0, 22);
            printf("\t\t\t\t\t\t\t\t\t\t");
            gotoxy(0, 23);
            printf("\t\t\t\t\t\t\t\t\t\t");
            gotoxy(0, 22);
            printf("Please enter a Speed (0, 200] km/h : ");
            do {
                scanf("%f", &V);
                if (V > 0 && V <= 200)
                    error = 0;
                else {
                    gotoxy(0, 22);
                    printf("\t\t\t\t\t\t\t\t\t\t");
                    gotoxy(0, 22);
                    printf("Invalid Speed ! Try again : ");
                    error = 1;
                }
            } while(error == 1);
            gotoxy(0, 23);
            printf("Please enter an Angle [-30, 90)%c : ", -8);
            do {
                scanf("%f", &D);
                if (D >= -30 && D < 90)
                    error = 0;
                else {
                    gotoxy(0, 23);
                    printf("\t\t\t\t\t\t\t\t\t\t");
                    gotoxy(0, 23);
                    printf("Invalid Angle ! Try again : ");
                    error = 1;
                }
            } while(error == 1);
            gotoxy(0, 15);
            printf(" ");
            R = (M_PI * D) / 180;
            t = 100 - V / 2;
            for (x = 1; x < 80; x++) {
                y = tan(R) * x - (9.8 * pow(x, 2)) / (2 * pow(V * cos(R), 2)) + 5;
                y = 20 - y;
                if (y > 20 || y < 0) {
                    break;
                }
                gotoxy(x0, y0);
                printf(" ");
                gotoxy(x, y);
                printf("%c", 1);
                x0 = x;
                y0 = y;
                if (x == rx1 && y == ry1) {
                    printf("\a");
                    pigg1 = 1;
                    V = V - 2;
                } else if (x == rx1 && y > ry1) {
                    printf("\a");
                    flag1 = 0;
                    V = V - 1;
                }
                if (x == rx2 && y == ry2) {
                    pigg2 = 1;
                    V = V - 2;
                } else if (x == rx2 && y > ry2) {
                    flag2 = 0;
                    V = V - 1;
                }
                Beep(x * 100, t);
            }
            BIRDS(6);
            if (pigg1 == 1) {
                BREAK(rx1, ry1);
                ry1 = 21;
            } else if (flag1 == 0) {
                FALL(rx1, ry1);
                ry1 = 20;
            }
            if (pigg2 == 2) {
                BREAK(rx2, ry2);
                ry2 = 21;
            } else if (flag2 == 0) {
                FALL(rx2, ry2);
                ry2 = 20;
            }
        } while((--birds > 0) && (pigg1 + pigg2 != 2));
        gotoxy(0, 21);
        printf("================================================================================");
        BIRDS(6);
        if (pigg1 + pigg2 == 2) {
            gotoxy(60, 22);
            printf("(You Win !)");
            BREAK(rx1, ry1);
            BREAK(rx2, ry2);
        } else {
            gotoxy(60, 22);
            printf("(You lost !)");
        }
        gotoxy(0, 24);
        printf("Do you want to play again (Y/N) ? ");
        ch = getche();
    } while(ch == 'y' || ch == 'Y');
    gotoxy(0, 24);
    printf("( Created by \"Sadra Samadi\" )\t");
    system("pause");
}

int BREAK(int x, int y)
{
    int i;
    for (i = y; i <= 20; i++) {
        gotoxy(x, i);
        printf(" ");
        gotoxy(0, 21);
        printf("================================================================================");
        Sleep(200);
    }
}

int FALL(int x, int y)
{
    int i;
    for (i = y; i <= 20; i++) {
        gotoxy(x, i);
        printf("%c", 2);
        gotoxy(x, i - 1);
        printf(" ");
        gotoxy(x, i + 1);
        printf("T");
        gotoxy(0, 21);
        printf("================================================================================");
        Sleep(200);
    }
}

int BIRDS(int number)
{
    switch (number) {
    case 6 :
        gotoxy(0, 16);
        printf("<");
        gotoxy(1, 16);
        printf("V");
        gotoxy(1, 17);
        printf("|");
        gotoxy(1, 18);
        printf("|");
        gotoxy(1, 19);
        printf("|");
        gotoxy(1, 20);
        printf("|");
        break;
    case 5 :
        gotoxy(0, 15);
        printf("%c", 1);
        gotoxy(0, 17);
        printf("%c", 1);
        gotoxy(0, 18);
        printf("%c", 1);
        gotoxy(0, 19);
        printf("%c", 1);
        gotoxy(0, 20);
        printf("%c", 1);
        break;
    case 4 :
        gotoxy(0, 15);
        printf("%c", 1);
        gotoxy(0, 17);
        printf(" ");
        gotoxy(0, 18);
        printf("%c", 1);
        gotoxy(0, 19);
        printf("%c", 1);
        gotoxy(0, 20);
        printf("%c", 1);
        break;
    case 3 :
        gotoxy(0, 15);
        printf("%c", 1);
        gotoxy(0, 17);
        printf(" ");
        gotoxy(0, 18);
        printf(" ");
        gotoxy(0, 19);
        printf("%c", 1);
        gotoxy(0, 20);
        printf("%c", 1);
        break;
    case 2 :
        gotoxy(0, 15);
        printf("%c", 1);
        gotoxy(0, 17);
        printf(" ");
        gotoxy(0, 18);
        printf(" ");
        gotoxy(0, 19);
        printf(" ");
        gotoxy(0, 20);
        printf("%c", 1);
        break;
    case 1 :
        gotoxy(0, 15);
        printf("%c", 1);
        gotoxy(0, 17);
        printf(" ");
        gotoxy(0, 18);
        printf(" ");
        gotoxy(0, 19);
        printf(" ");
        gotoxy(0, 20);
        printf(" ");
        break;
    case 0 :
        gotoxy(0, 15);
        printf(" ");
        gotoxy(0, 17);
        printf(" ");
        gotoxy(0, 18);
        printf(" ");
        gotoxy(0, 19);
        printf(" ");
        gotoxy(0, 20);
        printf(" ");
        break;
    }
}

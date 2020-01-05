#include <stdio.h>

main()
{
    int days[12] = {31,31,31,31,31,31,30,30,30,30,30,30}, d, m, i, sum = 0;
    printf("Please enter a date (day and month) : ");
    scanf("%i %i", &d, &m);
    if (m == 1) {
        printf("The day's number in the current year : %i", d);
    } else {
        for (i = 0; i < m - 1; i++) {
            sum = sum + days[i];
        }
        printf("The day's number in the current year : %i", d + sum);
    }
}

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Please enter a number : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%i\t", i * j);
        }
        printf("\n");
    }
}

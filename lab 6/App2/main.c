#include <stdio.h>

main()
{
    int n, m, i, j, k;
    printf("Pleas enter number of rows and columns : ");
    scanf("%i", &n);
    int A[n][n];
    int B[n][n];
    int C[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }
    printf("Please enter elements of matrix A :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A(%i%i) = ", i + 1, j + 1);
            scanf("%i", &A[i][j]);
        }
    }
    printf("Please enter elements of matrix B :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("B(%i%i) = ", i + 1, j + 1);
            scanf("%i", &B[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (k = 0; k < n; k++) {
            for (j = 0; j < n; j++) {
                C[i][k] = C[i][k] + A[i][j] * B[j][k];
            }
        }
    }
    printf("Matrix product is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("C(%i%i) = %i", i + 1, j + 1, C[i][j]);
            printf("\t\t");
        }
        printf("\n");
    }
}

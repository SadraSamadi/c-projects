#include <stdio.h>

main()
{
    int n, i;
    printf("How many numbers you want to enter ? ");
    scanf("%i", &n);
    float x[n], mean = 0, variance = 0;
    for (i = 0; i < n; i++) {
        printf("Enter number (%i) : ", i + 1);
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++) {
        mean = mean + x[i];
    }
    mean = mean / n;
    for (i = 0; i < n; i++) {
        variance = variance + (mean - x[i]) * (mean - x[i]);
    }
    variance = variance / n;
    printf("\nMean = %f\n\nVariance = %f\n", mean, variance);
}

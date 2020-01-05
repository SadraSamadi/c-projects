#include <stdio.h>
#include <math.h>

float f1(int n, float x);

main()
{
    int n;
    float x, r;
    printf("Please enter an integer number (more than 1) : ");
    scanf("%i", &n);
    printf("Please enter a floating number : ");
    scanf("%f", &x);
    r = (f1(n, x) + f2(n)) / sqrt(f3(n) + pow(f4(n), 2));
    printf("\nThe result is : %.3f\n", r);
}

float f1(int n, float x)
{
    int i, a;
    float b, c = 0;
    for (i = 1; i <= n; i++) {
        if (i == 1 || (i % 2) == 1) {
            a = -1;
        } else if (i % 2 == 0) {
            a = 1;
        }
        b = pow(x, i);
        c = c + a * i * b;
    }
    return c;
}

int f2(int n)
{
    int i, j, a = 0, b = 0;
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            b = b + pow((i - j), 2);
        }
    a = a + b;
    }
    return a;
}

int f3(int n)
{
    int i, a = 0;
    for (i = 1; i <= n; i++) {
        a = a + fact(i);
    }
    return n * a;
}

int f4(int n)
{
    int i, a, b = 0;
    for (i = 1; i <= n; i++) {
        if (i == 1 || (i % 2) == 1) {
            a = -1;
        } else if (i % 2 == 0) {
            a = 1;
        }
        b = b + a * i;
    }
    return pow(b, 2);
}

int fact (int x) {
    int n = 1, i;
    if (x == 0) {
    } else {
        for (i = 1; i <= x; i++) {
            n = n * i;
        }
    }
    return n;
}

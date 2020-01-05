#include <stdio.h>

main()
{
    int a[80], b[80], c[80], i, j, d = 0, k, p = 0, max, e, t, x;
    char ch1, ch2;
    printf("Please enter two number :\n\n");
    for (i = 0; ch1 != '\n'; i++) {
        ch1 = getchar();
        a[i] = ch1 - 48;
        if (ch1 == '\n')
            printf("+\n");
    }
    for (j = 0; ch2 != '\n'; j++) {
        ch2 = getchar();
        b[j] = ch2 - 48;
    }
    max = i - 1;
    if (max < j - 1)
        max = j - 1;
    e = max;
    replace(a, i - 1);
    replace(b, j - 1);
    for (k = 79; k >= 0; k--) {
        x = a[k] + b[k] + d;
        if (x >= 10) {
            d = 1;
            x = x % 10;
        } else {
            d = 0;
        }
        c[p] = x;
        p++;
        if (p == max && d == 1)
            e++;
    }
    e--;
    printf("=\n");
    for (t = e; t >= 0; t--) {
        printf("%i", c[t]);
    }
    printf("\n");
}

replace(int array[], int x)
{
    int r, s = 0;
    for (r = x; r >= 1; r--) {
        array[80 - r] = array[s];
        s++;
    }
    for (r = 0; r <= (79 - x); r++) {
        array[r] = 0;
    }
}

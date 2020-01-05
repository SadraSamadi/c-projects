#include <stdio.h>

main()
{
    int a, b;
    printf("Please enter two numbers : ");
    scanf("%i %i", &a, &b);
    printf("\nGCD = %i\n", GCD(a, b));
    printf("\nLCM = %i\n", LCM(a, b));
}

int GCD(int x, int y)
{
    int z = 1;
	while (z != 0) {
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}

int LCM(int r, int s)
{
    return ((r * s) / GCD(r, s));
}

#include <stdio.h>

main()
{
	int a, b , c = 1;
	printf("Enter two number : ");
	scanf("%i %i", &a, &b);
	while (c != 0) {
		c = a%b;
		a = b;
		b = c;
	}
	printf("gcd = %i", a);
}

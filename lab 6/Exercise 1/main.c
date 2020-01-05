#include <stdio.h>
#define NA 4
#define NB 7

int main (void) {
    int b[NB], a[NA];
    int index;
    for ( index = 0; index < NB; ++index )
        b[index]=10+index;
    for ( index = 0; index < NA+2; ++index )
        a[index]=index;
    for ( index = 0; index < NA+2; ++index )
        printf ("a[%i] = %i ", index, a[index]);
        printf("\n");
    for ( index = 0; index < NB; ++index )
        printf ("b[%i] = %i ", index, b[index]);
        printf("\n");
    return 0;
}

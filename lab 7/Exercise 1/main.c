#include <stdio.h>

int main()
{
    int z = 4;
    if (z-4) { // (z-4) == 0   ==>   don't work  // (z-4) != 0   ==>   work
        int i = 1;
        z = z + 1;
    } else {
        int i = 1;
        z = i + 1;
        {/////////////////////
            int i = 1;//////// this "int" work just in this scope { }
            z = i + 1;//////// "z" work because defined in previous scopes { }
        }/////////////////////
        z = i;
    }
    int i = 0; // <== <== <== must be add
    z = z + i; // this is not work because "i" not defined in main scope
    do {
        //int i = 0;  // <== <== <== must be remove
        z = i + 1;
        i++;
    } while(i < 15);
    return 0;
}

#include <stdio.h>
int g = 1; /* Global variable */
int func (int x);
int main() {
    int g = 2, z;
    z = g;
    z = z + 1;  // z = 3
    printf("A: The variable z equals %d\n", z);
    {
        z = g;  // g = 2 // z = 2
        g = 3;  //==>////////////////////////////////////////////////////////////////////
        {                                                                              //
            int g = 4;  // this "g" defined just for this scope { }//////////////////////
            z = g++;  // z = 4 because first z = g then g++ ==> g = 5                  // ||
            z = z + 1;  // g = 5  // z = 5 ==>/////////////////////                    // VV
            printf("B: The variable z equals %d\n", z);          // | |                //
        }                                                        // V V                //
        z = func(z);  // z = 5  // func(z) = 6 <==/////////////////                    //
        z = z + 1;  // z = 7                                                           // ||
        printf("C: The variable z equals %d\n", z);                                    // VV
    }                                                                                  //                                                                //
    z = g;  // z=3  <==  g=3  <==////////////////////////////////////////////////////////
    z = func (z + 1);  // func (3 + 1) = 6 // z = 6 <==///////////////////////////////
    printf("D: The variable z equals %d\n", z);                                     //
    return 0;                                                                       //
}                                                                                   // AA
                                                                                    // ||
int func (int x) {                                                                  //
    int i;                                   ////////////////////////////////////   //
    i = g++;  // (1) g = 1  , i = 1  , g = 2 /// (2) g = 2 , i = 2 , g = 3 ==> ///////
    return (x + i);                          ////////////////////////////////////
}

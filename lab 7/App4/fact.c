#include "fact.h"

int fact(int x) {
    int n = 1, i;
    if (x == 0) {
    } else {
        for (i = 1; i <= x; i++) {
            n = n * i;
        }
    }
    return n;
}

#include <stdio.h>

main()
{
    char A[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int counter[26], i, j, k;
    char ch;
    for (k = 0; k < 26; k++) {
        counter[k] = 0;
    }
    while(ch != EOF) {
        ch = getchar();
        for (i = 0; i < 26; i++) {
            if (ch == A[i] || ch == a[i])
                counter[i]++;
        }
    }
    for (j = 0; j < 26; j++) {
        if (counter[j] != 0)
            printf("%c/%c = %i\n", A[j], a[j], counter[j]);
    }
}

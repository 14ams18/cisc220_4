#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int main() {
        char *a = "Hello ";
        char *b = "World!";
        int from = 3;
        int n = 2;
        char target[n];
        char *c = safeststrcat(a,b);
        if (substring(a, from, n, target) == 0)
                printf("Result of substring: %s", target);
        else
                printf("Failure of substring");
                exit(-1);
        return 0;
}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "mystring.h"

char* safeststrcat(char *a, char *b) {
        int len = strlen(a) + strlen(b);
        char *c = (char *)malloc(sizeof(char)*len);
        c = strcat(c,a);
        c = strcat(c,b);
        return c;
}

int substring(char *source, int from, int n, char *target) {
        int length = (strlen(source));
        if ((length - from) > n && from < length) {
                char temp[n];
                strcpy(temp, source);
                for (int i=0; i<n; i++) {
                        target[i] = temp[from+i];
                }
        }
        else {
                printf("The input values were invalid");
                return -1;
        }
        return 0;
}


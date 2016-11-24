#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix {
        int width;
        int height;
} matrix;

int checkDimension (
        if (m1.width == m2.height)
                result.width = m2.width;
                result.height = m1.height;
                return 0;
        else
                return -1;

}

void matrixMult () {
        for ( i=0; i<m1.height; i++) {
                for ( j=0; j<m2.width; j++) {
                        for ( k=0; k<m1.width; k++) {
                                resulVal[i][j] += m1Val[i][k] * m2Val[k][j];
                        }
                }
        }
}

int main () {
        matrix m1 = malloc(sizeof(matrix)+1);
        matrix m2 = malloc(sizeof(matrix)+1);
        matrix result = malloc(sizeof(matrix)+1);
        int input = 1;
        scanf("Insert matrix 1 dimensions separated by a space: %d %d", &m1.height, &m1.width);
        //check if ints
        while (input != 0) {
                 scanf("Insert matrix 2 dimensions separated by a space: %d %d", &m2.height, &m2.width);
                //check vals are ints
                if (checkDimension() == 0) {
                        input = 0;
                        break;
                }
                else {
                        printf("Dimension Mismatch. Please re-enter matrix 2 dimensions.");
                        fprintf(stderr, "Dimension Mismatch");
                }
                 }
        int[m1.height][m1.width] m1Val = malloc(sizeof(int)*m1.height*m1.height);
        int[m2.height][m2.width] m2Val = malloc(sizeof(int)*m2.height*m2.height);
        int[result.height][result.width] m1Val = malloc(sizeof(int)*result.height*result.height);
        if (scanf("Input matrix 1 elements separated by spaces: %d", &m1Val[m1.height][m1.witdth]) && scanf("Input matrix 2 elements separated by spaces: %d", &m2Val[m2.height][m2.witdth])) {
         matrixMult();
        }
        else {
                printf("Invalid Input.");
                fprintf(stderr, "Invalid Input");
                free(m1);
                free(m2);
                free(result);
                exit(-1)
        }
        for(int i = 0; i < result.height; i++) {
            for(int j = 0; j < result.width; j++) {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
        free(m1);
        free(m2);
        free(result);
        return 0;
}


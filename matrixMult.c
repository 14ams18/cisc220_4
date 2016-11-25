#include<stdio.h>
#include<stdlib.h>

typedef struct Matrix{
        int width;
        int height;
} matrix;

typedef struct array{
        int array[][];
} array;

int checkDimension (matrix m1, matrix m2, matrix result) {
        if (m1.width == m2.height) {
                result.width = m2.width;
                result.height = m1.height;
                return 0;
        }
        else {
                return -1;
        };
}

array matrixMult (matrix m1, matrix m2, int[][] m1Val, int[][] m2Val) {
        array resultVal.array[result.height][result.width];
        for ( int i=0; i<m1.height; i++) {
                for ( int j=0; j<m2.width; j++) {
                        for ( int k=0; k<m1.width; k++) {
                                resultVal[i][j] += m1Val[i][k] * m2Val[k][j];
                        }
                }
        }
        return resultVal;
}

int main () {
        matrix m1;
        matrix m2;
        matrix result;
        int input = 1;
        scanf("Insert matrix 1 dimensions separated by a space: %d %d", &m1.height, &m1.width);
        while (input != 0) {
                 scanf("Insert matrix 2 dimensions separated by a space: %d %d", &m2.height, &m2.width);
                if (checkDimension(m1, m2, result) == 0) {
                        input = 0;
                        break;
                }
                else {
                        printf("Dimension Mismatch. Please re-enter matrix 2 dimensions.");
                        fprintf(stderr, "Dimension Mismatch");
                }
        }
        int m1Val[m1.height][m1.width];
        int m2Val[m2.height][m2.width];
        if (scanf("Input matrix 1 elements separated by spaces: %d", &m1Val[m1.height][m1.width]) && scanf("Input matrix 2 elements separated by spaces: %d", &m2Val[m2.height][m2.width])) {
        array = matrixMult(m1, m2, m1Val, m2Val, resultVal);
        }
        else {
                printf("Invalid Input.");
                fprintf(stderr, "Invalid Input");
                free(m1);
                free(m2);
                free(result);
                exit(-1);
        }
        for(int i = 0; i < result.height; i++) {
            for(int j = 0; j < result.width; j++) {
                printf("%d ", resultVal.array[i][j]);
            }
            printf("\n");
        }
        return 0;
}


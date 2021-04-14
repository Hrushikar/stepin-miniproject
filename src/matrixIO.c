#include<stdio.h>
#include "matrix.h"


void matrixInputInteger(long int** mat1, long int** mat2, int r1, int c1, int r2, int c2){
    if (r2 < 0 && c2 < 0){
        printf("\nEnter the elements of the first matrix:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("\n");
    }
    else{
        printf("\nEnter the elements of the first matrix:\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix:\n");
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                scanf("%d", &mat2[i][j]);
            }
        }
    }
    printf("\n");
}


void matrixInputDouble(double** mat1, double** mat2, int r1, int c1, int r2, int c2){
    if (r2 < 0 && c2 < 0){
        printf("\nEnter the elements of the first matrix:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%lf", &mat1[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%lf", &mat2[i][j]);
            }
        }
        printf("\n");
    }
    else{
        printf("\nEnter the elements of the first matrix:\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                scanf("%lf", &mat1[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix:\n");
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                scanf("%lf", &mat2[i][j]);
            }
        }
        printf("\n");
    }
}


void matrixPrintInteger(long int** mat, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}


void matrixPrintDouble(double** mat, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%lf", mat[i][j]);
        }
        printf("\n");
    }
}
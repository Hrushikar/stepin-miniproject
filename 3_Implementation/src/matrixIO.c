/**
 * @file matrixIO.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Source file to perform matrix I/O operations.
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include "matrix.h"


/**
 * @brief Function to take input of two matrices of integer values.
 * 
 * @param mat1 
 * @param mat2 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 */
void matrixInputInteger(long int** mat1, long int** mat2, int r1, int c1, int r2, int c2){
    if (r2 < 0 && c2 < 0){
        printf("\nEnter the elements of the first matrix:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%ld", &mat1[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix:\n");
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                scanf("%ld", &mat2[i][j]);
            }
        }
        printf("\n");
    }
    else{
        printf("\nEnter the elements of the first matrix:\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                scanf("%ld", &mat1[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix:\n");
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                scanf("%ld", &mat2[i][j]);
            }
        }
    }
    printf("\n");
}


/**
 * @brief Function to take input of two matrices of real values.
 * 
 * @param mat1 
 * @param mat2 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 */
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


/**
 * @brief Function to print the matrices of integer values.
 * 
 * @param mat 
 * @param r 
 * @param c 
 */
void matrixPrintInteger(long int** mat, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%ld", mat[i][j]);
        }
        printf("\n");
    }
}


/**
 * @brief Function to print the matrices of real values.
 * 
 * @param mat 
 * @param r 
 * @param c 
 */
void matrixPrintDouble(double** mat, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%lf", mat[i][j]);
        }
        printf("\n");
    }
}
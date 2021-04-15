/**
 * @file matrix_calculations.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Source file to perform matrix calculations
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<float.h>
#include<limits.h>
#include "matrix.h"
#include "calcy.h"


/**
 * @brief Function to add two matrices of integer values.
 * 
 * @param mat1 
 * @param mat2 
 * @param res_mat 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixSum(long int** mat1, long int** mat2, long int** res_mat, int r1, int c1, int r2, int c2, int r3, int c3){
    if(r1!=r2 || c1!=c2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                res_mat[i][j] = (long int)INFINITY;
            }
        }
        return ERROR_OUT_OF_RANGE;
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            res_mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to add two matrices of real values.
 * 
 * @param matd1 
 * @param matd2 
 * @param res_matd 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixSumDouble(double** matd1, double** matd2, double** res_matd, int r1, int c1, int r2, int c2, int r3, int c3){
    
    if(r1!=r2 || c1!=c2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                res_matd[i][j] = INFINITY;
            }
        }
        return ERROR_OUT_OF_RANGE;
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            res_matd[i][j] = matd1[i][j] + matd2[i][j];
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to subtract two matrices of integer values.
 * 
 * @param mat1 
 * @param mat2 
 * @param res_mat 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixDifference(long int** mat1, long int** mat2, long int** res_mat, int r1, int c1, int r2, int c2, int r3, int c3){

    if(r1!=r2 || c1!=c2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                res_mat[i][j] = (long int)INFINITY;
            }
        }
        return ERROR_OUT_OF_RANGE;
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            res_mat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to subtract two matrices of real values.
 * 
 * @param matd1 
 * @param matd2 
 * @param res_matd 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixDifferenceDouble(double** matd1, double** matd2, double** res_matd, int r1, int c1, int r2, int c2, int r3, int c3){
    
    if(r1!=r2 || c1!=c2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                res_matd[i][j] = INFINITY;
            }
        }
        return ERROR_OUT_OF_RANGE;
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            res_matd[i][j] = matd1[i][j] - matd2[i][j];
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to multiply two matrices of integer values.
 * 
 * @param mat1 
 * @param mat2 
 * @param res_mat 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixProduct(long int** mat1, long int** mat2, long int** res_mat, int r1, int c1, int r2, int c2, int r3, int c3){
    
    if(c1!=r2){
        for(int i=0; i<r3; i++){
            for(int j=0; j<c3; j++){
                res_mat[i][j] = (long int)INFINITY;
            }
        }
        return ERROR_OUT_OF_RANGE;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res_mat[i][j]=0;
            for(int k=0;k<c1;k++){
                res_mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to multiply two matrices of real values.
 * 
 * @param matd1 
 * @param matd2 
 * @param res_matd 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixProductDouble(double** matd1, double** matd2, double** res_matd, int r1, int c1, int r2, int c2, int r3, int c3){

    if(c1!=r2){
        for(int i=0; i<r3; i++){
            for(int j=0; j<c3; j++){
                res_matd[i][j] = INFINITY;
            }
        }
        return ERROR_OUT_OF_RANGE;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res_matd[i][j]=0;
            for(int k=0;k<c1;k++){
                res_matd[i][j] += matd1[i][k] * matd2[k][j];
            }
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to transpose a matrix of integer values.
 * 
 * @param mat1 
 * @param res_mat 
 * @param r1 
 * @param c1 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixTranspose(long int** mat1, long int** res_mat, int r1, int c1, int r3, int c3){
    
    for (int i = 0; i < r1; ++i){
        for (int j = 0; j < c1; ++j){
            res_mat[j][i] = mat1[i][j];
        }
    }
    return SUCCESS;
}


/**
 * @brief Function to transpose a matrix of real values.
 * 
 * @param matd1 
 * @param res_matd 
 * @param r1 
 * @param c1 
 * @param r3 
 * @param c3 
 * @return error_t 
 */
error_t matrixTransposeDouble(double** matd1,double** res_matd, int r1, int c1,int r3, int c3){

    for (int i = 0; i < r1; ++i){
        for (int j = 0; j < c1; ++j){
            res_matd[j][i] = matd1[i][j];
        }
    }
    return SUCCESS;
}

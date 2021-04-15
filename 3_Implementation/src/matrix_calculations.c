#include<stdlib.h>
#include<stdio.h>
// #include<string.h>
#include<math.h>
#include<float.h>
#include<limits.h>
// #include "../inc/calc.h"
// #include "calc.h"
#include "../inc/matrix.h"
#include "../inc/calcy.h"
// #include "../inc/delay.h"



/* void matrixInputInteger(long int** mat1, long int** mat2, int r1, int c1, int r2, int c2){
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
} */



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

    // int r, c;  //, r2, c2;
    // printf("\nInteger Matrix Addition:\n\nEnter the dimensions of the matrix:\n");
    // scanf("%d", &r);
    // scanf("%d", &c);

    // printf("\nEnter the number of rows and columns of the second matrix:\n");
    // scanf("%d", &r1);
    // scanf("%d", &c1);
    
    // printf("\n");
    
    // int matrix_1[r][c], matrix_2[r][c], sum[r][c];

    // int **matrix_1 = (int **)malloc(r * sizeof(int *));
    // for (int i = 0; i < r; i++)
    //     matrix_1[i] = (int *)malloc(c * sizeof(int));
    // int **matrix_2 = (int **)malloc(r * sizeof(int *));
    // for (int i = 0; i < r; i++)
    //     matrix_2[i] = (int *)malloc(c * sizeof(int));

    
    // printf("\nEnter the elements of the first matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%d", &matrix_1[i][j]);
    //     }
    // }
    // printf("\nEnter the elements of the second matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%d", &matrix_2[i][j]);
    //     }
    // }
    
    // inputInteger(matrix_1, matrix_2, r, c, -1, -1);

    // int sum[r][c];

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
    //     }
    // }
    
    // system("cls");

    // printf("\nFirst matrix:\n");

    // printInteger(matrix_1, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("\nSecond matrix:\n");

    // printInteger(matrix_2, r, r);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", matrix_2[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("\n Sum of the matrices:\n");

    // printInteger(sum, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", sum[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixSumDouble(double** matd1, double** matd2, double** res_matd, int r1, int c1, int r2, int c2, int r3, int c3){
    // int r, c;  //, r2, c2;
    // printf("\nDecimal Matrix Addition:\n\nEnter the dimensions of the matrix:\n");
    // scanf("%d", &r);
    // scanf("%d", &c);
    // printf("\nEnter the number of rows and columns of the second matrix:\n");
    // scanf("%d", &r1);
    // scanf("%d", &c1);
    
    // printf("\n");

    // double matrix_1[r][c], matrix_2[r][c], sum[r][c];
    // printf("\nEnter the elements of the first matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%lf", &matrix_1[i][j]);
    //     }
    // }
    // printf("\nEnter the elements of the second matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%lf", &matrix_2[i][j]);
    //     }
    // }

    // double **matrix_1 = (double **)malloc(r * sizeof(double *));
    // for (int i = 0; i < r; i++)
        // matrix_1[i] = (double *)malloc(c * sizeof(double));
    // double **matrix_2 = (double **)malloc(r * sizeof(double *));
    // for (int i = 0; i < r; i++)
        // matrix_2[i] = (double *)malloc(c * sizeof(double));

    // inputDouble(matrix_1, matrix_2, r, c, -1, -1);
    
    // double sum[r][c];

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

    // system("cls");

    // printf("\nFirst matrix:\n");
    // printDouble(matrix_1, r, c);
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("\nSecond matrix:\n");
    // printDouble(matrix_2, r, c);
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", matrix_2[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n Sum of the matrices:\n");
    // printDouble(sum, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", sum[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixDifference(long int** mat1, long int** mat2, long int** res_mat, int r1, int c1, int r2, int c2, int r3, int c3){
    // int r, c;  //, r2, c2;
    // printf("\nDecimal Matrix Addition:\n\nEnter the dimensions of the matrix:\n");
    // scanf("%d", &r);
    // scanf("%d", &c);
    // printf("\nEnter the number of rows and columns of the second matrix:\n");
    // scanf("%d", &r1);
    // scanf("%d", &c1);
    
    // printf("\n");

    // int matrix_1[r][c], matrix_2[r][c], difference[r][c];
    // printf("\nEnter the elements of the first matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%d", &matrix_1[i][j]);
    //     }
    // }
    // printf("\nEnter the elements of the second matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%d", &matrix_2[i][j]);
    //     }
    // }

    // int **matrix_1 = (int **)malloc(r * sizeof(int *));
    // for (int i = 0; i < r; i++)
    //     matrix_1[i] = (int *)malloc(c * sizeof(int));
    // int **matrix_2 = (int **)malloc(r * sizeof(int *));
    // for (int i = 0; i < r; i++)
        // matrix_2[i] = (int *)malloc(c * sizeof(int));
    
    // inputInteger(matrix_1, matrix_2, r, c, -1, -1);

    // int difference[r][c];

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

    // system("cls");

    // printf("\nFirst matrix:\n");
    // printInteger(matrix_1, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nSecond matrix:\n");
    // printInteger(matrix_2, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", matrix_2[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n Difference of the matrices:\n");
    // printInteger(difference, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", difference[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixDifferenceDouble(double** matd1, double** matd2, double** res_matd, int r1, int c1, int r2, int c2, int r3, int c3){
    // int r, c;  //, r2, c2;
    // printf("\nDecimal Matrix Addition:\n\nEnter the dimensions of the matrix:\n");
    // scanf("%d", &r);
    // scanf("%d", &c);
    // printf("\nEnter the number of rows and columns of the second matrix:\n");
    // scanf("%d", &r1);
    // scanf("%d", &c1);
   
    // printf("\n");

    // double matrix_1[r][c], matrix_2[r][c], difference[r][c];
    // printf("\nEnter the elements of the first matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%lf", &matrix_1[i][j]);
    //     }
    // }
    // printf("\nEnter the elements of the second matrix:\n");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%lf", &matrix_2[i][j]);
    //     }
    // }

    // double **matrix_1 = (double **)malloc(r * sizeof(double *));
    // for (int i = 0; i < r; i++)
        // matrix_1[i] = (double *)malloc(c * sizeof(double));
    // double **matrix_2 = (double **)malloc(r * sizeof(double *));
    // for (int i = 0; i < r; i++)
        // matrix_2[i] = (double *)malloc(c * sizeof(double));
    
    // inputDouble(matrix_1, matrix_2, r, c, -1, -1);
    
    // double difference[r][c];

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

    // system("cls");

    // printf("\nFirst matrix:\n");
    // printDouble(matrix_1, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("\nSecond matrix:\n");
    // printDouble(matrix_2, r, c);
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", matrix_2[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n Difference of the matrices:\n");
    // printDouble(difference, r, c);

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", difference[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixProduct(long int** mat1, long int** mat2, long int** res_mat, int r1, int c1, int r2, int c2, int r3, int c3){
    // int r1, c1, r2, c2;
    // printf("\nInteger Matrix Multiplication:\n");
    // printf("\nEnter the dimensions of the first matrix:\n");
    // scanf("%d", &r1);
    // scanf("%d", &c1);
    // printf("\nEnter the dimensions of the second matrix:\n");
    // scanf("%d", &r2);
    // scanf("%d", &c2);

    // int matrix_1[r1][c1], matrix_2[r2][c2], product[r1][c2];
    // printf("\nEnter the elements of the first matrix:\n");
    // for(int i=0; i<r1; i++){
    //     for(int j=0; j<c1; j++){
    //         scanf("%lf", &matrix_1[i][j]);
    //     }
    // }
    // printf("\nEnter the elements of the second matrix:\n");
    // for(int i=0; i<r2; i++){
    //     for(int j=0; j<c2; j++){
    //         scanf("%lf", &matrix_2[i][j]);
    //     }
    // }

    // int **matrix_1 = (int **)malloc(r1 * sizeof(int *));
    // for (int i = 0; i < r1; i++)
    //     matrix_1[i] = (int *)malloc(c1 * sizeof(int));
    // int **matrix_2 = (int **)malloc(r2 * sizeof(int *));
    // for (int i = 0; i < r2; i++)
    //     matrix_2[i] = (int *)malloc(c2 * sizeof(int));
    
    // inputInteger(matrix_1, matrix_2, r1, c1, r2, c2);

    // int product[r1][c2];

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

    // system("cls");

    // printf("\nFirst matrix:\n");
    // printInteger(matrix_1, r1, c1);

    // for(int i=0; i<r1; i++){
    //     for(int j=0; j<c1; j++){
    //         printf("%d ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nSecond matrix:\n");
    // printInteger(matrix_2, r2, c2);

    // for(int i=0; i<r2; i++){
    //     for(int j=0; j<c2; j++){
    //         printf("%d ", matrix_2[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n Product of the matrices:\n");
    // printInteger(product, r1, c2);

    // for(int i=0; i<r1; i++){
    //     for(int j=0; j<c2; j++){
    //         printf("%d ", product[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixProductDouble(double** matd1, double** matd2, double** res_matd, int r1, int c1, int r2, int c2, int r3, int c3){
    // int r1, c1, r2, c2;
    // printf("\nInteger Matrix Multiplication:\n");
    // printf("\nEnter the dimensions of the first matrix:\n");
    // scanf("%d", &r1);
    // scanf("%d", &c1);
    // printf("\nEnter the dimensions of the second matrix:\n");
    // scanf("%d", &r2);
    // scanf("%d", &c2);

    // int matrix_1[r1][c1], matrix_2[r2][c2], product[r1][c2];
    // printf("\nEnter the elements of the first matrix:\n");
    // for(int i=0; i<r1; i++){
    //     for(int j=0; j<c1; j++){
    //         scanf("%lf", &matrix_1[i][j]);
    //     }
    // }
    // printf("\nEnter the elements of the second matrix:\n");
    // for(int i=0; i<r2; i++){
    //     for(int j=0; j<c2; j++){
    //         scanf("%lf", &matrix_2[i][j]);
    //     }
    // }

    // double **matrix_1 = (double **)malloc(r1 * sizeof(double *));
    // for (int i = 0; i < r1; i++)
    //     matrix_1[i] = (double *)malloc(c1 * sizeof(double));
    // double **matrix_2 = (double **)malloc(r2 * sizeof(double *));
    // for (int i = 0; i < r2; i++)
    //     matrix_2[i] = (double *)malloc(c2 * sizeof(double));
    
    // inputDouble(matrix_1, matrix_2, r1, c1, r2, c2);
      
    // double product[r1][c2];

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

    // system("cls");

    // printf("\nFirst matrix:\n");
    // printDouble(matrix_1, r1, c1);
    
    // for(int i=0; i<r1; i++){
    //     for(int j=0; j<c1; j++){
    //         printf("%lf ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nSecond matrix:\n");
    // printDouble(matrix_2, r2, c2);
    
    // for(int i=0; i<r2; i++){
    //     for(int j=0; j<c2; j++){
    //         printf("%lf ", matrix_2[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n Product of the matrices:\n");
    // printDouble(product, r1, c2);

    // for(int i=0; i<r1; i++){
    //     for(int j=0; j<c2; j++){
    //         printf("%lf ", product[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixTranspose(long int** mat1, long int** res_mat, int r1, int c1, int r3, int c3){
    // int r, c;

    // printf("\nInteger Matrix Transpose:\n\nEnter the dimensions of the matrix:\n");
    // scanf("%d", &r);
    // scanf("%d", &c);

    // int matrix[r][c], transpose[c][r];
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%d", matrix[i][j]);
    //     }
    // }

    for (int i = 0; i < r1; ++i){
        for (int j = 0; j < c1; ++j){
            res_mat[j][i] = mat1[i][j];
        }
    }
    return SUCCESS;
    
    // system("cls");
    // printf("\nInput matrix:\n");
    // printInteger(matrix, r, c);
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nTranspose of the matrix:\n");
    // printInteger(transpose, c, r);
    
    // for(int i=0; i<c; i++){
    //     for(int j=0; j<r; j++){
    //         printf("%d ", transpose[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nExiting in 5 seconds...");
    // delay(5);
}


error_t matrixTransposeDouble(double** matd1,double** res_matd, int r1, int c1,int r3, int c3){
    // int r, c;

    // printf("\nDecimal Matrix Transpose:\n\nEnter the dimensions of the matrix:\n");
    // scanf("%d", &r);
    // scanf("%d", &c);

    // double matrix[r][c], transpose[c][r];
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         scanf("%lf", matrix[i][j]);
    //     }
    // }

    for (int i = 0; i < r1; ++i){
        for (int j = 0; j < c1; ++j){
            res_matd[j][i] = matd1[i][j];
        }
    }
    return SUCCESS;
    
    // system("cls");
    // printf("\nInput matrix:\n");
    // printDouble(matrix, r, c);
    
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%lf ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nTranspose of the matrix:\n");
    // printDouble(transpose, c, r);
    
    // for(int i=0; i<c; i++){
    //     for(int j=0; j<r; j++){
    //         printf("%lf ", transpose[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nExiting in 5 seconds...");
    // delay(5);
}
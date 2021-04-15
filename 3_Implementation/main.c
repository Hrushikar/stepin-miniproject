/**
 * @file main.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief This is a simple calculator application/utility which can perfrom 3 main calculations: Simple calculations, Matrix calculations and Trigonometric calculations
 * @version 2.0
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include "./src/matrixIO.c"
#include "calcy.h"
#include "calc.h"
#include "matrix.h"
#include "trigonometry.h"


/**
 * @brief function prototype to take input for the matrix of type "int"
 * 
 * @param mat1 
 * @param mat2 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 */
void matrixInputInteger(long int** mat1, long int** mat2, int r1, int c1, int r2, int c2);

/**
 * @brief function prototype to take input for the matrix of type "double" 
 * 
 * @param mat1 
 * @param mat2 
 * @param r1 
 * @param c1 
 * @param r2 
 * @param c2 
 */
void matrixInputDouble(double** mat1, double** mat2, int r1, int c1, int r2, int c2);

/**
 * @brief function prototype to print the matrix of type "int"
 * 
 * @param mat 
 * @param r 
 * @param c 
 */
void matrixPrintInteger(long int** mat, int r, int c);

/**
 * @brief function prototype to print the matrix of type "double"
 * 
 * @param mat 
 * @param r 
 * @param c 
 */
void matrixPrintDouble(double** mat, int r, int c);


/**
 * @brief main function
 * 
 * @return int 
 */
int main(){
    int ch;
    long int a, b, res;
    int r1, c1, r2, c2, r3, c3;

    long int **mat1, **mat2, **res_mat;

    double **matd1, **matd2, **res_matd;

    double ad, bd, cd, resd1, resd2;
    int calc_type;
    int datatype;
    float angle, val;
    error_t error_res;
    printf("\n********Calculator********\n\n");

    printf("\nType of calculations for you to perform:\n");
    printf("\n1. Simple Calculations\n2. Matrix Calculations\n3. Trigonometric Calculations\n**************************\n\nEnter your choice: ");
    scanf("%d", &calc_type);


    switch (calc_type)
    {
    case 1:
        printf("\nSimple calculations available for you to perform:\n");
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide recursively\n5. Divide only 2 numbers\n6. Find the solutions of a quadratic equation\n**************************\n\nEnter your choice: ");
        scanf("%d", &ch);
        
        switch(ch){
            case 1:
                printf("\nOperation: Addition\n");
                printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            
                scanf("%d", &datatype);
                switch (datatype)
                {
                    case 1:
                        printf("\nInteger Addition:\n\nEnter the numbers you want to add: ");
                        scanf("%ld", &a);
                        scanf("%ld", &b);
                        
                        error_res = add(&a, &b, &res);

                        if(ERROR_OUT_OF_RANGE == error_res){
                            printf("\nSorry. Addition cannot be performed on the given set of numbers.\n");
                        }

                        else if(SUCCESS == error_res){
                            printf("\nSum of %ld and %ld is: %ld\n", a, b, res);
                        }

                        break;

                    case 2:
                        printf("\nDecimal Addition:\n\nEnter the numbers you want to add: ");
                        scanf("%lf", &ad);
                        scanf("%lf", &bd);
                        
                        error_res = addDouble(&ad, &bd, &cd);

                        if(ERROR_OUT_OF_RANGE == error_res){
                            printf("\nSorry. Addition cannot be performed on the given set of numbers.\n");
                        }

                        else if(SUCCESS == error_res){
                            printf("\nSum of %lf and %lf is: %lf\n", ad, bd, cd);
                        }

                        break;
            
                    default:
                        printf("\nSorry. Value not accepted\n");
                        break;
                }
                break;
            case 2:
                printf("\nOperation: Subtraction\n");
                printf("\nInput datatype:\n1. Integer\n2. Decimal\nSelect the datatype of your input: ");

                scanf("%d", &datatype);
                switch (datatype){
                    case 1:
                        printf("\nInteger Subtraction:\n\nEnter the numbers you want to subtract:\n");
                        scanf("%ld", &a);
                        scanf("%ld", &b);

                        error_res = subtract(&a, &b, &res);
                        
                        if(ERROR_OUT_OF_RANGE == error_res){
                            printf("\nSorry. Subtraction cannot be performed on the given set of numbers.\n");
                        }

                        else if(SUCCESS == error_res){
                            printf("\nDifference of %ld and %ld is: %ld\n", a, b, res);
                        }

                        break;

                    case 2:
                        printf("\nDecimal Subtraction:\n\nEnter the numbers you want to subtract:\n");
                        scanf("%lf", &ad);
                        scanf("%lf", &bd);
                        
                        error_res = subtractDouble(&ad, &bd, &cd);
                        
                        if(ERROR_OUT_OF_RANGE == error_res){
                            printf("\nSorry. Subtraction cannot be performed on the given set of numbers.\n");
                        }
                        
                        else if(SUCCESS == error_res){
                            printf("\nDifference of %lf and %lf is: %lf\n", ad, bd, cd);
                        }
                        
                        break;

                    default:
                        printf("\nSorry. Value not accepted\n");
                        break;
                }
                break;
            case 3:
                printf("\nOperation: Multiplication\n");
                printf("\nInput datatype:\n1. Integer\n2. Decimal\nSelect the datatype of your input: ");
                
                scanf("%d", &datatype);
                switch (datatype)
                {
                    case 1:
                        printf("\nInteger Multiplication:\n\nEnter the numbers you want to multiply:\n");
                        scanf("%ld", &a);
                        scanf("%ld", &b);
                        
                        error_res = multiply(&a, &b, &res);

                        if(ERROR_OUT_OF_RANGE == error_res){
                            printf("\nSorry. Multiplication cannot be performed for the given set of numbers/\n");
                        }

                        else if(SUCCESS == error_res){
                            printf("\nProduct of %ld and %ld is: %ld\n", a, b, res);
                        }

                        break;

                    case 2:
                        printf("\nDecimal Multiplication:\n\nEnter the numbers you want to multiply:\n");
                        scanf("%lf", &ad);
                        scanf("%lf", &bd);

                        error_res = multiplyDouble(&ad, &bd, &cd);

                        if(ERROR_OUT_OF_RANGE == error_res){
                            printf("\nSorry. Multiplication cannot be performed for the given set of numbers/\n");
                        }

                        else if(SUCCESS == error_res){
                            printf("\nProduct of %lf and %lf is: %lf\n", ad, bd, cd);
                        }

                        break;

                    default:
                        printf("\nSorry. Value not accepted\n");
                        break;
                }
                break;
            case 4:
                printf("\nOperation: Division\n");
                printf("\nEnter the numbers you want to divide:\n");
                scanf("%lf", &ad);
                scanf("%lf", &bd);

                error_res = divide(&ad, &bd, &cd);

                if(ERROR_OUT_OF_RANGE == error_res){
                    printf("\nSorry. Division cannot be performed for the given set of numbers\n");
                }

                else if(ERROR_DIV_BY_ZERO == error_res){
                    printf("\nDivision by zero is not permitted.\n");
                }

                else if(SUCCESS == error_res){
                    printf("\nQuotient of %lf divided by %lf is: %lf\n", ad, bd, cd);
                }
                
                break;

            case 5:
                printf("\nOperation: Solutions of a quadratic equation\n");
                printf("\nEnter the coefficients of x**2 (a), x**1 (b) and x**0 (c): ");
                scanf("%lf", &ad);
                scanf("%lf", &bd);
                scanf("%lf", &cd);

                error_res = solveQuadratic(&ad, &bd, &cd, &resd1, &resd2);

                
                if(ERROR_NO_EQUATION_POSSIBLE == error_res){
                    printf("\nWith the given set of coefficients, no equation can be made. Please try again.\n");
                }
                
                else if(ERROR_NO_REAL_SOLUTION == error_res){
                    printf("\nWith the given set of coefficients, the equation does not have a real solution. Please try again.\n");
                }
                
                else if(SUCCESS == error_res){
                    printf("\nroot 1 of the equation: %lf\n", resd1);
                    printf("\nroot 2 of the equation: %lf\n", resd2);
                }
                
                break;

            default:
                printf("\nSorry. Value not accepted\n");
                break;
        }
        break;

    case 2:
        printf("\nMatrix calculations available for you to perform:\n");
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n**************************\n\nEnter your choice: ");
        scanf("%d", &ch);
        
        switch (ch)
        {
        case 1:
            printf("\nOperation: Matrix Addition\n");
            printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            scanf("%d", &datatype);
            switch (datatype)
            {
                case 1:
                    printf("\nInteger Matrix Addition:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    r2 = r1;
                    c2 = c1;
                    r3 = r1;
                    c3 = c1;

                    mat1 = (long int **)malloc(r1 * sizeof(long int *));
                    for (int i = 0; i < r1; i++){
                        mat1[i] = (long int *)malloc(c1 * sizeof(long int));
                    }

                    mat2 = (long int **)malloc(r2 * sizeof(long int *));
                    for (int i = 0; i < r2; i++){
                        mat2[i] = (long int *)malloc(c2 * sizeof(long int));
                    }
    
                    res_mat = (long int **)malloc(r3 * sizeof(long int *));
                    for (int i = 0; i < r3; i++){
                        res_mat[i] = (long int *)malloc(c3 * sizeof(long int));
                    }

                    matrixInputInteger(mat1, mat2, r1, c1, -1, -1);

                    error_res = matrixSum(mat1, mat2, res_mat, r1, c1, r2, c2, r3,c3);

                    if(ERROR_OUT_OF_RANGE == error_res){
                        printf("\nInput shapes does not match. Please try again.\n");
                    }

                    else if(SUCCESS==error_res){
                        printf("\nFirst matrix:\n");
                        matrixPrintInteger(mat1, r1, c1);
                        printf("\n");
                        printf("\nSecond matrix:\n");
                        matrixPrintInteger(mat2, r2, c2);
                        printf("\n");
                        printf("\nSum of the matrices:\n");
                        matrixPrintInteger(res_mat, r3, c3);
                        printf("\n");
                    }
                    
                    free(mat1);
                    free(mat2);
                    free(res_mat);
                    break;

                case 2:
                    printf("\nDecimal Matrix Addition:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    r2 = r1;
                    c2 = c1;
                    r3 = r1;
                    c3 = c1;

                    matd1 = (double **)malloc(r1 * sizeof(double *));
                    for (int i = 0; i < r1; i++){
                        matd1[i] = (double *)malloc(c1 * sizeof(double));
                    }
    
                    matd2 = (double **)malloc(r2 * sizeof(double *));
                    for (int i = 0; i < r2; i++){
                        matd2[i] = (double *)malloc(c2 * sizeof(double));
                    }
    
                    res_matd = (double **)malloc(r3 * sizeof(double *));
                    for (int i = 0; i < r3; i++){
                        res_matd[i] = (double *)malloc(c3 * sizeof(double));
                    }

                    matrixInputDouble(matd1, matd2, r1, c1, -1, -1);

                    error_res = matrixSumDouble(matd1, matd2, res_matd, r1, c1, r2, c2, r3,c3);

                    if(ERROR_OUT_OF_RANGE == error_res){
                        printf("\nInput shapes does not match. Please try again.\n");
                    }

                    else if(SUCCESS==error_res){
                        printf("\nFirst matrix:\n");
                        matrixPrintDouble(matd1, r1, c1);
                        printf("\n");
                        printf("\nSecond matrix:\n");
                        matrixPrintDouble(matd2, r2, c2);
                        printf("\n");
                        printf("\nSum of the matrices:\n");
                        matrixPrintDouble(res_matd, r3, c3);
                        printf("\n");
                    }
                    free(matd1);
                    free(matd2);
                    free(res_matd);
                    break;
            
                default:
                    printf("\nSorry. Value not accepted\n");
                    break;
            }
            break;
        case 2:
            printf("\nOperation: Matrix Subtraction\n");
            printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            scanf("%d", &datatype);
            switch (datatype)
            {
                case 1:
                    printf("\nInteger Matrix Subtraction:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    r2 = r1;
                    c2 = c1;
                    r3 = r1;
                    c3 = c1;

                    mat1 = (long int **)malloc(r1 * sizeof(long int *));
                    for (int i = 0; i < r1; i++){
                        mat1[i] = (long int *)malloc(c1 * sizeof(long int));
                    }

                    mat2 = (long int **)malloc(r2 * sizeof(long int *));
                    for (int i = 0; i < r2; i++){
                        mat2[i] = (long int *)malloc(c2 * sizeof(long int));
                    }
    
                    res_mat = (long int **)malloc(r3 * sizeof(long int *));
                    for (int i = 0; i < r3; i++){
                        res_mat[i] = (long int *)malloc(c3 * sizeof(long int));
                    }

                    matrixInputInteger(mat1, mat2, r1, c1, -1, -1);

                    error_res = matrixDifference(mat1, mat2, res_mat, r1, c1, r2, c2, r3,c3);

                    if(ERROR_OUT_OF_RANGE == error_res){
                        printf("\nInput shapes does not match. Please try again.\n");
                    }

                    else if(SUCCESS==error_res){
                        printf("\nFirst matrix:\n");
                        matrixPrintInteger(mat1, r1, c1);
                        printf("\n");
                        printf("\nSecond matrix:\n");
                        matrixPrintInteger(mat2, r2, c2);
                        printf("\n");
                        printf("\nDifference of the matrices:\n");
                        matrixPrintInteger(res_mat, r3, c3);
                        printf("\n");
                    }
                    free(mat1);
                    free(mat2);
                    free(res_mat);
                    break;

                case 2:
                    printf("\nDecimal Matrix Subtraction:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    r2 = r1;
                    c2 = c1;
                    r3 = r1;
                    c3 = c1;

                    matd1 = (double **)malloc(r1 * sizeof(double *));
                    for (int i = 0; i < r1; i++){
                        matd1[i] = (double *)malloc(c1 * sizeof(double));
                    }
    
                    matd2 = (double **)malloc(r2 * sizeof(double *));
                    for (int i = 0; i < r2; i++){
                        matd2[i] = (double *)malloc(c2 * sizeof(double));
                    }
    
                    res_matd = (double **)malloc(r3 * sizeof(double *));
                    for (int i = 0; i < r3; i++){
                        res_matd[i] = (double *)malloc(c3 * sizeof(double));
                    }

                    matrixInputDouble(matd1, matd2, r1, c1, -1, -1);

                    error_res = matrixDifferenceDouble(matd1, matd2, res_matd, r1, c1, r2, c2, r3,c3);

                    if(ERROR_OUT_OF_RANGE == error_res){
                        printf("\nInput shapes does not match. Please try again.\n");
                    }

                    else if(SUCCESS==error_res){
                        printf("\nFirst matrix:\n");
                        matrixPrintDouble(matd1, r1, c1);
                        printf("\n");
                        printf("\nSecond matrix:\n");
                        matrixPrintDouble(matd2, r2, c2);
                        printf("\n");
                        printf("\nDifference of the matrices:\n");
                        matrixPrintDouble(res_matd, r3, c3);
                        printf("\n");
                    }
                    free(matd1);
                    free(matd2);
                    free(res_matd);
                    break;
            
                default:
                    printf("\nSorry. Value not accepted\n");
                    break;
            }
            break;
        case 3:
            printf("\nOperation: Matrix Multiplication\n");
            printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            scanf("%d", &datatype);
            switch (datatype)
            {
                case 1:
                    printf("\nInteger Matrix Multiplication:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    scanf("%d", &r2);
                    scanf("%d", &c2);
                    r3 = r1;
                    c3 = c2;

                    mat1 = (long int **)malloc(r1 * sizeof(long int *));
                    for (int i = 0; i < r1; i++){
                        mat1[i] = (long int *)malloc(c1 * sizeof(long int));
                    }

                    mat2 = (long int **)malloc(r2 * sizeof(long int *));
                    for (int i = 0; i < r2; i++){
                        mat2[i] = (long int *)malloc(c2 * sizeof(long int));
                    }
    
                    res_mat = (long int **)malloc(r3 * sizeof(long int *));
                    for (int i = 0; i < r3; i++){
                        res_mat[i] = (long int *)malloc(c3 * sizeof(long int));
                    }

                    matrixInputInteger(mat1, mat2, r1, c1, r2, c2);

                    error_res = matrixProduct(mat1, mat2, res_mat, r1, c1, r2, c2, r3,c3);

                    if(ERROR_OUT_OF_RANGE == error_res){
                        printf("\nInput shapes are no-congruent. Please try again.\n");
                    }

                    else if(SUCCESS==error_res){
                        printf("\nFirst matrix:\n");
                        matrixPrintInteger(mat1, r1, c1);
                        printf("\n");
                        printf("\nSecond matrix:\n");
                        matrixPrintInteger(mat2, r2, c2);
                        printf("\n");
                        printf("\nProduct of the matrices:\n");
                        matrixPrintInteger(res_mat, r3, c3);
                        printf("\n");
                    }
                    free(mat1);
                    free(mat2);
                    free(res_mat);
                    break;

                case 2:
                    printf("\nDecimal Matrix Multiplication:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    scanf("%d", &r2);
                    scanf("%d", &c2);
                    r3 = r1;
                    c3 = c2;

                    matd1 = (double **)malloc(r1 * sizeof(double *));
                    for (int i = 0; i < r1; i++){
                        matd1[i] = (double *)malloc(c1 * sizeof(double));
                    }
    
                    matd2 = (double **)malloc(r2 * sizeof(double *));
                    for (int i = 0; i < r2; i++){
                        matd2[i] = (double *)malloc(c2 * sizeof(double));
                    }
    
                    res_matd = (double **)malloc(r3 * sizeof(double *));
                    for (int i = 0; i < r3; i++){
                        res_matd[i] = (double *)malloc(c3 * sizeof(double));
                    }

                    matrixInputDouble(matd1, matd2, r1, c1, r2, c2);

                    error_res = matrixProductDouble(matd1, matd2, res_matd, r1, c1, r2, c2, r3,c3);

                    if(ERROR_OUT_OF_RANGE == error_res){
                        printf("Input shapes are non-congruent. Please try again.");
                    }

                    else if(SUCCESS==error_res){
                        printf("\nFirst matrix:\n");
                        matrixPrintDouble(matd1, r1, c1);
                        printf("\n");
                        printf("\nSecond matrix:\n");
                        matrixPrintDouble(matd2, r2, c2);
                        printf("\n");
                        printf("\nProduct of the matrices:\n");
                        matrixPrintDouble(res_matd, r3, c3);
                        printf("\n");
                    }
                    free(matd1);
                    free(matd2);
                    free(res_matd);
                    break;
            
                default:
                    printf("\nSorry. Value not accepted\n");
                    break;
            }
            break;
        case 4:
            printf("\nOperation: Matrix Transposition\n");
            printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            scanf("%d", &datatype);
            switch (datatype)
            {
                case 1:
                    printf("\nInteger Matrix Transpose:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    r3 = c1;
                    c3 = r1;

                    mat1 = (long int **)malloc(r1 * sizeof(long int *));
                    for (int i = 0; i < r1; i++){
                        mat1[i] = (long int *)malloc(c1 * sizeof(long int));
                    }
    
                    res_mat = (long int **)malloc(r3 * sizeof(long int *));
                    for (int i = 0; i < r3; i++){
                        res_mat[i] = (long int *)malloc(c3 * sizeof(long int));
                    }

                    printf("\nEnter the elements of the matrix:\n");
                    for(int i=0; i<r1; i++){
                        for(int j=0; j<c1; j++){
                            scanf("%ld", &mat1[i][j]);
                        }
                    }

                    error_res = matrixTranspose(mat1, res_mat, r1, c1, r3, c3);

                    if(SUCCESS == error_res){
                        printf("\nMatrix:\n");
                        matrixPrintInteger(mat1, r1, c1);
                        printf("\n");
                        printf("\nTranspose of the matrix:\n");
                        matrixPrintInteger(res_mat, r3, c3);
                        printf("\n");
                    }
                    free(mat1);
                    free(res_mat);
                    break;

                case 2:
                    printf("\nDecimal Matrix Transpose:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    r3 = c1;
                    c3 = r1;

                    matd1 = (double **)malloc(r1 * sizeof(double *));
                    for (int i = 0; i < r1; i++){
                        matd1[i] = (double *)malloc(c1 * sizeof(double));
                    }
    
                    res_matd = (double **)malloc(r3 * sizeof(double *));
                    for (int i = 0; i < r3; i++){
                        res_matd[i] = (double *)malloc(c3 * sizeof(double));
                    }

                    printf("\nEnter the elements of the matrix:\n");
                    for(int i=0; i<r1; i++){
                        for(int j=0; j<c1; j++){
                            scanf("%lf", &matd1[i][j]);
                        }
                    }

                    error_res = matrixTransposeDouble(matd1, res_matd, r1, c1, r3, c3);

                    if(SUCCESS == error_res){
                        printf("\nMatrix:\n");
                        matrixPrintDouble(matd1, r1, c1);
                        printf("\n");
                        printf("\nTranspose of the matrix:\n");
                        matrixPrintDouble(res_matd, r3, c3);
                        printf("\n");
                    }
                    free(matd1);
                    free(res_matd);
                    break;
            
                default:
                    printf("\nSorry. Value not accepted\n");
                    break;
            }

            break;
        
        default:
            printf("\nSorry. Value not accepted\n");
            break;
        }

        break;
    
    case 3:
        printf("\nTrigonometric calculations available for you to perform:\n");
        printf("\n1. Sine\n2. Cosine\n3. Tangent\n4. Cosecant\n5. Secant\n6. Cotangent\n**************************\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);

                error_res = sine(&angle, &val);
                
                if(SUCCESS==error_res){
                    printf("\nsin(%f)  : %f", angle, val);
                }
                
                break;

            case 2:
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);

                error_res = cosine(&angle, &val);
                
                if(SUCCESS==error_res){
                    printf("\ncos(%f)  : %f", angle, val);
                }
                
                break;

            case 3:
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);

                error_res = tangent(&angle, &val);

                if(SUCCESS==error_res){
                    printf("\ntan(%f)  : %f", angle, val);
                }

                break;

            case 4:
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                
                error_res = cosecant(&angle, &val);
                
                if(SUCCESS==error_res){
                    printf("\ncosec(%f)  : %f", angle, val);
                }

                break;

            case 5:
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);

                error_res = secant(&angle, &val);

                if(SUCCESS==error_res){
                    printf("\nsec(%f)  : %f", angle, val);
                }

                break;

            case 6:
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);

                error_res = cotangent(&angle, &val);

                if(SUCCESS==error_res){
                    printf("\ncot(%f)  : %f", angle, val);
                }

                break;

            default:
                printf("\nSorry. Value not accepted\n");
                break;
        }

        break;

    default:
        printf("\nSorry. Value not accepted\n");
        break;
    }
    return 0;
}

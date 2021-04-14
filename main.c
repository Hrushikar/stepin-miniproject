/**
 * @file main.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
#include<stdlib.h>

// #include "./src/calc.c"
#include "./inc/calcy.h"
#include "./inc/calc.h"
#include "./inc/matrix.h"
#include "./inc/trigonometry.h"

// #include "calc.h"
// void redefine_NUM(){
//     // #undef NUM
//     // #define NUM 0
//     NUM=0;
// }
// void add(void);
// void addDouble(void);
// void subtract(void);
// void subtractDouble(void);
// void multiply(void);
// void multiplyDouble(void);
// void divide(void);


// int main(){
//     printf("********Calculator********\n\n");
//     int a, b, answer, choice;
//     while(1)
//     {
//         printf("To add complex numbers press 1.\n");
//         printf("To subtract complex numbers press 2.\n");
//         printf("To multiply complex numbers press 3.\n");
//         printf("To divide complex numbers press 4.\n");
//         printf("To exit press 5.\n");
//         printf("Enter the number.\n");
//         scanf("%d", &choice);
//         if(choice == 1){
//             error_t res = complex_sum(&a,&b,&answer);
//         }
//         if(choice == 2){
//             error_t res = complex_diff(&a,&b,&answer);
//                     }
//         if(choice == 3){
//             error_t res = complex_mul(&a,&b,&answer);
//         }
//         if(choice == 4){
//             error_t res = complex_div(&a,&b,&answer);
//         }  
//         if(choice == 5){
//             break;
//         }
//     }
//     return 0;
// }


int main(){
    int ch;
    long int a, b, res; //, c
    int r1, c1, r2, c2, r3, c3;
    // int mat1[r1][c1], mat1[r2][c2], res_mat[r3][c3];

    long int **mat1, **mat2, **res_mat;
    /* mat1 = (long int **)malloc(r1 * sizeof(long int *));
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
    } */
    

    double **matd1, **matd2, **res_matd;
    /* matd1 = (double **)malloc(r1 * sizeof(double *));
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
    } */

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
        // system("cls");
        printf("\nSimple calculations available for you to perform:\n");
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide recursively\n5. Divide only 2 numbers\n6. Find the solutions of a quadratic equation\n**************************\n\nEnter your choice: ");
        scanf("%d", &ch);
        // system("cls");
        switch(ch){
            case 1:
                printf("\nOperation: Addition\n");
                printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            
                scanf("%d", &datatype);
                switch (datatype)
                {
                    case 1:
                        // system("cls");
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
                        // system("cls");
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
                        break;
                }
                break;
            case 2:
                printf("\nOperation: Subtraction\n");
                printf("\nInput datatype:\n1. Integer\n2. Decimal\nSelect the datatype of your input: ");
                // char datatype;
                scanf("%d", &datatype);
                switch (datatype){
                    case 1:
                        // system("cls");
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
                        // system("cls");
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
                        // error_res = subtractDouble(&ad, &bd, &cd);
                        
                        break;

                    default:
                        break;
                }
                break;
            case 3:
                printf("\nOperation: Multiplication\n");
                printf("\nInput datatype:\n1. Integer\n2. Decimal\nSelect the datatype of your input: ");
                // char datatype;
                scanf("%d", &datatype);
                switch (datatype)
                {
                    case 1:
                        // system("cls");
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
                        // system("cls");
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
                        break;
                }
                break;
            case 4:
                printf("\nOperation: Division\n");
                // system("cls");
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
            // case 5:
            //     printf("Operation: Division\n");
            //     // system("cls");
            //     divide2Num();
            //     break;
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
                break;
        }
        break;

    case 2:
        // system("cls");
        printf("\nMatrix calculations available for you to perform:\n");
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n**************************\n\nEnter your choice: ");
        scanf("%d", &ch);
        // system("cls");
        switch (ch)
        {
        case 1:
            printf("\nOperation: Matrix Addition\n");
            printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            scanf("%d", &datatype);
            switch (datatype)
            {
                case 1:
                    // system("cls");

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
                    
                    break;
                case 2:
                    // system("cls");
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
                    
                    // error_res = matrixSumDouble(matd1, matd2, res_matd, r1, c1, r2, c2, r3, c3);
                    break;
            
                default:
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
                    // system("cls");
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
                    
                    // error_res = matrixDifference(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3);
                    break;
                case 2:
                    // system("cls");
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
                    
                    // error_res = matrixDifferenceDouble(matd1, matd2, res_matd, r1, c1, r2, c2, r3, c3);
                    break;
            
                default:
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
                    // system("cls");
                    printf("\nInteger Matrix Multiplication:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    scanf("%d", &r2);
                    scanf("%d", &c2);
                    // r2 = r1;
                    // c2 = c1;
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
                    
                    // error_res = matrixProduct(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3);
                    break;
                case 2:
                    // system("cls");
                    printf("\nDecimal Matrix Multiplication:\n\nEnter the dimensions of the matrix:\n");
                    scanf("%d", &r1);
                    scanf("%d", &c1);
                    scanf("%d", &r2);
                    scanf("%d", &c2);
                    // r2 = r1;
                    // c2 = c1;
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
                    
                    // error_res = matrixProductDouble(matd1, matd2, res_matd, r1, c1, r2, c2, r3, c3);
                    break;
            
                default:
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
                    // system("cls");
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
                    break;
                case 2:
                    // system("cls");
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
                    break;
            
                default:
                    break;
            }
            break;
        
        default:
            break;
        }
        break;
    
    case 3:
        // system("cls");
        printf("\nTrigonometric calculations available for you to perform:\n");
        printf("\n1. Sine\n2. Cosine\n3. Tangent\n4. Cosecant\n5. Secant\n6. Cotangent\n**************************\n\nEnter your choice: ");
        scanf("%d", &ch);
        // system("cls");
        switch(ch){
            case 1:
                // system("cls");
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                error_res = sine(&angle, &val);
                if(SUCCESS==error_res){
                    printf("\nsin(%f)  : %f", angle, val);
                }
                break;
            case 2:
                // system("cls");
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                error_res = cosine(&angle, &val);
                if(SUCCESS==error_res){
                    printf("\ncos(%f)  : %f", angle, val);
                }
                break;
            case 3:
                // system("cls");
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                error_res = tangent(&angle, &val);
                if(SUCCESS==error_res){
                    printf("\ntan(%f)  : %f", angle, val);
                }
                break;
            case 4:
                // system("cls");
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                error_res = cosecant(&angle, &val);
                if(SUCCESS==error_res){
                    printf("\ncosec(%f)  : %f", angle, val);
                }
                break;
            case 5:
                // system("cls");
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                error_res = secant(&angle, &val);
                if(SUCCESS==error_res){
                    printf("\nsec(%f)  : %f", angle, val);
                }
                break;
            case 6:
                // system("cls");
                printf("\nEnter the angle in degrees: ");
                scanf("%f", &angle);
                error_res = cotangent(&angle, &val);
                if(SUCCESS==error_res){
                    printf("\ncot(%f)  : %f", angle, val);
                }
                break;
            default:
                break;
        }
        break;

    default:
        break;
    }
    // system("cls");
    return 0;
}





















//     printf("Operations available for you to perform:\n");

//     printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide recursively\n5. Divide only 2 numbers\n**************************\n\nEnter your choice: ");
//     scanf("%d", &ch);
//     system("cls");
//     switch(ch){
//         case 1:
//             printf("Operation: Addition\n");
//             printf("\nInput datatype:\n1. Integer\n2. Decimal\n\nSelect the datatype of your input: ");
            
//             scanf("%d", &datatype);
//             switch (datatype)
//             {
//                 case 1:
//                     // system("cls");
//                     add();
//                     break;
//                 case 2:
//                     // system("cls");
//                     addDouble();
//                     break;
            
//                 default:
//                     break;
//             }
//             break;
//         case 2:
//             printf("Operation: Subtraction\n");
//             printf("\nInput datatype:\n1. Integer\n2. Decimal\nSelect the datatype of your input: ");
//             // char datatype;
//             scanf("%d", &datatype);
//             switch (datatype){
//                 case 1:
//                     // system("cls");
//                     subtract();
//                     break;
//                 case 2:
//                     // system("cls");
//                     subtractDouble();
//                     break;
//                 default:
//                     break;
//             }
//             break;
//         case 3:
//             printf("Operation: Multiplication\n");
//             printf("\nInput datatype:\n1. Integer\n2. Decimal\nSelect the datatype of your input: ");
//             // char datatype;
//             scanf("%d", &datatype);
//             switch (datatype)
//             {
//                 case 1:
//                     // system("cls");
//                     multiply();
//                     break;
//                 case 2:
//                     // system("cls");
//                     multiplyDouble();
//                     break;
//                 default:
//                     break;
//             }
//             break;
//         case 4:
//             printf("Operation: Division\n");
//             // system("cls");
//             divide();
//             break;
//         case 5:
//             printf("Operation: Division of 2 numbers\n");
//             // system("cls");
//             divide2Num();
//             break;
//         default:
//             break;
//     }
//     system("cls");
//     return 0;







// int sum(int);

// int main(){
//     printf("********Calculator********\n\n");
//     printf("Operations available for you to perform:\n");
//     printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n**************************\n\nEnter your choice: ");
//     int ch, f=0, num=0;
//     while(1){
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             system("cls");
//             int a;
//             int c=5;
//             printf("Operation: Add\n");

//             while(c>0){
//                 printf("\nEnter the numbers you want to add:\n");
//                 scanf("%d", &a);
//                 num = sum(num, a);
//                 c--;
//                 // printf("Do you want to add more numbers? ");
//                 // scanf("%c ",&c);
//                 // if(c=='n'||c=='N'){
//                     // break;
//                 // }
//             }

//             break;
        
//         default:
//             printf("Break\n");
//             f = 1;
//             break;
//         }
//         if(f==1)
//         break;
//     }
//     printf("\n%d\n", num);
//     return 0;
// }
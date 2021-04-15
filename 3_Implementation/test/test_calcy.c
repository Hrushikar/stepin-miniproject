#include<stdlib.h>
#include<limits.h>
#include<float.h>
#include "../inc/calc.h"
#include "../inc/calcy.h"
#include "../inc/matrix.h"
#include "../inc/trigonometry.h"
#include "../unity/unity.h"
// #include "../main.c"

/* Required by the unity test framework */
/**
 * @brief Set the Up object
 * 
 */
void setUp()
{
}

void tearDown()
{
}

void addInt(void){
    long int a, b, res;

    a = 0;
    b = 0;
    // res = 0;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    TEST_ASSERT_EQUAL(0, res);
    
    a = 1;
    b = 2;
    // res = 0;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    TEST_ASSERT_EQUAL(3, res);

    a = 100;
    b = 123;
    // res = 0;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    TEST_ASSERT_EQUAL(223, res);

    a = -1;
    b = -1;
    // res = 0;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    TEST_ASSERT_EQUAL(-2, res);

    a = -987651234;
    b = 987060394;
    // res = 0;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    TEST_ASSERT_EQUAL(-590840, res);

    
    a = LONG_MAX;
    b = LONG_MIN;
    // TEST_ASSERT_GREATER_THAN(LONG_MIN, b);
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, add(&a, &b, &res));
    TEST_ASSERT_EQUAL(-1, res);

    // a = LONG_MAX+1;
    // b = LONG_MIN;
    // TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, add(&a, &b, &res));
    // TEST_ASSERT_EQUAL(0, res);


    // a = (INT_MAX-1)/2;
    // b = (INT_MAX-1)/2;
    // res = 0;
    // TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    // TEST_ASSERT_EQUAL(INT_MAX-1, res);

    // a = (INT_MIN)/2;
    // b = (INT_MIN)/2;
    // res = 0;
    // TEST_ASSERT_EQUAL(SUCCESS, add(&a, &b, &res));
    // TEST_ASSERT_EQUAL(INT_MIN, res);
    
    // a = INT_MAX;
    // b = INT_MAX;
    // // res = 0;
    // TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, add(&a, &b, &res));
    // TEST_ASSERT_EQUAL(-2, res);
    // TEST_ASSERT_LESS_THAN(0, res);

    // a = INT_MIN;
    // b = INT_MIN;
    // res = 0;
    // TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, add(&a, &b, &res));
    // // TEST_ASSERT_LESS_THAN(0, res);
    // TEST_ASSERT_EQUAL(0, res);
    
}

void addDoub(void){
    double a, b, res;
    a = 1.0;
    b = 0.0;
    // res = 0.0;
    TEST_ASSERT_EQUAL(SUCCESS, addDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(1.0, res);

    a = 5.43;
    b = 8.987;
    TEST_ASSERT_EQUAL(SUCCESS, addDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(14.417, res);

    a = 986209.98709;
    b = -678341.987;
    TEST_ASSERT_EQUAL(SUCCESS, addDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(307868.00009, res);

    a = -83496209.1231709;
    b = -89765678341.9878768;
    TEST_ASSERT_EQUAL(SUCCESS, addDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-89849174551.111038, res);

    a = 865673837.194289;
    b = 897678341.987869;
    TEST_ASSERT_EQUAL(SUCCESS, addDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(1763352179.182158, res);

    a = DBL_MAX;
    b = DBL_MAX;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, addDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-INFINITY, res);
    
}

void sub(void){
    long int a, b, res;

    a = 0;
    b = 0;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(0, res);

    a = 1;
    b = 1;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(0, res);

    a = 3;
    b = 6;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(-3, res);

    a = 76;
    b = 67;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(9, res);

    a = -76;
    b = 67;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(-143, res);

    a = -889879;
    b = -9192967;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(8303088, res);

    a = -999999999;
    b = -999228967;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(-771032, res);

    a = LONG_MIN;
    b = LONG_MAX;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, subtract(&a, &b, &res));
    TEST_ASSERT_EQUAL(1, res);

    // a = LONG_MAX+1;
    // b = LONG_MIN;
    // TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, subtract(&a, &b, &res));
    // TEST_ASSERT_EQUAL(0, res);

    // a = LONG_MAX;
    // b = LONG_MIN-1;
    // TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, subtract(&a, &b, &res));
    // TEST_ASSERT_EQUAL(-1, res);
}

void subDouble(void){
    double a, b, res;

    a = 0;
    b = 0;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(0.0, res);

    a = 1.0;
    b = 1.0;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(0, res);

    a = 3.2;
    b = 6.8;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-3.6, res);

    a = 7906.29876;
    b = 6877.3254;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(1028.97336, res);

    a = -7906.29876;
    b = 6877.3254;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-14783.62416, res);

    a = -889879.102938;
    b = -9192967.568439;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(8303088.465501, res);

    a = 889879.102938;
    b = -9192967.568439;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(10082846.671377, res);

    a = -999967999.012983;
    b = -999228912.67438;
    TEST_ASSERT_EQUAL(SUCCESS, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-739086.338603, res);

    a = (DBL_MAX);
    b = (-DBL_MAX);
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, subtractDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-INFINITY, res);
}

void mul(void){
    long int a, b, res;

    a = 0;
    b = 0;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(0, res);

    a = 1;
    b = 1;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(1, res);

    a = 3;
    b = 6;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(18, res);

    a = 76;
    b = 67;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(5092, res);

    a = -76;
    b = 67;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(-5092, res);

    a = -889879;
    b = -9192967;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(8180628280993, res);

    a = 889879;
    b = -91967;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(-81839501993, res);

    a = -999999999;
    b = -999228967;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(999228966000771033, res);

    a = LONG_MIN;
    b = LONG_MAX;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(LONG_MIN, res);

    a = LONG_MAX;
    b = LONG_MIN;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, multiply(&a, &b, &res));
    TEST_ASSERT_EQUAL(LONG_MIN, res);
}

void mulDouble(void){
    double a, b, res;

    a = 0.0;
    b = 0.0;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(0.0, res);

    a = 1.0;
    b = 1.0;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(1.0, res);

    a = 3.12;
    b = 6.94;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(21.6528, res);

    a = 76.123456;
    b = 67.987456;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(5175.440115, res);

    a = -7906.29876;
    b = 6877.3254;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-54374189.282136, res);

    a = -8898.1038;
    b = -9196.5439;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(81831802.22, res);

    a = 8594.102938;
    b = -91967.568439;
    TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-790378750.1, res);

    // a = -999967999.012983;
    // b = -999228912.67438;
    // TEST_ASSERT_EQUAL(SUCCESS, multiplyDouble(&a, &b, &res));
    // TEST_ASSERT_EQUAL(999196936362918400.000000, res);

    a = DBL_MAX;
    b = -DBL_MAX;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, multiplyDouble(&a, &b, &res));
    TEST_ASSERT_EQUAL(-INFINITY, res);
}

void dividede(void){
    double a, b, res;

    a = 0.0;
    b = 1.0;
    TEST_ASSERT_EQUAL(SUCCESS, divide(&a, &b, &res));
    TEST_ASSERT_EQUAL(0.0, res);

    a = 1.0;
    b = 1.0;
    TEST_ASSERT_EQUAL(SUCCESS, divide(&a, &b, &res));
    TEST_ASSERT_EQUAL(1.0, res);

    a = 123.1;
    b = 3.42;
    TEST_ASSERT_EQUAL(SUCCESS, divide(&a, &b, &res));
    TEST_ASSERT_EQUAL(35.994152, res);

    a = -98342.908;
    b = 2342.102;
    TEST_ASSERT_EQUAL(SUCCESS, divide(&a, &b, &res));
    TEST_ASSERT_LESS_OR_EQUAL(-41.989165, res);
    TEST_ASSERT_GREATER_THAN(-42.0, res);

    a = 98342.908;
    b = -239842.1502;
    TEST_ASSERT_EQUAL(SUCCESS, divide(&a, &b, &res));
    TEST_ASSERT_LESS_OR_EQUAL(-0.410031, res);
    TEST_ASSERT_GREATER_THAN(-1.0, res);

    a = -98342.908;
    b = 0;
    TEST_ASSERT_EQUAL(ERROR_DIV_BY_ZERO, divide(&a, &b, &res));
    TEST_ASSERT_EQUAL(-INFINITY, res);
    // TEST_ASSERT_LESS_OR_EQUAL(-41.989165, res);
    // TEST_ASSERT_GREATER_THAN(-42.0, res);

    b = DBL_MAX;
    a = 0.011;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, divide(&a, &b, &res));
    TEST_ASSERT_EQUAL(-INFINITY, res);
    // TEST_ASSERT_GREATER_THAN(-42.0, res);

    a = -DBL_MAX;
    b = 0.1;
    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, divide(&a, &b, &res));
    TEST_ASSERT_EQUAL(-INFINITY, res);
}

void solveQuad(void){
    double a, b, c, res1, res2;

    a = 0.0;
    b = 0.0;
    c = 0.0;
    TEST_ASSERT_EQUAL(ERROR_NO_EQUATION_POSSIBLE, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(-INFINITY, res1);
    TEST_ASSERT_EQUAL(-INFINITY, res2);

    a = 1;
    b = 2;
    c = 1;
    TEST_ASSERT_EQUAL(SUCCESS, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(-1, res1);
    TEST_ASSERT_EQUAL(-1, res2);

    a = 1.5;
    b = 2.45;
    c = 3.0;
    TEST_ASSERT_EQUAL(ERROR_NO_REAL_SOLUTION, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(-INFINITY, res1);
    TEST_ASSERT_EQUAL(-INFINITY, res2);

    a = 0.6125;
    b = 3.5;
    c = 5;
    TEST_ASSERT_EQUAL(SUCCESS, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(-2.857143, res1);
    TEST_ASSERT_EQUAL(-2.857143, res2);

    a = 1;
    b = -1;
    c = 1;
    TEST_ASSERT_EQUAL(ERROR_NO_REAL_SOLUTION, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(-INFINITY, res1);
    TEST_ASSERT_EQUAL(-INFINITY, res2);

    a = 2;
    b = -1;
    c = -6;
    TEST_ASSERT_EQUAL(SUCCESS, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(2, res1);
    TEST_ASSERT_EQUAL(-1.5, res2);

    a = 1.5;
    b = -2.43;
    c = 0.028;
    TEST_ASSERT_EQUAL(SUCCESS, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(1.608394, res1);
    TEST_ASSERT_EQUAL(0.011605, res2);

    a = -1.5;
    b = -2.43;
    c = -0.028;
    TEST_ASSERT_EQUAL(SUCCESS, solveQuadratic(&a, &b, &c, &res1, &res2));
    TEST_ASSERT_EQUAL(-1.608394, res1);
    TEST_ASSERT_EQUAL(-0.011605, res2);    

}

void matAdd(void){
    int r1, c1, r2, c2, r3, c3;
    long int **mat1, **mat2, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
    r3 = 2;
    c3 = 2;

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

    mat1[0][0] = 2;
    mat1[0][1] = 5;
    mat1[1][0] = -1;
    mat1[1][1] = 3;

    mat2[0][0] = 1;
    mat2[0][1] = 4;
    mat2[1][0] = 3;
    mat2[1][1] = 7;

    TEST_ASSERT_EQUAL(SUCCESS, matrixSum(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(3, res_mat[0][0]);
    TEST_ASSERT_EQUAL(9, res_mat[0][1]);
    TEST_ASSERT_EQUAL(2, res_mat[1][0]);
    TEST_ASSERT_EQUAL(10, res_mat[1][1]);



    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 3;
    r3 = 3;
    c3 = 3;

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

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    mat1[1][2] = 1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(SUCCESS, matrixSum(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(2, res_mat[0][0]);
    TEST_ASSERT_EQUAL(1, res_mat[0][1]);
    TEST_ASSERT_EQUAL(5, res_mat[0][2]);
    TEST_ASSERT_EQUAL(3, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-3, res_mat[1][1]);
    TEST_ASSERT_EQUAL(4, res_mat[1][2]);
    TEST_ASSERT_EQUAL(5, res_mat[2][0]);
    TEST_ASSERT_EQUAL(0, res_mat[2][1]);
    TEST_ASSERT_EQUAL(-2, res_mat[2][2]);


    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 2;
    r3 = 3;
    c3 = 3;

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

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    mat1[1][2] = 1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    // mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    // mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, matrixSum(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][1]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][2]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][1]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][2]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][1]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][2]);

}

void matAddDouble(void){
    int r1, c1, r2, c2, r3, c3;
    double **mat1, **mat2, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
    r3 = 2;
    c3 = 2;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = 2.3;
    mat1[0][1] = 51.2;
    mat1[1][0] = -13.71;
    mat1[1][1] = 3.123;

    mat2[0][0] = 1;
    mat2[0][1] = 4;
    mat2[1][0] = 3;
    mat2[1][1] = 7;

    TEST_ASSERT_EQUAL(SUCCESS, matrixSumDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(3.3, res_mat[0][0]);
    TEST_ASSERT_EQUAL(55.2, res_mat[0][1]);
    TEST_ASSERT_EQUAL(-10.71, res_mat[1][0]);
    TEST_ASSERT_EQUAL(10.123, res_mat[1][1]);



    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 3;
    r3 = 3;
    c3 = 3;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = -1;
    mat1[0][1] = 2.23;
    mat1[0][2] = 3987.59;
    mat1[1][0] = 2.122;
    mat1[1][1] = -376493.3;
    mat1[1][2] = 1291.1024;
    mat1[2][0] = 3036.256;
    mat1[2][1] = 128.512;
    mat1[2][2] = -2024.6432;

    mat2[0][0] = 3963.1215;
    mat2[0][1] = -1;
    mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    mat2[1][2] = 3396.4589;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(SUCCESS, matrixSumDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(3962.1215, res_mat[0][0]);
    TEST_ASSERT_EQUAL(1.13, res_mat[0][1]);
    TEST_ASSERT_EQUAL(3989.59, res_mat[0][2]);
    TEST_ASSERT_EQUAL(3.122, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-376493.3, res_mat[1][1]);
    TEST_ASSERT_EQUAL(4687.5613, res_mat[1][2]);
    TEST_ASSERT_EQUAL(3038.256, res_mat[2][0]);
    TEST_ASSERT_EQUAL(127.512, res_mat[2][1]);
    TEST_ASSERT_EQUAL(-2024.6432, res_mat[2][2]);


    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 2;
    r3 = 3;
    c3 = 3;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    mat1[1][2] = 1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    // mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    // mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, matrixSumDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][1]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][2]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][1]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][2]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][1]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][2]);
}










void matDiff(void){
    int r1, c1, r2, c2, r3, c3;
    long int **mat1, **mat2, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
    r3 = 2;
    c3 = 2;

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

    mat1[0][0] = 2;
    mat1[0][1] = 5;
    mat1[1][0] = -1;
    mat1[1][1] = 3;

    mat2[0][0] = 1;
    mat2[0][1] = 7;
    mat2[1][0] = 3;
    mat2[1][1] = 7;

    TEST_ASSERT_EQUAL(SUCCESS, matrixDifference(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(1, res_mat[0][0]);
    TEST_ASSERT_EQUAL(-2, res_mat[0][1]);
    TEST_ASSERT_EQUAL(-4, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-4, res_mat[1][1]);



    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 3;
    r3 = 3;
    c3 = 3;

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

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    mat1[1][2] = 1;
    mat1[2][0] = 123;
    mat1[2][1] = 1;
    mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    mat2[1][2] = 3;
    mat2[2][0] = 256;
    mat2[2][1] = -1;
    mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(SUCCESS, matrixDifference(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(-4, res_mat[0][0]);
    TEST_ASSERT_EQUAL(3, res_mat[0][1]);
    TEST_ASSERT_EQUAL(1, res_mat[0][2]);
    TEST_ASSERT_EQUAL(1, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-3, res_mat[1][1]);
    TEST_ASSERT_EQUAL(-2, res_mat[1][2]);
    TEST_ASSERT_EQUAL(-133, res_mat[2][0]);
    TEST_ASSERT_EQUAL(2, res_mat[2][1]);
    TEST_ASSERT_EQUAL(-2, res_mat[2][2]);


    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 2;
    r3 = 3;
    c3 = 3;

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

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    mat1[1][2] = 1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    // mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    // mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, matrixDifference(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][1]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][2]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][1]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][2]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][1]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][2]);

}

void matDiffDouble(void){
    int r1, c1, r2, c2, r3, c3;
    double **mat1, **mat2, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
    r3 = 2;
    c3 = 2;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = 2.3;
    mat1[0][1] = 51.2;
    mat1[1][0] = -13.71;
    mat1[1][1] = 3.123;

    mat2[0][0] = 1;
    mat2[0][1] = 4;
    mat2[1][0] = 3;
    mat2[1][1] = 7;

    TEST_ASSERT_EQUAL(SUCCESS, matrixDifferenceDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(1.3, res_mat[0][0]);
    TEST_ASSERT_EQUAL(47.2, res_mat[0][1]);
    TEST_ASSERT_EQUAL(-16.71, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-3.877, res_mat[1][1]);



    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 3;
    r3 = 3;
    c3 = 3;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = -1;
    mat1[0][1] = 2.23;
    mat1[0][2] = 3987.59;
    mat1[1][0] = 2.122;
    mat1[1][1] = -376493.3;
    mat1[1][2] = 1291.1024;
    mat1[2][0] = 3036.256;
    mat1[2][1] = 128.512;
    mat1[2][2] = -2024.6432;

    mat2[0][0] = 3963.1215;
    mat2[0][1] = -1;
    mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    mat2[1][2] = 3396.4589;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(SUCCESS, matrixDifferenceDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(-3964.1215, res_mat[0][0]);
    TEST_ASSERT_EQUAL(3.23, res_mat[0][1]);
    TEST_ASSERT_EQUAL(3985.59, res_mat[0][2]);
    TEST_ASSERT_EQUAL(1.122, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-376493.3, res_mat[1][1]);
    TEST_ASSERT_EQUAL(-2105.3565, res_mat[1][2]);
    TEST_ASSERT_EQUAL(3034.256, res_mat[2][0]);
    TEST_ASSERT_EQUAL(129.512, res_mat[2][1]);
    TEST_ASSERT_EQUAL(-2024.6432, res_mat[2][2]);


    r1 = 3;
    c1 = 3;
    r2 = 3;
    c2 = 2;
    r3 = 3;
    c3 = 3;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    mat1[1][2] = 1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    // mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    // mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, matrixDifferenceDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][1]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][2]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][1]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][2]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][1]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][2]);
}











void matMul(void){
    int r1, c1, r2, c2, r3, c3;
    long int **mat1, **mat2, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
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

    mat1[0][0] = 1;
    mat1[0][1] = 2;
    mat1[1][0] = 3;
    mat1[1][1] = 4;

    mat2[0][0] = 2;
    mat2[0][1] = 0;
    mat2[1][0] = 1;
    mat2[1][1] = 2;

    TEST_ASSERT_EQUAL(SUCCESS, matrixProduct(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(4, res_mat[0][0]);
    TEST_ASSERT_EQUAL(4, res_mat[0][1]);
    TEST_ASSERT_EQUAL(10, res_mat[1][0]);
    TEST_ASSERT_EQUAL(8, res_mat[1][1]);



    r1 = 2;
    c1 = 3;
    r2 = 3;
    c2 = 2;
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

    mat1[0][0] = 1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 4;
    mat1[1][1] = 5;
    mat1[1][2] = 6;
    // mat1[2][0] = 3;
    // mat1[2][1] = 1;
    // mat1[2][2] = -2;

    mat2[0][0] = 7;
    mat2[0][1] = 8;
    // mat2[0][2] = 2;
    mat2[1][0] = 9;
    mat2[1][1] = 10;
    // mat2[1][2] = 3;
    mat2[2][0] = 11;
    mat2[2][1] = 12;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(SUCCESS, matrixProduct(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(58, res_mat[0][0]);
    TEST_ASSERT_EQUAL(64, res_mat[0][1]);
    // TEST_ASSERT_EQUAL(5, res_mat[0][2]);
    TEST_ASSERT_EQUAL(139, res_mat[1][0]);
    TEST_ASSERT_EQUAL(154, res_mat[1][1]);
    // TEST_ASSERT_EQUAL(4, res_mat[1][2]);
    // TEST_ASSERT_EQUAL(5, res_mat[2][0]);
    // TEST_ASSERT_EQUAL(0, res_mat[2][1]);
    // TEST_ASSERT_EQUAL(-2, res_mat[2][2]);


    r1 = 3;
    c1 = 2;
    r2 = 3;
    c2 = 2;
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

    mat1[0][0] = -1;
    mat1[0][1] = 2;
    // mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    // mat1[1][2] = 1;
    mat1[2][0] = 3;
    mat1[2][1] = 1;
    // mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    // mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    // mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, matrixProduct(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][1]);
    // TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[0][2]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][1]);
    // TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[1][2]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][0]);
    TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][1]);
    // TEST_ASSERT_EQUAL((long int)INFINITY, res_mat[2][2]);

}

void matMulDouble(void){
    int r1, c1, r2, c2, r3, c3;
    double **mat1, **mat2, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
    r3 = r1;
    c3 = c2;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = 1.21;
    mat1[0][1] = 2.048;
    mat1[1][0] = 30.36;
    mat1[1][1] = 4;

    mat2[0][0] = 2.12;
    mat2[0][1] = 0;
    mat2[1][0] = -10.24;
    mat2[1][1] = 256;

    TEST_ASSERT_EQUAL(SUCCESS, matrixProductDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(-18.40632, res_mat[0][0]);
    TEST_ASSERT_EQUAL(524.288, res_mat[0][1]);
    TEST_ASSERT_EQUAL(23.4032, res_mat[1][0]);
    TEST_ASSERT_EQUAL(1024, res_mat[1][1]);



    r1 = 2;
    c1 = 3;
    r2 = 3;
    c2 = 2;
    r3 = r1;
    c3 = c2;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = 1.024;
    mat1[0][1] = 2048;
    mat1[0][2] = 3.036;
    mat1[1][0] = 404876.048;
    mat1[1][1] = 50.06;
    mat1[1][2] = 67.76;
    // mat1[2][0] = 3;
    // mat1[2][1] = 1;
    // mat1[2][2] = -2;

    mat2[0][0] = 7;
    mat2[0][1] = 8;
    // mat2[0][2] = 2;
    mat2[1][0] = 9;
    mat2[1][1] = 10;
    // mat2[1][2] = 3;
    mat2[2][0] = 11;
    mat2[2][1] = 12;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(SUCCESS, matrixProductDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(18472.564, res_mat[0][0]);
    TEST_ASSERT_EQUAL(20524.624, res_mat[0][1]);
    // TEST_ASSERT_EQUAL(5, res_mat[0][2]);
    TEST_ASSERT_EQUAL(2835328.236, res_mat[1][0]);
    TEST_ASSERT_EQUAL(3240322.104, res_mat[1][1]);
    // TEST_ASSERT_EQUAL(4, res_mat[1][2]);
    // TEST_ASSERT_EQUAL(5, res_mat[2][0]);
    // TEST_ASSERT_EQUAL(0, res_mat[2][1]);
    // TEST_ASSERT_EQUAL(-2, res_mat[2][2]);


    r1 = 3;
    c1 = 2;
    r2 = 3;
    c2 = 2;
    r3 = r1;
    c3 = c2;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }

    mat2 = (double **)malloc(r2 * sizeof(double *));
    for (int i = 0; i < r2; i++){
        mat2[i] = (double *)malloc(c2 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = -1;
    mat1[0][1] = 2.12;
    // mat1[0][2] = 3;
    mat1[1][0] = 2;
    mat1[1][1] = -3;
    // mat1[1][2] = 1;
    mat1[2][0] = 309.876;
    mat1[2][1] = 1;
    // mat1[2][2] = -2;

    mat2[0][0] = 3;
    mat2[0][1] = -1;
    // mat2[0][2] = 2;
    mat2[1][0] = 1;
    mat2[1][1] = 0;
    // mat2[1][2] = 3;
    mat2[2][0] = 2;
    mat2[2][1] = -1;
    // mat2[2][2] = 0;

    TEST_ASSERT_EQUAL(ERROR_OUT_OF_RANGE, matrixProductDouble(mat1, mat2, res_mat, r1, c1, r2, c2, r3, c3));
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][1]);
    // TEST_ASSERT_EQUAL(-INFINITY, res_mat[0][2]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][1]);
    // TEST_ASSERT_EQUAL(-INFINITY, res_mat[1][2]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][0]);
    TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][1]);
    // TEST_ASSERT_EQUAL(-INFINITY, res_mat[2][2]);

}


void matTrans(void){
    int r1, c1, r3, c3;
    long int **mat1, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
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

    mat1[0][0] = 1;
    mat1[0][1] = 2;
    mat1[1][0] = 3;
    mat1[1][1] = 4;

    TEST_ASSERT_EQUAL(SUCCESS, matrixTranspose(mat1, res_mat, r1, c1, r3, c3));
    TEST_ASSERT_EQUAL(1, res_mat[0][0]);
    TEST_ASSERT_EQUAL(3, res_mat[0][1]);
    TEST_ASSERT_EQUAL(2, res_mat[1][0]);
    TEST_ASSERT_EQUAL(4, res_mat[1][1]);


    r1 = 2;
    c1 = 3;
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

    mat1[0][0] = 1;
    mat1[0][1] = 2;
    mat1[0][2] = 3;
    mat1[1][0] = 4;
    mat1[1][1] = 5;
    mat1[1][2] = 6;

    TEST_ASSERT_EQUAL(SUCCESS, matrixTranspose(mat1, res_mat, r1, c1, r3, c3));
    TEST_ASSERT_EQUAL(1, res_mat[0][0]);
    TEST_ASSERT_EQUAL(4, res_mat[0][1]);
    TEST_ASSERT_EQUAL(2, res_mat[1][0]);
    TEST_ASSERT_EQUAL(5, res_mat[1][1]);
    TEST_ASSERT_EQUAL(3, res_mat[2][0]);
    TEST_ASSERT_EQUAL(6, res_mat[2][1]);

}

void matTransDouble(void){
    int r1, c1, r3, c3;
    double **mat1, **res_mat; //, **check_mat;


    r1 = 2;
    c1 = 2;
    r3 = c1;
    c3 = r1;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = 1;
    mat1[0][1] = 2.31;
    mat1[1][0] = -308.923;
    mat1[1][1] = 4.98;

    TEST_ASSERT_EQUAL(SUCCESS, matrixTransposeDouble(mat1, res_mat, r1, c1, r3, c3));
    TEST_ASSERT_EQUAL(1, res_mat[0][0]);
    TEST_ASSERT_EQUAL(-308.923, res_mat[0][1]);
    TEST_ASSERT_EQUAL(2.31, res_mat[1][0]);
    TEST_ASSERT_EQUAL(4.98, res_mat[1][1]);


    r1 = 2;
    c1 = 3;
    r3 = c1;
    c3 = r1;

    mat1 = (double **)malloc(r1 * sizeof(double *));
    for (int i = 0; i < r1; i++){
        mat1[i] = (double *)malloc(c1 * sizeof(double));
    }
    
    res_mat = (double **)malloc(r3 * sizeof(double *));
    for (int i = 0; i < r3; i++){
        res_mat[i] = (double *)malloc(c3 * sizeof(double));
    }

    mat1[0][0] = 1;
    mat1[0][1] = 23.412;
    mat1[0][2] = 39829.2601;
    mat1[1][0] = 4;
    mat1[1][1] = -58988.28172;
    mat1[1][2] = 6;

    TEST_ASSERT_EQUAL(SUCCESS, matrixTransposeDouble(mat1, res_mat, r1, c1, r3, c3));
    TEST_ASSERT_EQUAL(1, res_mat[0][0]);
    TEST_ASSERT_EQUAL(4, res_mat[0][1]);
    TEST_ASSERT_EQUAL(23.412, res_mat[1][0]);
    TEST_ASSERT_EQUAL(-58988.28172, res_mat[1][1]);
    TEST_ASSERT_EQUAL(39829.2601, res_mat[2][0]);
    TEST_ASSERT_EQUAL(6, res_mat[2][1]);

}


void trigSin(void){
    float angle, val;

    angle = 0;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0, val);

    angle = 90;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(1, val);

    angle = 180;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(-0.000407, val);

    angle = 30;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0.500059, val);

    angle = 60;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0.866093, val);

    angle = 45;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0.707179, val);

    angle = 135;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0.706891, val);

    angle = 245;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(-0.906542, val);

    angle = 51;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0.777219, val);

    angle = 3600;
    TEST_ASSERT_EQUAL(SUCCESS, sine(&angle, &val));
    TEST_ASSERT_EQUAL(0.008147, val);

}

void trigCos(void){
    float angle, val;

    angle = 0;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(1, val);

    angle = 90;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(-0.000204, val);

    angle = 30;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(0.865991, val);

    angle = 60;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(0.499882, val);

    angle = 45;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(0.707035, val);

    angle = 135;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(-0.707323, val);

    angle = 270;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(0.000611, val);

    angle = 245;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(-0.422116, val);

    angle = 51;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(0.629231, val);

    angle = 3600;
    TEST_ASSERT_EQUAL(SUCCESS, cosine(&angle, &val));
    TEST_ASSERT_EQUAL(0.999967, val);

}

void trigTan(void){
    float angle, val;

    angle = 0;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(0, val);

    angle = 90;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(-INFINITY, val);

    angle = 30;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(0.577441, val);

    angle = 60;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(1.732594, val);

    angle = 45;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(1.000204, val);

    angle = 135;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(-0.999389, val);

    angle = 270;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(-1637.088867, val);

    angle = 245;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(2.147616, val);

    angle = 51;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(1.235189, val);

    angle = 3600;
    TEST_ASSERT_EQUAL(SUCCESS, tangent(&angle, &val));
    TEST_ASSERT_EQUAL(0.008147, val);

}

void trigCosec(void){
    float angle, val;

    angle = 0;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(-INFINITY, val);

    angle = 90;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(1.0, val);

    angle = 30;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(1.999765, val);

    angle = 60;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(1.154610, val);

    angle = 45;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(1.414070, val);

    angle = -135;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(-1.414646, val);

    angle = 270;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(-1.0, val);

    angle = 245;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(-1.103093, val);

    angle = 51;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(1.286639, val);

    angle = 3600;
    TEST_ASSERT_EQUAL(SUCCESS, cosecant(&angle, &val));
    TEST_ASSERT_EQUAL(122.744713, val);

}

void trigSec(void){
    float angle, val;

    angle = 0;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(1.0, val);

    angle = 90;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(-4910.309082, val);

    angle = 30;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(1.154746, val);

    angle = 60;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(2.000471, val);

    angle = 45;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(1.414358, val);

    angle = -135;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(-1.413782, val);

    angle = 270;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(1637.089111, val);

    angle = 245;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(-2.369020, val);

    angle = 51;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(1.589242, val);

    angle = 3600;
    TEST_ASSERT_EQUAL(SUCCESS, secant(&angle, &val));
    TEST_ASSERT_EQUAL(1.000033, val);

}

void trigCot(void){
    float angle, val;

    angle = 0;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(-INFINITY, val);

    angle = 90;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(-0.000204, val);

    angle = 30;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(1.731779, val);

    angle = 60;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(0.577169, val);

    angle = 45;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(0.999796, val);

    angle = -135;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(1.000611, val);

    angle = 270;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(-0.000611, val);

    angle = 245;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(0.465633, val);

    angle = 51;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(0.809593, val);

    angle = 3600;
    TEST_ASSERT_EQUAL(SUCCESS, cotangent(&angle, &val));
    TEST_ASSERT_EQUAL(122.740639, val);

}


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(addInt);
    RUN_TEST(addDoub);
    RUN_TEST(sub);
    RUN_TEST(subDouble);
    RUN_TEST(mul);
    RUN_TEST(mulDouble);
    RUN_TEST(dividede);
    RUN_TEST(solveQuad);
    RUN_TEST(matAdd);
    RUN_TEST(matAddDouble);
    RUN_TEST(matDiff);
    RUN_TEST(matDiffDouble);
    RUN_TEST(matMul);
    RUN_TEST(matMulDouble);
    RUN_TEST(matTrans);
    RUN_TEST(matTransDouble);
    RUN_TEST(trigSin);
    RUN_TEST(trigCos);
    RUN_TEST(trigTan);
    RUN_TEST(trigCosec);
    RUN_TEST(trigSec);
    RUN_TEST(trigCot);    


    /* Close the Unity Test Framework */
    return UNITY_END();
}

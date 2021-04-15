/**
 * @file calc.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Source file to perform simple calculations.
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<float.h>
#include<limits.h>
#include "calc.h"
#include "calcy.h"


/**
 * @brief 
 * 
 * @param flag 
 * @return error_t 
 */
error_t checkIntegers(int flag){
    if(flag){
        return ERROR_OUT_OF_RANGE;
    }
    return SUCCESS;
}


/**
 * @brief 
 * 
 * @param flag 
 * @return error_t 
 */
error_t checkDouble(int flag){
    if(flag){
        return ERROR_OUT_OF_RANGE;
    }
    return SUCCESS;
}


/**
 * @brief 
 * 
 * @param flag 
 * @return error_t 
 */
error_t checkDivision(int flag){
    if(flag==1){
        return ERROR_OUT_OF_RANGE;
    }
    else if(flag==2){
        return ERROR_DIV_BY_ZERO;
    }
    return SUCCESS;
}


/**
 * @brief Function to add two integers.
 * 
 * @param a 
 * @param b 
 * @param res 
 * @return error_t 
 */
error_t add(long int* a, long int* b, long int* res){
    
    int flag = 0;

    if((LONG_MAX==(*a) && LONG_MIN==(*b)) || (LONG_MIN==(*a) && LONG_MAX==(*b))){
        flag = 1;
    }
    *res = (*a) + (*b);
    return checkIntegers(flag);
}


/**
 * @brief Function to add two real numbers.
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t addDouble(double* ad, double* bd, double* cd){

    int flag = 0;
    if((DBL_MAX==(*ad) && DBL_MAX==(*bd)) || ((-DBL_MAX)==(*ad) && (-DBL_MAX)==(*bd))){
        flag = 1;
    }
    *cd = (*ad) + (*bd);
    return checkDouble(flag);
}


/**
 * @brief Function to subtract two integers.
 * 
 * @param a 
 * @param b 
 * @param res 
 * @return error_t 
 */
error_t subtract(long int* a, long int* b, long int* res){
    
    int flag = 0;
    if(LONG_MAX==(*a) && LONG_MIN==(*b)){
        flag = 1;
    }
    else if(LONG_MIN==(*a) && LONG_MAX==(*b)){
        flag = 1;
    }
    *res = (*a) - (*b);
    return checkIntegers(flag);
}


/**
 * @brief Function to subtract two real numbers.
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t subtractDouble(double* ad, double* bd, double* cd){
    
    int flag = 0;
    if((*ad)>0 && (*bd)<0){
        if(((*ad)-(*bd))>DBL_MAX){
            flag = 1;
        }
    }
    *cd = (*ad) - (*bd);
    return checkDouble(flag);
}


/**
 * @brief Function to multiply two integers.
 * 
 * @param a 
 * @param b 
 * @param res 
 * @return error_t 
 */
error_t multiply(long int* a, long int* b, long int* res){
    
    int flag = 0;
    if((LONG_MAX==(*a) && LONG_MIN==(*b)) || (LONG_MIN==(*a) && LONG_MAX==(*b))){
        flag = 1;
    }
    *res = (*a) * (*b);
    return checkIntegers(flag);
}


/**
 * @brief Function to multiply two real numbers.
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t multiplyDouble(double* ad, double* bd, double* cd){
    
    int flag = 0;
    if((DBL_MAX==(*ad) && -DBL_MAX==(*bd)) || (-DBL_MAX==(*ad) && DBL_MAX==(*bd))){
        flag = 1;
    }
    *cd = (*ad) * (*bd);
    return checkDouble(flag);
}


/**
 * @brief Function to divide two numbers.
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t divide(double* ad, double* bd, double* cd){
    
    int flag = 0;
    if(((DBL_MAX==(*ad) && 1>(*bd)) || (DBL_MAX==(*bd) && 1>(*ad))) || ((-DBL_MAX==(*ad) && 1>(*bd)) || (-DBL_MAX==(*bd) && 1>(*ad)))){
        flag = 1;
        *cd = INFINITY;
        return checkDivision(flag);
    }
    if((*bd)==0){
        flag = 2;
        *cd = -INFINITY;
        return checkDivision(flag);
    }
    *cd = (*ad)/(*bd);
    return checkDivision(flag);
}


/**
 * @brief Function to find the roots of a quadratic equation given the coefficients.
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @param resd1 
 * @param resd2 
 * @return error_t 
 */
error_t solveQuadratic(double* ad, double* bd, double* cd, double* resd1, double* resd2){

    if(0==(*ad) && 0==(*bd) && 0==(*cd)){
        *resd1 = INFINITY;
        *resd2 = INFINITY;
        return ERROR_NO_EQUATION_POSSIBLE;
    }
    
    *resd1 = (-1)*(*bd);
    *resd2 = (-1)*(*bd);
    
    double b_sqr = pow((*bd), 2);
    double ac4 = (4 * (*ad) * (*cd));
    double a2 = (2*(*ad));

    if(b_sqr==ac4){
        *resd1 = *resd1/(2*(*ad));
        *resd2 = *resd2/(2*(*ad));
        return SUCCESS;
    }

    else{
        double discriminant = b_sqr - ac4;
        if(discriminant<0){
            *resd1 = INFINITY;
            *resd2 = INFINITY;
            return ERROR_NO_REAL_SOLUTION;
        }
        else{
            *resd1 = ((*resd1) + sqrt(discriminant)) / a2; //(2*(*ad));
            *resd2 = ((*resd2) - sqrt(discriminant)) / a2; //(2*(*ad));
            return SUCCESS;
        }
    }
}

/**
 * @file calc.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief 
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

#include "../inc/calc.h"
#include "../inc/calcy.h"
#include "../inc/delay.h"

// #include "calc.h"

/**
 * @brief 
 * 
 * @param flag 
 * @return error_t 
 */
error_t checkIntegers(int flag){ //}, long long int val){ //}, char operation){
    if(flag){
        // printf("\n\nValue Out of Range!!!\n");
        return ERROR_OUT_OF_RANGE;
    }
    // else{
    //     char op[15];
    //     if(operation=='a'){
    //         strcpy(op, "Sum");
    //     }
    //     else if(operation=='s'){
    //         strcpy(op, "Difference");
    //     }
    //     else if(operation=='m'){
    //         strcpy(op, "Product");
    //     }
    //     printf("\n\n%s: %lld\n", op, val);
    // }
    return SUCCESS;
}


/**
 * @brief 
 * 
 * @param flag 
 * @return error_t 
 */
error_t checkDouble(int flag){ //}, double val){ //}, char operation){
    if(flag){
        // printf("\n\nValue Out of Range!!!\n");
        return ERROR_OUT_OF_RANGE;
    }
    // else{
    //     char op[15];
    //     if(operation=='a'){
    //         strcpy(op, "Sum");
    //     }
    //     else if(operation=='s'){
    //         strcpy(op, "Difference");
    //     }
    //     else if(operation=='m'){
    //         strcpy(op, "Product");
    //     }
    //     printf("\n\n%s: %lf\n", op, val);
    // }
    return SUCCESS;
}


/**
 * @brief 
 * 
 * @param flag 
 * @return error_t 
 */
error_t checkDivision(int flag){ //}, double val){
    if(flag==1){
        // printf("\n\nValue Out of Range!!!\n");
        return ERROR_OUT_OF_RANGE;
    }
    else if(flag==2){
        // printf("\n\nDivision by zero is not peritted!!!\n");
        return ERROR_DIV_BY_ZERO;
    }
    // else{
    //     printf("\n\nQuotient: %Lf\n", val);
    // }
    // printf("\nExiting in 5 seconds...");
    // delay(5);
    return SUCCESS;
}


/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @param res 
 * @return error_t 
 */
error_t add(long int* a, long int* b, long int* res){
    // long long int number, sum=0, a;
    // int flag=0;
    // printf("\nInteger Addition:\n\nEnter the number of integers you want to add: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to add:\n");
    // for(long long int i=0; i<number; i++){
        // scanf("%lld", &a);
        // if(LLONG_MAX<(sum+a) || LLONG_MIN>(sum+a)){
            // flag = 1;
            // break;
        // }
        // sum+=a;
        // 
    // }

    int flag = 0;

    if((LONG_MAX==(*a) && LONG_MIN==(*b)) || (LONG_MIN==(*a) && LONG_MAX==(*b))){
        flag = 1;
    }

    // if((*a)>=0 && (*b)>=0){
    //     if((*a)+(*b)<0){
    //         flag = 1;
    //         // *res = (*a) + (*b);
    //     }
    // }
    // else if((*a)<0 && (*b)<0){
    //     if(((*a)+(*b))==0){
    //         flag = 1;
    //         // *res = (*a) + (*b);
    //     }
    // }
    // else{
        *res = (*a) + (*b);
    // }
    // printf("%d", *res);
    // if(LLONG_MAX<((*a)+(*b)) || LLONG_MIN>((*a)+(*b))){
        // flag = 1;
        // *res = (*a) + (*b);
    // }
    // else{
        // *res = (*a) + (*b);
    // }
    return checkIntegers(flag); //, *res); //, 'a');
}


/**
 * @brief 
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t addDouble(double* ad, double* bd, double* cd){
    // double sum=0.0, a;
    // long long int number;
    // int flag=0;
    // printf("\nDecimal number Addition:\n\nEnter the number of decimal numbers you want to add: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to add:\n");
    // for(long long int i=0; i<number; i++){
    //     scanf("%lf", &a);
    //     if(DBL_MAX<(sum+a) || (-DBL_MAX)>(sum+a)){
    //         flag = 1;
    //         break;
    //     }
    //     sum+=a;
        
    // }

    int flag = 0;
    // if((*ad)>=0 && (*bd)>=0){}
    // if(DBL_MAX<((*ad)+(*bd)) || (-DBL_MAX)>((*ad)+(*bd))){
    if((DBL_MAX==(*ad) && DBL_MAX==(*bd)) || ((-DBL_MAX)==(*ad) && (-DBL_MAX)==(*bd))){
        flag = 1;
        // *cd = (*ad) + (*bd);
    }
    // else{
        *cd = (*ad) + (*bd);
    // }
    return checkDouble(flag); //, sum); //, 'a');
}


/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @param res 
 * @return error_t 
 */
error_t subtract(long int* a, long int* b, long int* res){
    // long long int number, difference, a;
    // int flag=0;
    // printf("\nInteger Subtraction:\n\nEnter the number of integers you want to subtract: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to add:\n");
    // for(long long int i=0; i<number; i++){
    //     scanf("%lld", &a);
        
    //     if(LLONG_MAX<(difference-a) || LLONG_MIN>(difference-a)){
    //         flag = 1;
    //         break;
    //     }
    //     if(i>0){
    //         difference-=a;
    //     }
    //     else if(i==0){
    //         difference = a;
    //     }
    // }
    int flag = 0;
    if((*a)<0 && (*b)>0){
        if((*a)-(*b)>0){
            flag = 1;
            // *res = (*a) + (*b);
        }
    }
    else if((*a)>0 && (*b)<0){
        if(((*a)-(*b))<0){
            flag = 1;
            // *res = (*a) + (*b);
        }
    }
    // else{
    *res = (*a) - (*b);
    // }
    return checkIntegers(flag); //, difference); //, 's');
}


/**
 * @brief 
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t subtractDouble(double* ad, double* bd, double* cd){
    // double difference, a;
    // long long int number;
    // int flag=0;
    // printf("\nDecimal number Subtraction:\n\nEnter the number of decimal numbers you want to subtract: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to add:\n");
    // for(long long int i=0; i<number; i++){
    //     scanf("%lf", &a);
    //     if(DBL_MAX<(difference-a) || (-DBL_MAX)>(difference-a)){
    //         flag = 1;
    //         break;
    //     }
    //     if(i>0){
    //         difference-=a;
    //     }
    //     else if(i==0){
    //         difference = a;
    //     }
    // }
    int flag = 0;
    if((*ad)>0 && (*bd)<0){
        if(((*ad)-(*bd))>DBL_MAX){
            flag = 1;
            // *res = (*a) + (*b);
        }
    }
    // if(DBL_MAX<((*ad)-(*bd)) || (-DBL_MAX)>((*ad)-(*bd))){
        // flag = 1;
        // *cd = (*ad) - (*bd);
    // }

    // else{
        *cd = (*ad) - (*bd);
    // }
    return checkDouble(flag); //, difference); //, 's');
}

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @param res 
 * @return error_t 
 */
error_t multiply(long int* a, long int* b, long int* res){
    // long long int number, product=1, a;
    // int flag=0;
    // printf("\nInteger Multiplication:\n\nEnter the number of integers you want to multiply: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to multiply:\n");
    // for(long long int i=0; i<number; i++){
    //     scanf("%lld", &a);
    //     if(LLONG_MAX<(product*a) || LLONG_MIN>(product*a)){
    //         flag = 1;
    //         break;
    //     }
    //     product*=a;
        
    // }

    int flag = 0;
    // if(LONG_MAX<((*a)*(*b)) || LONG_MIN>((*a)*(*b))){
    //     flag = 1;
    //     // *res = (*a) * (*b);
    // }
    if((LONG_MAX==(*a) && LONG_MIN==(*b)) || (LONG_MIN==(*a) && LONG_MAX==(*b))){
        flag = 1;
    }
    // else{
        *res = (*a) * (*b);
    // }
    return checkIntegers(flag); //, product); //, 'm');
}

/**
 * @brief 
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t multiplyDouble(double* ad, double* bd, double* cd){
    // double product=1.0, a;
    // long long int number;
    // int flag=0;
    // printf("\nDecimal number Multiplication:\n\nEnter the number of decimal numbers you want to multiply: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to multiply:\n");
    // for(long long int i=0; i<number; i++){
    //     scanf("%lf", &a);
    //     if(DBL_MAX<(product*a) || (-DBL_MAX)>(product*a)){
    //         flag = 1;
    //         break;
    //     }
    //     product*=a;
        
    // }

    int flag = 0;
    // if(DBL_MAX<((*ad)*(*bd)) || (-DBL_MAX)>((*ad)*(*bd))){
        // flag = 1;
        // *cd = (*ad) * (*bd);
    // }
    if((DBL_MAX==(*ad) && -DBL_MAX==(*bd)) || (-DBL_MAX==(*ad) && DBL_MAX==(*bd))){
        flag = 1;
    }
    // else{
        *cd = (*ad) * (*bd);
    // }
    return checkDouble(flag); //, product); //, 'm');
}


/**
 * @brief 
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @return error_t 
 */
error_t divide(double* ad, double* bd, double* cd){
    // double quotient, a;
    // long long int number;
    // int flag=0;
    // printf("\nDivision:\n\nEnter the number of numbers you want to divide: ");
    // scanf("%lld", &number);
    // printf("\nEnter the numbers you want to multiply:\n");
    // for(long long int i=0; i<number; i++){
    //     scanf("%lf", &a);
    //     if(a==0 && i>0){
    //         flag = 2;
    //         break;
    //     }
    //     if(DBL_MAX<(quotient/a) || (-DBL_MAX)>(quotient/a)){
    //         flag = 1;
    //         break;
    //     }
    //     if(i>0){
    //         quotient/=a;
    //         // printf("\nInter quot: %lf\n",quotient);
    //     }
    //     else if(i==0){
    //         quotient = a;
    //         // printf("\nInter quot: %lf\n",quotient);
    //     }   
    // }

    int flag = 0;
    // if(DBL_MAX<((*ad)/(*bd)) || (-DBL_MAX)>((*ad)/(*bd))){
        // flag = 1;
        // *cd = (*ad)/(*bd);
        // return checkDivision(flag);
    // }
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
    // if(flag==0){
        *cd = (*ad)/(*bd);
    // }
    return checkDivision(flag); //, quotient);
}


/**
 * @brief 
 * 
 * @param ad 
 * @param bd 
 * @param cd 
 * @param resd1 
 * @param resd2 
 * @return error_t 
 */
error_t solveQuadratic(double* ad, double* bd, double* cd, double* resd1, double* resd2){
    // double a, b, c, discriminant, x1, x2;
    // printf("\nSolve for the zeroes of the quadratic equation:\n\n");
    // printf("\nEnter the coefficients of x**2 (a), x**1 (b) and x**0 (c): ");
    // scanf("%lf", &a);
    // scanf("%lf", &b);
    // scanf("%lf", &c);
    // double x1 = (-1)*(*b);
    // double x2 = (-1)*(*b);

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
    double discriminant = b_sqr - ac4; //((*bd)*(*bd))-(4*(*ad)*(*cd));
    if(discriminant<0){
        // printf("\nNo real solutions are possible for the given set of coefficients\n");
        // printf("\nExiting in 5 seconds...");
        // delay(5);
        *resd1 = INFINITY;
        *resd2 = INFINITY;
        return ERROR_NO_REAL_SOLUTION;
    }
    // else if(discriminant==0){
    //     *resd1 = *resd1/(2*(*ad));
    //     *resd2 = *resd2/(2*(*ad));
    //     return SUCCESS;
    // }
    else{
        *resd1 = ((*resd1) + sqrt(discriminant)) / a2; //(2*(*ad));
        *resd2 = ((*resd2) - sqrt(discriminant)) / a2; //(2*(*ad));
        return SUCCESS;
    }}
    // printf("Zeroes of the quadratic equation with coefficients %lf, %lf and %lf are:\nx1: %lf\nx2: %lf", a, b, c, x1, x2);
    // printf("\nExiting in 5 seconds...");
    // delay(5);
}

/**
 * @file calc.h
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

// #ifndef NUM
// #define NUM 0
// #endif

// typedef enum error{
//     ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
//     SUCCESS = 0,
//     ERROR_DIVIDE_BY_ZERO = -2
// } error;

#include "calcy.h"

#ifndef CALC_H
#define CALC_H

error_t add(long int*, long int*, long int*);
error_t addDouble(double*, double*, double*);
error_t subtract(long int*, long int*, long int*);
error_t subtractDouble(double*, double*, double*);
error_t multiply(long int*, long int*, long int*);
error_t multiplyDouble(double*, double*, double*);
error_t divide(double*, double*, double*);
// error_t divide2Num();
error_t solveQuadratic(double*, double*, double*, double*, double*);

#endif
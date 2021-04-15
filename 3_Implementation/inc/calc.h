/**
 * @file calc.h
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Header file for simple calculations.
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "calcy.h"

#ifndef CALC_H
#define CALC_H

/**
 * @brief Function to add two integers.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t add(long int*, long int*, long int*);

/**
 * @brief Function to add two real numbers.
 * 
 * @param double
 * @param double
 * @param double
 * @return error_t 
 */
error_t addDouble(double*, double*, double*);

/**
 * @brief Function to subtract two integers.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t subtract(long int*, long int*, long int*);

/**
 * @brief Function to subtract two real numbers.
 * 
 * @param double
 * @param double
 * @param double
 * @return error_t 
 */
error_t subtractDouble(double*, double*, double*);

/**
 * @brief Function to multiply two integers.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t multiply(long int*, long int*, long int*);

/**
 * @brief Function to multiply two real numbers.
 * 
 * @param double
 * @param double
 * @param double
 * @return error_t 
 */
error_t multiplyDouble(double*, double*, double*);

/**
 * @brief Function to divide two numbers.
 * 
 * @param double
 * @param double
 * @param double
 * @return error_t 
 */
error_t divide(double*, double*, double*);

/**
 * @brief Function to find the roots of a quadratic equation given the coefficients.
 * 
 * @param double
 * @param double
 * @param double
 * @param double
 * @param double
 * @return error_t 
 */
error_t solveQuadratic(double*, double*, double*, double*, double*);

#endif

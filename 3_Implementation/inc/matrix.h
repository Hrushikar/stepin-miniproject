/**
 * @file matrix.h
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Header file for matrix calculations
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "calcy.h"

#ifndef MATRIX_H
#define MATRIX_H

/**
 * @brief Function to add two matrices of integer values.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixSum(long int**, long int**, long int**, int, int, int, int, int, int);

/**
 * @brief Function to add two matrices of real values.
 * 
 * @param double 
 * @param double 
 * @param double 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixSumDouble(double**, double**, double**, int, int, int, int, int, int);

/**
 * @brief Function to subtract two matrices of integer values.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixDifference(long int**, long int**, long int**, int, int, int, int, int, int);

/**
 * @brief Function to subtract two matrices of real values.
 * 
 * @param double 
 * @param double 
 * @param double 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixDifferenceDouble(double**, double**, double**, int, int, int, int, int, int);

/**
 * @brief Function to multiply two matrices of integer values.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixProduct(long int**, long int**, long int**, int, int, int, int, int, int);

/**
 * @brief Function to multiply two matrices of real values.
 * 
 * @param double 
 * @param double 
 * @param double 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixProductDouble(double**, double**, double**, int, int, int, int, int, int);

/**
 * @brief Function to transpose a matrix of integer values.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixTranspose(long int**, long int**, int, int, int, int);

/**
 * @brief Function to transpose a matrix of real values.
 * 
 * @param double 
 * @param double 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @return error_t 
 */
error_t matrixTransposeDouble(double**, double**, int, int, int, int);

/**
 * @brief Function to take input of two matrices of integer values.
 * 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 */
void matrixInputInteger(long int**, long int**, int, int, int, int);

/**
 * @brief Function to take input of two matrices of real values.
 * 
 * @param double 
 * @param double 
 * @param int 
 * @param int 
 * @param int 
 * @param int 
 */
void matrixInputDouble(double**, double**, int, int, int, int);

/**
 * @brief Function to print the matrices of integer values.
 * 
 * @param int 
 * @param int 
 * @param int 
 */
void matrixPrintInteger(long int**, int, int);

/**
 * @brief Function to print the matrices of real values.
 * 
 * @param double 
 * @param int 
 * @param int 
 */
void matrixPrintDouble(double**, int, int);

#endif
/**
 * @file matrix.h
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "calcy.h"

#ifndef MATRIX_H
#define MATRIX_H

error_t matrixSum(long int**, long int**, long int**, int, int, int, int, int, int);
error_t matrixSumDouble(double**, double**, double**, int, int, int, int, int, int);
error_t matrixDifference(long int**, long int**, long int**, int, int, int, int, int, int);
error_t matrixDifferenceDouble(double**, double**, double**, int, int, int, int, int, int);
error_t matrixProduct(long int**, long int**, long int**, int, int, int, int, int, int);
error_t matrixProductDouble(double**, double**, double**, int, int, int, int, int, int);
error_t matrixTranspose(long int**, long int**, int, int, int, int);
error_t matrixTransposeDouble(double**, double**, int, int, int, int);

void matrixInputInteger(long int**, long int**, int, int, int, int);
void matrixInputDouble(double**, double**, int, int, int, int);
void matrixPrintInteger(long int**, int, int);
void matrixPrintDouble(double**, int, int);

#endif
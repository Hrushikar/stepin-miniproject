/**
 * @file trigonometry.h
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Header file for trigonometric calculations
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "calcy.h"

#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H

/**
 * @brief Funtion to find "sin" value of the angle
 * 
 * @param float 
 * @param float 
 * @return error_t 
 */
error_t sine(float*, float*);

/**
 * @brief Funtion to find "cos" value of the angle
 * 
 * @param float 
 * @param float 
 * @return error_t 
 */
error_t cosine(float*, float*);

/**
 * @brief Funtion to find "tan" value of the angle
 * 
 * @param float 
 * @param float 
 * @return error_t 
 */
error_t tangent(float*, float*);

/**
 * @brief Funtion to find "cosec" value of the angle
 * 
 * @param float 
 * @param float 
 * @return error_t 
 */
error_t cosecant(float*, float*);

/**
 * @brief Funtion to find "sec" value of the angle
 * 
 * @param float 
 * @param float 
 * @return error_t 
 */
error_t secant(float*, float*);

/**
 * @brief Funtion to find "cot" value of the angle
 * 
 * @param float 
 * @param float 
 * @return error_t 
 */
error_t cotangent(float*, float*);

#endif
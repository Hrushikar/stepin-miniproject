/**
 * @file trigonometric_calculations.c
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Source file to perform trigonometric calculations
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<math.h>
#include "trigonometry.h"
#include "calcy.h"


/**
 * @brief Funtion to find "sin" value of the angle
 * 
 * @param angle 
 * @param val 
 * @return error_t 
 */
error_t sine(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = sinf((*angle));
    return SUCCESS;
}


/**
 * @brief Funtion to find "cos" value of the angle
 * 
 * @param angle 
 * @param val 
 * @return error_t 
 */
error_t cosine(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = cos((*angle));
    return SUCCESS;
}


/**
 * @brief Funtion to find "tan" value of the angle
 * 
 * @param angle 
 * @param val 
 * @return error_t 
 */
error_t tangent(float* angle, float* val){
    if((*angle)==90){
        *val = INFINITY;
        return SUCCESS;
    }
    *angle = (*angle) * (3.142 / 180.0);
    *val = tanf((*angle));
    return SUCCESS;
}


/**
 * @brief Funtion to find "cosec" value of the angle
 * 
 * @param angle 
 * @param val 
 * @return error_t 
 */
error_t cosecant(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = (1/sinf((*angle)));
    return SUCCESS;
}


/**
 * @brief Funtion to find "sec" value of the angle
 * 
 * @param angle 
 * @param val 
 * @return error_t 
 */
error_t secant(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = (1/cosf((*angle)));
    return SUCCESS;
}


/**
 * @brief Funtion to find "cot" value of the angle
 * 
 * @param angle 
 * @param val 
 * @return error_t 
 */
error_t cotangent(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = (1/tanf((*angle)));
    return SUCCESS;
}
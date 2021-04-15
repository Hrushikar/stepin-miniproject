/**
 * @file calcy.h
 * @author Hrushikar Teja K (hrushikarteja.k@gmail.com)
 * @brief Header file for operations' status.
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CALCY_H
#define CALCY_H

/**
 * @brief "enum" to store the status variables/
 * 
 */
typedef enum error_t {

    /**
     * @brief Status if a quadratic equation is not possible for the given set of coefficients.
     * 
     */
    ERROR_NO_EQUATION_POSSIBLE = -4,

    /**
     * @brief Status if a quadratic equation does not have any real solution.
     * 
     */
    ERROR_NO_REAL_SOLUTION = -3,

    /**
     * @brief Status if division is done by zero.
     * 
     */
    ERROR_DIV_BY_ZERO = -2,

    /**
     * @brief Status if a the value computed is out of range or if the dimensions of matrices are not congruent.
     * 
     */
    ERROR_OUT_OF_RANGE = -1,

    /**
     * @brief status if an operation is performed successfully.
     * 
     */
    SUCCESS = 0

}error_t;

#endif
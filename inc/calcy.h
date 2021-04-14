#ifndef CALCY_H
#define CALCY_H

typedef enum error_t {
    ERROR_NO_EQUATION_POSSIBLE = -5,
    ERROR_NO_REAL_SOLUTION = -4,
    ERROR_DIV_BY_ZERO = -3, /**< Division by 0 error */
    ERROR_NULL_PTR = -2,    /**< Null pointer dereferncing error */
    ERROR_OUT_OF_RANGE = -1,
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;

#endif
#include<stdio.h>
#include<math.h>
#include "../inc/trigonometry.h"
#include "../inc/calcy.h"

// float degToRad(float* angle){
//     *angle = (*angle) * (3.142 / 180.0);
//     return (*angle);
// }

error_t sine(float* angle, float* val){
    // // float angle = 360;
    // float acc = 0.0001, denominator, sinx, sinval;
    // angle = angle * (3.142 / 180.0);  //convert in radian
    // float temp = angle;
    // sinx = angle;
    // sinval = sin(angle);
    // int i = 1;
    // do {
    //     denominator = 2 * i * (2 * i + 1);
    //     temp = -temp * angle * angle / denominator;
    //     sinx = sinx + temp;
    //     i = i + 1;
    // } while (acc <= fabs(sinval - sinx));
    // printf("\n%.3f",sinx);

    // degToRad(&(*angle));

    *angle = (*angle) * (3.142 / 180.0);
    *val = sinf((*angle));
    // return (*val); //sinf((*angle));
    return SUCCESS;
}

error_t cosine(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = cos((*angle));
    // return (*val); //cosf((*angle));
    return SUCCESS;
}

error_t tangent(float* angle, float* val){
    if((*angle)==90){
        *val = INFINITY;
        return SUCCESS;
    }
    *angle = (*angle) * (3.142 / 180.0);
    *val = tanf((*angle));
    // return (*val); //tanf((*angle));
    return SUCCESS;
}

error_t cosecant(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = (1/sinf((*angle)));
    // return (*val); //(1/sinf((*angle)));
    return SUCCESS;
}

error_t secant(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = (1/cosf((*angle)));
    // return (*val); //(1/cosf((*angle)));
    return SUCCESS;
}

error_t cotangent(float* angle, float* val){
    *angle = (*angle) * (3.142 / 180.0);
    *val = (1/tanf((*angle)));
    // return (*val); //(1/tanf((*angle)));
    return SUCCESS;
}
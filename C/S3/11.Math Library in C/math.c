#include <stdio.h>
#include <stdlib.h>
#include <math.h> //This is C's math library

int main(){

    //Square Root
    printf("%f \n", sqrt(25));

    //Round a Number
    printf("This is ceil: %.2f \n", ceil(3.4));    //ceil
    printf("This is floor: %.2f \n", floor(3.4));  //floor

    //Absolute
    int x = -7;
    int y = abs(x); 
    printf("|%d| \n", y); 

    //Power
    printf("2^3 = %f \n", pow(2, 3)); 

    //Trigonometry
    // float x = sin(0);
    // printf("sin %f", x); 
    //It has all of them cos, tan, cotan, asin, acos & etc.
    
    return 0;
}
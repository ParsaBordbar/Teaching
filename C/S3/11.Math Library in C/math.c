#include <stdio.h>
#include <stdlib.h>
#include <math.h> //This is C's math library

int main(){

    //Square Root
    printf("%f", sqrt(25));

    //Round a Number
    printf("This is ceil: %f", ceil(3.4));    //ceil
    printf("This is floor: %f", floor(3.4));  //floor

    //Absolute
    int x = -7;
    int y = abs(x); 
    printf("|%d|", y); 

    //Power
    printf("2^3 = %f", pow(2, 3)); 

    //Trigonometry
    float x = sin(0);
    printf("sin %f", x); 
    //It has all of them cos, tan, cotan, asin, acos & etc.
    
    return 0;
}
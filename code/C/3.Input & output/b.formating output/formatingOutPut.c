#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Formatting the Print functions output
    float myFloatNum = 315789.14159265358979323846;
    printf("_____________________________________________\n\n");
    printf("The number is: %f\n\n", myFloatNum);
    printf("show 6 digits after the decimal point%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("show 1 digit%.2f\n", myFloatNum); // Only show 2 digits
    printf("Only show 4 digits%.4f", myFloatNum);   // Only show 4 digits

    return 0;
}
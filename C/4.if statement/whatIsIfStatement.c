#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Type a number: \n");
    float input;
    scanf("%f", &input);
    printf("The number you entered is: %f", input);

    if(input < 0 && input > -2 ){
        printf("\n %f \tIf statement was right", input);
    }
    return 0;
} // == < > <= >= + - / * input = input + 1; input++; input+=6; 
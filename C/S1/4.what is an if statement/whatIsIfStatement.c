#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Type a number: \n");
    float input;
    scanf("%f", &input);
    printf("The number you entered is: %f", input);
    if(input == 2){
        printf("If statement was right");
    }
    else
        printf("The number you entered is: %f", input);
    return 0;
}
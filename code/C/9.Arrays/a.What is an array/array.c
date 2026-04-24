#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Arrays are used to store multiple values in a single variable,
    instead of declaring separate variables for each value.*/
    float array[] = {1, 5, 3.6, -17};
    
    for(int i = 0; i < 4; i++){
        printf("Array index %d Element: %.2f \n",i, array[i]);
    }

    return 0;
}
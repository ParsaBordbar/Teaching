#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i = 0;
// What is a loop? a loop is a code block that repeats!
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    printf("This is a while loop:\n");
    while (i < 10) {
    printf("This is the %d Line \n", i);
    i++;
    }

    while (i < 10) {
    printf("This is the %d Line \n", i++); 
    }

    return 0;
}
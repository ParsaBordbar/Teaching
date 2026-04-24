#include <stdio.h>
#include <stdlib.h>
    
// What is a loop? a loop is a code block that repeats!


int main(){  

    int i = 0;
    // while (/* condition */)
    // {
    //     /* code */
        //iterator
    // }

    /*Variable i is what is called iterator
    it iterate till the condition is false */
    
    printf("This is a while loop:\n");

    // while (i < 10) {
    // printf("This is the %d Line \n", i);
    // i++;
    // }

    while (i < 10) {
    printf("This is the %d Line \n", ++i); 
    }

    //DO NOT FORGET => to update the iterator value!
    //if you don't it will STUCK in an Infinite Loop! => No end! 
    return 0;
}
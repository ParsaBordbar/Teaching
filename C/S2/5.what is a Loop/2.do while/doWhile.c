#include <stdio.h>
#include <stdlib.h>

int main(){  


    // do{
        
        //block of code here.

    // }while (/* condition */);
    

    int i = 5;
    //If we assign i with a value that satisfied the condition it
    //will be like a normal While: i.g. 4

    do {
    printf("%d\n", i);
    i++;
    }
    while (i < 5);

    /*What is the difference between While and do While?
        do while will run the code atleast once even if the condition
        is not satisfied => run once even when it's false
        but for 'While' it always depends on condition  
    */
}
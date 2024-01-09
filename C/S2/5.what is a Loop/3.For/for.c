#include <stdio.h>
#include <stdlib.h>

int main(){  

    // for (type i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    

    // int i;

    // for (i = 0; i < 10; i++) {
    //     printf("%d\n", i);
    // }

    for(int i = 10; i >= 0 ; i-- ){
        printf("i = %d \n", i);
    }

    int i = 10;
    while(i >= 0){
        printf("i = %d \n", i);
        i--;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){ 

    for(int i = 0; i <= 5; i++){
        int input;
        printf("Enter a number: ");
        scanf("%d",&input);
        if( (input % 2) == 0){
            printf("Even %d\n", input);
        }
        else
            printf("odd");
    }

    return 0;
}
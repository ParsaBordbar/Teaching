#include <stdio.h>
#include <stdlib.h>

int main(){ 

    int min = NULL;
    for(int i = 0; i < 5; i++){
        int input;
        printf("Enter a number: ");
        scanf("%d",&input);
        if(input < min){
            min = input;
        }
    }
    printf("min: %d", min);

return 0;
}
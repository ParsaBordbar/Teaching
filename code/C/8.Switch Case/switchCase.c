#include <stdio.h>

int main() {

// switch(expression) {
// case x:
//     code block
//     break;
// case y:
//      code block
//     break;
// default:
//     code block
// }

    int num = 3;

    //Switch case
    printf("Using switch case:\n");
    switch(num) {
        case 1:
            printf("Number is 1\n");
            break;
        case 2:
            printf("Number is 2\n");
            break;
        default:
            printf("Number is not 1 or 2\n");
            break;
    }

    //If statement
    printf("Using if statement:\n");
    if(num == 1) {
        printf("Number is 1\n");
    } else if(num == 2) {
        printf("Number is 2\n");
    } else {
        printf("Number is not 1 or 2\n");
    }

    return 0;
}

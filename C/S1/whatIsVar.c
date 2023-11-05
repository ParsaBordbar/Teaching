#include <stdio.h>
#include <stdlib.h>

int main(){    
//What is a Variable?

    int number = 1977;
//type varName 'assign' value
    printf("This is the value of number: %d", number);

//What is this code's problem?
    int a = 3.14;
    float numberPi = 3.14;

    //name cases:
    char MyFavoriteChar = 'M'; //PascalCase
    double myFavoriteNumber = 9; //camelCase
    int my_integer_num = 5; // Note that Kebab case does not work in C! my-integer-num

    return 0;
}
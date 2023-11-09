#include <stdio.h>
#include <stdlib.h>

int main(){    
/*  What is a Variable?🤨

    Variables are containers for storing data values, like numbers and characters.
    In C, there are different types of variables (defined with different keywords)
*/
    int number = 1977;
//type varName 'assign' value
    printf("This is the value of number: %d", number);

//What is this code's problem 😕?
    int a = 3.14;
    float numberPi = 3.14;

//Name cases:
    char MyFavoriteChar = 'M'; //PascalCase
    double myFavoriteNumber = 9; //camelCase
    int my_integer_num = 5; // Note that Kebab case does not work in C! my-integer-num

//We have to type of langues in terms of var... we have dynamic type langues like Python and JS and we have static types like C, C++ and JAVA.


// DATA Types in C:

    char letter = 'M';       // Character
    int intNum = -9;         // Integer (whole number)
    float floatNum = 5.99;   // Floating point number
    double doubleNum = 5.1899202022465; //double is 8byte version of float

    //Printing Them
    printf("%d\n", intNum); //also works with %i
    printf("%lf\n", doubleNum);
    printf("%f\n", floatNum);
    printf("%c\n", letter);

    return 0;
}
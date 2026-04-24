#include <stdio.h>
#include <stdlib.h>

int main(){

//user INPUT and OUTPUT in C

    // what is \n? It's a special char for next line.
    printf("\n\n Type a number:");
    float input;

    /*We use 'scanf' for getting input in C.
    Note the '&' symbol it is for addressing, more about it in future!
    note that for Showing the value of a var we use '%' and also we should use correct data type in front of it.
    */  
    scanf("%f", &input);

    //We already know 'printf' it is used for printing in the console
    printf("The number you entered is: %.2f \n\n", input);

    //Getting multiple inputs
    int number;
    char someCharName;
    printf("Enter an int Number and a Char: ");
    scanf("%d %c", &number, &someCharName);

    //Printing with multiple variables 
    printf("This is our number: %d\tand this is our someCharName: %c ", number, someCharName);

    return 0;
}
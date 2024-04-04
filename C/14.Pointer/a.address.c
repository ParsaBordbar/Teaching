#include <stdio.h>
#include <stdlib.h>

int main(){

    int variable;
    printf("%p", &variable); // Outputs 0x7ffe5367e044

    /*You should also note that &myAge is often called a "pointer".
    A pointer basically stores the memory address of a variable as its
    value. To print pointer values, we use the %p format specifier.*/

    return 0;
}
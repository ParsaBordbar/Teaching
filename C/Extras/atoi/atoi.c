#include <stdio.h>
#include <stdlib.h>

//atoi is used to cast numbers in a number to actual numbers!
int main() {
    char strToConvert[] = "908475966";
    int ConvertedStr = atoi(strToConvert);
    printf("String to be Converted: %s\n", strToConvert);
    printf("Converted to Integer: %d\n", ConvertedStr);
    return 0;
}

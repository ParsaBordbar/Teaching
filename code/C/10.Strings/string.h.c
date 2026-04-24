#include <string.h>

int main(){

    //String Length => strlen
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVYZ";
    printf("String Length: %d \n", strlen(alphabet));

    //Difference between strlen and sizeof
    printf("Difference  %d \t", strlen(alphabet));  
    printf("%d \n", sizeof(alphabet));

    char str1[20] = "Hello ";
    char str2[] = "World! \n";
    
    //Concatenate Strings
    strcat(str1, str2);
    printf("Concatenate: %s", str1);

    //Copy String
    // Copy str1 to str2
    strcpy(str2, str1);
    // Print str2
    printf("Copy: %s", str2);

    //Compare Strings
    char str3[] = "Hi";
    // Compare str1 and str2, and print the result
    printf("Compare: %d\n", strcmp(str1, str2));
    // Returns 0 (the strings are equal)// Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3));
    // Returns -4 (the strings are not equal)
    return 0;
}
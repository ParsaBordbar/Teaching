#include <stdio.h>
#include <stdlib.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        exit(1);
    }
    return a / b;
}

float calculate(float a, float b, char operation)
{
    switch (operation)
    {
    case '+':
        return add(a, b);
    case '-':
        return subtract(a, b);
    case '*':
        return multiply(a, b);
    case '/':
        return divide(a, b);
    default:
        printf("Error: Invalid operation!\n");
        exit(1);
    }
}

int main()
{
    float firstNumber, secondNumber;
    char operation;

    printf("Enter the first number: ");
    if (scanf("%f", &firstNumber) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%f", &secondNumber) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    float result = calculate(firstNumber, secondNumber, operation);

    printf("%.2f %c %.2f = %.2f\n", firstNumber, operation, secondNumber, result);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
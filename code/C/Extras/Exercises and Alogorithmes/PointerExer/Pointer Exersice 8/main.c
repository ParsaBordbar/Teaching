#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
   int a[max];
   int *pointer,i,n;
   pointer = a;
   printf("Enter amount of numbers you wish to enter");
   scanf("%d",&n);
   for ( i = 0 ; i < n ; i++ )
   {
       printf("Enter an integer:");
       scanf("%d",(pointer + i)); // pointers don't need & and also pointer +1 is &a[i]
   }
    for ( i = n-1 ; i >=0 ; i--)
    {
        printf("%d",*(pointer + i));
        printf("\n");
    }


    return 0;
}

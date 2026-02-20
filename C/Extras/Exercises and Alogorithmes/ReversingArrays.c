#include <stdio.h>
#include <stdlib.h>

int main()
{ int a[3],b[3],i,j;
 printf("Enter The Numbers\t");
 printf("\n");
 for( i = 0 ; i < 3 ; i++)
 {
     scanf("%d",&a[i]);
 }
 j = 0 ;
 printf("The inverse numbers are:\n");
 for ( i = 2 ; i >= 0 ; i -- )
 {
     b[j] = a[i];
     printf("%d\t",b[j]);
     j++;
 }
  getch();
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int Khyam( int x);

int main()
{
 int n,row,i,a;
  printf("Enter the number of rows(n): ");
  scanf("%d",&n);
   Khyam(n);
   system('pause');
  return 1;
  }


int Khyam( int x)
{
    int row,i,a;
row = 1 ;
  do
    {
    int a = 1;
     i =1 ;
    do
    {
      printf("%d ",a);
      a = a * (row-i) / i;
    i++;
    } while(i <= row);
    printf("\n");
  row++;
  }
  while(row <= x);
  return a ;
}

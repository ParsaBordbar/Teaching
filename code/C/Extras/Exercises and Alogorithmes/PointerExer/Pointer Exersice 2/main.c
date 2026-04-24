#include <stdio.h>
#include <stdlib.h>

void Swap(int *, int *);


int main()
{
  int a = 10,b = 15;
  printf("at first a and b are: %d and %d\n\n",a,b);
  Swap(&a,&b);
  printf("at the end:%d,%d",a,b);
    getch();
    return 0;
}

void Swap(int *x, int *y)
{
    int temp;
    temp = *x ;
    *x = *y ;
    *y = temp;
}

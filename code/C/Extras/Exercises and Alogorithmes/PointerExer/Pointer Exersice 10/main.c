#include <stdio.h>
#include <stdlib.h>

int main()
{ int *x,*y,s;
x = malloc(sizeof(int));
if (!x)
{   printf("Fail");
    exit(1);
}
y = malloc(sizeof(int));
if (!y)
{   printf("Fail");
    exit(1);
}
 printf("Enter Two Integers:");
 scanf("%d\t%d",x,y);
 printf("%d %d\n",*x,*y);
 s=(*x * *x)+(*y * *y);
 printf("(%d* %d)+(%d * %d) =",*x,*x,*y,*y);
 printf("%d\t",s);

    return 0;
}

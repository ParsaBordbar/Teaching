#include <stdio.h>
#include <stdlib.h>

void swap ( int *p1 , int *p2);


int main()
{
int x,y;

printf("Enter two damn no.s:\n");
scanf("%d %d",&x,&y);
swap (&x,&y);

    return 0;
}


void swap ( int *p1 , int *p2)
{   printf(" x = %d , y = %d\n",*p1,*p2);
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
     printf("swap ones: x = %d , y = %d\n",*p1,*p2);
}

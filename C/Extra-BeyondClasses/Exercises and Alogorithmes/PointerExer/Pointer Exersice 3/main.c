#include <stdio.h>
#include <stdlib.h>

void WinIn(int *p1,int *p2);
void Cal(int x,int y, int*a,int*p);

int main()
{ int len,wid,area,per;
WinIn(&len,&wid);
Cal(len,wid,&area,&per);
printf("%d\n",area);
printf("%d",per);




    return 0;
}


 void WinIn(int *p1,int *p2)
 {
     printf("Enter length and Width");
     scanf("%d%d",p1,p2);
 }

 void Cal(int x,int y, int*a,int*p)
 {
   *a= x * y;
   *p = 2*(x+y);
 }

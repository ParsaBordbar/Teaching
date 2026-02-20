#include <stdio.h>
#include <stdlib.h>


void swap(float *p1,float *p2);

int main()
{
float a,b,*Pa,*Pb,Sum,temp;
Pa=&a;
Pb=&b;
a = 2.3;
b = 5.6;
printf("First Value are %f and %f\n",*Pa,*Pb);
printf("\n");
swap(Pa,Pb);
    return 0;
}

void swap(float *p1,float *p2)
{ float temp;
 temp = *p1;
 *p1 = *p2 ;
 *p2 = temp;
 printf ("Pa=%f Pb=%f",*p1,*p2);

}

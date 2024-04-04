#include <stdio.h>

int main()
{
 int temp,size=10,t,v;
 float a[10]= {1.2,15,16,11,293,3,5,8,-4,10};

for ( t = 0 ; t < size-1 ; t++)
{
    for ( v = 0 ; v < size-1 ; v++)
    {
        if ( a[v] > a[v+1])
        {
            temp = a[v];
            a[v] = a[v+1];
            a[v+1] = temp;
        }
    }
}

for ( t = 0 ; t < size ; t++)
{
    printf(" %.2f ",a[t]);
}
    return 0;
}

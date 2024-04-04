#include <stdio.h>
#include <stdlib.h>

int main()
{
int low,mid,high,key;
int size = 7;
int a[]={9,11,12,45,55,100,110};
 printf("Enter The number you're looking for:\n");
 scanf("%d",&key);
 low=0;
 high=size-1;
while( low <= high)
{
    mid =(low+high)/2;
    if (a[mid] == key)
    {
        printf("%d is at location %d",key,mid);
        break;
    }
    else if ( key < a[mid] )
    {
        high = mid-1 ;

    }
    else if ( key > a[mid])
    {
      low = mid+1;
    }

}
if (low > high)
{
    printf("Not even close you dump shit XD ");
}
    return 0;
}

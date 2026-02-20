#include <stdio.h>
#include <stdlib.h>

void pinput(int *p,int n);
void bubble(int temp,int leght);

int main()
{ int i,n,*p;
  float mead;
printf("Enter The Numbers you wish to enter:");
scanf("%d",&n);

p=(int*)malloc(n*sizeof(int));
if(!p)
{
    printf("aloocation failure!");
    exit(1);
}
pinput(p,n);
bubble(p,n);
printf("\n In ordered it's: %d")


    return 0;
}

void pinput(int *p,int n)
{
    for ( i = 0 ; i < n ; i++)
    {   printf("Enter Number %d",i+1);
        scanf("%d",p+1);
    }
}

void bubble(int temp,int leght)
{ i,j,item;
 for ( i = 0 ; i <= lenght-1 ; i++ )
 {
     for ( j = 0 ; j < lenght-1 ; j++)
        if (*(temp+j)> *(temp + j +1))
     {
         item = *(temp + j );
         *(temp + j ) = *(temp + j + 1);
         *(temp + j + 1) = item;
     }
 }

}


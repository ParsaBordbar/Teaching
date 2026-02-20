#include <stdio.h>
#include <stdlib.h>

//int Fibo(int n);
int Suprim_Fibo(int n);
int main()
{ int n,i;
printf("Please Enter a Number\n");
scanf("%d",&n);
    for (i = 0 ; i <=n ; i++)
    {
          printf("Suprim_Fibo(%d)= %d \n",i,Suprim_Fibo(i));

    }
    /*for (i = 0 ; i <=n ; i++)
    {
          printf("Fibo(%d)= %d \n",i,Fibo(i));

    }*/
    printf("\n");
    return 0;
}
int Suprim_Fibo(int n)
{
  int a=0,b=1,c,i;
      if( n == 1)
         return 1;
      if( n == 0 )
       return 0;
      for( i = 2 ; i <= n ; i++)
      {
          c = a + b ;
          a = b ;
          b = c ;
      }
      return c;
}

int Fibo(int n)
{
if( n == 1)
return 1;
if( n == 0 )
    return 0;
else
    n = Fibo(n-1) + Fibo(n-2) ;
return n ;

}

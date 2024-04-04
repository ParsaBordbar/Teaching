#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[21];
const int k=5;
int index;
char *list[5] ={"Ali","Erfan","Arshiya","Sorosh","Amir"};
 printf("Enter a name for searching\t");
 gets(name);
 for ( index = 0 ; index < k ; index++)
 {
      if(!strcmp(list[index],name))
     {
        break ;
     }
 }
     if ( index == k )
     {
    printf("%s does not exist,he's not here.",name);

     }
     else
     {
    printf("%s exist,he's here.",name);
     }
    return 0;
}

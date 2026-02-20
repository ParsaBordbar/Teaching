#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[30][81]; char *ptr[30], *temp;

int in, out, count = 0;
const int k = 30 ;
//clrscrO;
while(count < k) {
printf(" enter name of number %d:",count + 1);
gets(name[count]) ;
if(!name[count][0])
if(!name[count][0]) break ;
*(ptr + count ++) = name[count] ;
}
for(out = 0; out < count - 1 ; out + +)
for(!n = out + 1; in < count; in++)
if(strcmp(*(ptr + out), *(ptr + in))
{ temp = *(ptr + in) ;
*(ptr + in) = *(ptr + out) ;
*(ptr + out) = temp ;
}
printf("<< the sorted list is: > >\n");
for(out = 0 ; out < count ; out ++)
printf("\n name %d is:%s", out + 1, *(ptr + out)); getchO; return 0;
}





    return 0;
}

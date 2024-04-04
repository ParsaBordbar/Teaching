#include <stdio.h>
#include <stdlib.h>

int main()
{
 char *text = "you're name is :";
 char name[41];
 printf("Enter you're name");
 gets(name);
 printf("%s",text);
 puts(name);


return 0;
}

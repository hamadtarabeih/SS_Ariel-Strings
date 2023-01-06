#include <stdio.h>
#include "myEX.h"
#include <stdlib.h>

#define NumOfElements 50
int main(){
int *p = malloc(NumOfElements* sizeof(int));
int *p1=p;
int input;
for(int i =0 ; i < NumOfElements; i++)
{
    scanf("%d", &input);
    *p1  = input;
    p1++;
}
p1=p;
insertion_sort(p , NumOfElements);
for(int i =0 ; i < NumOfElements; i++)
{
   if(i <NumOfElements-1)
   {
    printf("%d,",*p1);
    p1++;
   }
   else{
    printf("%d",*p1);
   }
}
printf("\n");
return 0;
}



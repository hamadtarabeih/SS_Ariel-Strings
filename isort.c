#include <stdio.h>

 void shift_element(int* arr , int i)
 {    
    int * p = arr;
    int * p1 = p +1;
    int save ,crt=0;
   
   while(crt< i)
   {
    crt++;
    save = *p1;
    *p1 = *p;
    *p = save ;
    p1++;
   }
 }

 
 void insertion_sort(int * arr , int len)
 { 
  int *p1 = arr;
  int *p2 = p1;
  p2++;
  int c ,i, j;  
  for(j = 0 ; j < len ; j++)
  {
    for ( i = 1; i <= len - j; i++)
    {
        if(*p2 <*p1)
        {
         c = *p2;
         shift_element(p1 ,i);
         *p1 = c;
        }
    p2++;
    }
    p1++;
    p2 =p1;
    p2++;
  }
}

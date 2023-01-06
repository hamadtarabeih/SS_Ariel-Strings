#include <stdio.h>


void shift_element(int* arr, int i) {
    int k = i;
    while(k > 0)
    {
     *(arr + k) = *(arr + k - 1);
     k--;
    }   
}

 

void insertion_sort(int* arr, int len) {
    int i = 1;
    while( i < len)
    {
      int k = *(arr + i);
      int j = (i - 1);
      while (j >= 0 && *(arr + j) > k)
      {
           --j;
      }
        shift_element((arr + j), (i - j));
        *(arr + j + 1) = k;
        i++;
    }
}

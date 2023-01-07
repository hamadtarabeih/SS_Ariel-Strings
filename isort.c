#include <stdio.h>


   void shift_element(int* arr, int i) {
    for (int j = i; j > 0; --j)
        *(arr + j) = *(arr + j - 1);
}



void insertion_sort(int* arr, int len) {
    for (int i = 1; i < len; ++i)
    {
        int SaveValue = *(arr + i), j = (i - 1);

        while (j >= 0 && *(arr + j) > SaveValue){
         --j;
        }
        shift_element((arr + j), (i - j));

        *(arr + j + 1) = SaveValue;
    }
}

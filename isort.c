#include <stdio.h>


void shift_element(int* arr, int i) {
    for (int item = i; item > 0; --item)
        *(arr + item) = *(arr + item - 1);
}


void insertion_sort(int* arr, int len) {
    for (int i = 1; i < len; ++i)
    {
        int key = *(arr + i), j = (i - 1);

        while (j >= 0 && *(arr + j) > key)
            --j;

        shift_element((arr + j), (i - j));

        *(arr + j + 1) = key;
    }
}

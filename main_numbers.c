#include <stdio.h>
#include "myEX.h"
#include <stdlib.h>

#define NumOfElements 50
int main() {
    int arr[ARR_SIZE] = { 0 };

    for (int i = 0; i < ARR_SIZE; ++i)
        scanf("%d", &(*(arr+i)));

    insertion_sort(arr, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; ++i)
        printf("%d%c", *(arr+i), ((i == (ARR_SIZE - 1)) ? '\n':','));

    return 0;
}


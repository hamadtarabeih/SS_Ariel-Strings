#include <stdio.h>
#include "myEX.h"
#include <stdlib.h>

#define NumOfElements 50
int main() {
    int arr[NumOfElements] = { 0 };

    for (int i = 0; i < NumOfElements; ++i)
        scanf("%d", &(*(arr+i)));

    insertion_sort(arr, NumOfElements);

    for (int i = 0; i < NumOfElements; ++i){
        if ( i == NumOfElements -1)
        {
            printf("%d" , *(arr+i) );
        }
        else{
            printf("%d," , *(arr+i) );
        }
    }
    return 0;
}


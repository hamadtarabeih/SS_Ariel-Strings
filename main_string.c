#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myEX.h"

#define WORD 30
int main() {
    char word[WORD] , option;

    Getword(word);
    scanf(" %c\n", &option);

    if (option == 'a')
        print_lines(word);

    else if (option == 'b')
        print_similar_words(word);

    return 0;
}
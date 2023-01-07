#define LINE 256

#define WORD 30

int get_line(char s[]);

int Getword(char w[]);

int substring(char * str1, char * str2);

int similar(char *s, char *t, int n);

void print_lines(char * str);

void print_similar_words(char * str);

void shift_element(int* arr , int i);
void insertion_sort(int * arr , int len);
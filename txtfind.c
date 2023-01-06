

#include <stdio.h>
#include <string.h>


#define LINE 256

#define WORD 30

int get_line(char s[]);

int getword(char w[]);

int substring(char * str1, char * str2);

int similar(char *s, char *t, int n);

void print_lines(char * str);

void print_similar_words(char * str);


int get_line(char s[]) {
    int i = 0;

    for (i = 0; i < LINE; ++i)
    {
        if (scanf("%c", &(s[i])) == EOF)
        {
            s[i] = '\0';
            break;
        }

        if (s[i] == '\n')
        {
            s[i] = '\0';
            break;
        }
    }

    if (i == LINE)
        s[i - 1]  = '\0';

    return i;
}


int getword(char w[]) {
    int i = 0;

    for (i = 0; i < WORD; ++i)
    {
        if (scanf("%c", &(w[i])) == EOF)
        {
            w[i] = '\0';
            break;
        }

        if ( w[i] == '\n' ||  w[i] == '\t' ||  w[i] == ' ')
        {
           w[i]= '\0';
            break;
        }
    }

    if (i == WORD)
         w[i-1] = '\0';

    return i;
}


int substring(char * str1, char * str2) {
    int str1_len = strlen(str1), str2_len = strlen(str2), crt, i, j;

    for (i = 0; i <= str1_len - str2_len; ++i)
    {
       crt = 0;

        for (j = 0; j <= str2_len; ++j)
        {
            if (str1[i + j] == str2[j])
                ++crt;
        }

        if (crt >= str2_len)
            return 1;
    }

    return 0;
}


int similar(char *s, char *t, int n) {
    int s_len = strlen(s), t_len = strlen(t), i = 0, j = 0;

    if (s_len - t_len != n)
        return 0;

    for (i = 0; i < s_len && j < t_len; ++i)
    {
        if (s[i] == t[j])
            ++j;
    }

    return (t_len == j);
}


void print_lines(char * str) {
    char line[LINE] = { 0 };

    while(get_line(line))
    {
        if (substring(line, str))
            printf("%s\n", line);
    }
}


void print_similar_words(char * str) {
    char word[WORD];

    while(getword(word))
    {
        if (similar(word, str, 1) || similar(word, str, 0))
            printf("%s\n", word);
    }
}
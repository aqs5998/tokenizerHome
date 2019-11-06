
#include <stdio.h>

int string_length(char* str){
    int i = 0;
    while(*str != 0){
        i++;
        str++;
    }
}


char is_valid_character(char c){
    if(c < 32 || c > 133){
        return 0;
    }
    else {
        return 1;
    }
}


char* find_word_start(char* str);


char* find_word_end(char* str);

int count_words(char* str);

void copy_word(char* str, char* copy);


char** tokenize(char* str);

void print_tokens(char** tokens);

void free_tokens(char** tokens);

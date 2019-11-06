
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


char* find_word_start(char* str){
    while(!is_valid_character(str) && *str != 0){
        str++;
    }
    return str;
}


char* find_word_end(char* str){
    while(is_valid_character(str) && *str != 0){
        str++;
    }
    return str;
}

int count_words(char* str){

    int count = 0;
    while(*str!=0){
        str = find_word_start(str);
        str = find_word_end(str);
        if(*str != 0){
            count++;
        }
    str++;
    }
}

void copy_word(char* str, char* copy){
    str = find_word_start(str);
    for(int i = 0;is_valid_character(str) && *str != 0;i++){
        copy[i] = str[i];
    }
    str = find_word_end(str);

}


char** tokenize(char* str){

        char** tokens;
        for(int i = 0;i<tokens[i];i++){
            for(int j = 0;j<tokens[i][j];j++){
                
            }
        }

}





void print_tokens(char** tokens);

void free_tokens(char** tokens);

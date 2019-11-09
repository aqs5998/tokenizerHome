
#include <stdio.h>
#include <stdlib.h>


int string_length(char* str){
    int i = 0;
    while(*str != 0){
        i++;
        str++;
    } //return i
    return i;
}


char is_valid_character(char c){
  if(c < 33 || c > 126){ 
        return 0;
    }
    else {
        return 1;
    }
}


char* find_word_start(char* str){
    while(!is_valid_character(*str) && *str != 0){
        str++;
    }
    return str;
}


char* find_word_end(char* str){
    while(is_valid_character(*str) && *str != 0){
        str++;
    }
    return str;
}

int count_words(char* str){
    int count = 0;
    while(*str!=0){
        str = find_word_start(str);
        if(*str != 0){
            count++; 
        }
        str = find_word_end(str);
    } 
    return count; //return count
}

void copy_word(char* str, char* copy){
    str = find_word_start(str);
    copy = (char*)malloc(sizeof(char) * 2);
    for(int i = 0;is_valid_character(*str);i++){ 
        copy[i] = str[i];
        printf("%c", *(str));
        str++;
        copy++;
    }
}

//Following is relevent since you are trying to copy the characters from str into their own isolated string like a double array
//it is still my opinion you should use malloc for every word as well. Ex: *(tokens+i)=(char*) malloc(word_length*sizeof(char))
//The reason is that all variables that are created (unless global or static) are created in the stack instead of as regular
//memory in a heap. So in the event a string is really long, it could take up half of the stack already, and then the other
//half of the stack ends up being used to copy most of the string into a bunch of mini strings. It would take a really long
//string to do this, but the class puts an emphasis on malloc so it's probably better to use it.

// *(tokens+1) -> points to word
        // *(tokens+2) -> points to word
        // *(tokens+3) -> points to word
        //int j;
		//for(j=0; is_valid_character(str[j]); j++)
		    //*(*(tokens+i)+j) = word[j];
		//*(*(tokens+i)+j) = 0;

		//tokens contains address of 0th word
		//tokens+i contains address of ith word
		//*(tokens+i) contains address of 0th character of ith word
		//*(tokens+i)+j contains the address of jth character of ith word
		//*(*(tokens+i)+j) contains the char value of the jth character of the ith word
char** tokenize(char* str){
        char* word;
        int space = count_words(str);
        char** tokens = (char**)malloc((sizeof(char*)*space)+2);
        for(int i = 0;*str!=0;i++){
            str = find_word_start(str);
            for(int j = 0;is_valid_character(*str);j++){
                *(*(tokens+i)+j) = *(str+i);
            }
        }
    return tokens;
}

void print_tokens(char** tokens){
    printf("Does print tokens work?");
    for(int i = 0;*(tokens+i) != 0;i++){
         printf("%d",i);
        for(int j = 0;*(*(tokens+i)+j) != 0;j++){
            printf("%d",j);
            printf("%c", *(*(tokens+i)+j));
        }
    }
    return;
}


void free_tokens(char** tokens){
    return ;
}

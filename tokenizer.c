
#include <stdio.h>

int string_length(char* str){
    int i = 0;
    while(*str != 0){
        i++;
        str++;
    } //return i
    return i;
}


char is_valid_character(char c){
  if(c > 33 || c < 126){ 
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
    } 
    return count; //return count
}

void copy_word(char* str, char* copy){
    str = find_word_start(str);
    for(int i = 0;is_valid_character(str) && *str != 0;i++){
        copy[i] = str[i];
    }
   
}

//Following is relevent since you are trying to copy the characters from str into their own isolated string like a double array
//it is still my opinion you should use malloc for every word as well. Ex: *(tokens+i)=(char*) malloc(word_length*sizeof(char))
//The reason is that all variables that are created (unless global or static) are created in the stack instead of as regular
//memory in a heap. So in the event a string is really long, it could take up half of the stack already, and then the other
//half of the stack ends up being used to copy most of the string into a bunch of mini strings. It would take a really long
//string to do this, but the class puts an emphasis on malloc so it's probably better to use it.
char** tokenize(char* str){
        char** tokens;
        char* word;
        int space = count_words(str);
        **tokens = malloc(space * sizeof(char*) + 2); //Not sure if it's required, but might want to do (char**) malloc(blah blah)

        for(int i = 0;*str!=0;i++){ //for each word
	        str=find_word_start(&str); 
            str = find_word_end(&str); // Str finds word end
            copy_word(&str, &word); //using & here and above is wrong. Gives address of the actual pointer instead of the
	                            //address that the string starts at (the value of the pointer)
            for(int j = 0;is_valid_character(str[j]);j++){ //for each char? If you're traversing chars here, condition should use is_valid_char
                *(*(tokens+j)) = word;
		//int j;
		//for(j=0; is_valid_character(str[j]); j++)
		    //*(*(tokens+i)+j) = word[j];
		//*(*(tokens+i)+j) = 0;

		//tokens contains address of 0th word
		//tokens+i contains address of ith word
		//*(tokens+i) contains address of 0th character of ith word
		//*(tokens+i)+j contains the address of jth character of ith word
		//*(*(tokens+i)+j) contains the char value of the jth character of the ith word
            }
        }
}

void print_tokens(char** tokens){
    char s;
    for (char *tokens = s; *tokens != NULL; tokens++) {
    if (*tokens == ' ') {
        *tokens = '\n';
    }
}
    printf("%s", s);
    return;
}

void free_tokens(char** tokens){
    return ;
}

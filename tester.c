#include <string.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"
#include "tokenizer.c"
#include "history.c"

char* copy;
/*
    The following is a simple testing script with a single example of input
    your code is expected to handle. The testing of your code should be more
    thorough and explore other input cases.
*/

#define TEST_TOKENIZER 1
#define TEST_HISTORY 1

/* MinUnit: http://www.jera.com/techinfo/jtns/jtn002.html */
 /*#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
 #define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)
int tests_run;
*/
/* end MinUnit */


/* Tokenizer test cases */

static void test_string_length() {
    //mu_assert("string_length('happy') == 5", string_length("happy") == 5);
    char* str = "So this is a wierd fucking string. This assignment is driving me crazy. I'm starting to feel like an idiot. I don't know Joeseph anyone that doesn't know how to teach themselves this course on their own is screwed. Unless I had a teacher with me 24/7\0";
    printf("%c\n", *str);
    int i = count_words(str);
    printf("Total words: %d\n", i);
    char* copy;
    char** tokens = tokenize(str);
    printf("%c\n", *copy);
    //while(*copy != 0){
      //  printf("%c", *copy);
      //  copy++; 
    //}
    //char** tokens = tokenize(str);
    //print_tokens(tokens);
    return;  
}
/*
static char* test_is_valid_character() {
    mu_assert("is_valid_character(' ') == 0", is_valid_character(' ') == 0);
    mu_assert("is_valid_character('h') == 1", is_valid_character('h') == 1);
    return 0;
}

static char* test_find_word_start() {
    char* str = "  happy";
    mu_assert("*find_word_start('  happy') == 'h'", *find_word_start(str) == 'h');
    return 0;
}

static char* test_find_word_end() {
    char* str = "happy joy";
    mu_assert("*find_word_end('happy joy') == ' '", *find_word_end(str) == ' ');
    return 0;
}

static char* test_count_words() {
    char* str = "happy happy joy joy";
    mu_assert("count_words('happy happy joy joy') == 4", count_words(str) == 4);
    return 0;
}

static char* test_tokenize() {
    char* str = "happy happy joy joy";
    char** tokens = tokenize(str);
    mu_assert("tokens[0] == 'happy'", strcmp(tokens[0], "happy") == 0);
    mu_assert("tokens[1] == 'happy'", strcmp(tokens[1], "happy") == 0);
    mu_assert("tokens[2] == 'joy'", strcmp(tokens[2], "joy") == 0);
    mu_assert("tokens[3] == 'joy'", strcmp(tokens[3], "joy") == 0);
    free_tokens(tokens);
    return 0;
}
*/
/* History test cases */
/*
static char* test_add_history() {
    List* list = init_history();
    add_history(list, "happy");
    mu_assert("add_history(list, 'happy')", strcmp(list->root->str, "happy") == 0);
    add_history(list, "joy");
    mu_assert("add_history(list, 'joy')", strcmp(list->root->next->str, "joy") == 0);
    return 0;
}

static char* test_get_history() {
    List* list = init_history();
    add_history(list, "happy");
    mu_assert("get_history(list, 1)", strcmp(get_history(list, 1), "happy") == 0);
    return 0;
}


static char* all_tests() {
    if (TEST_TOKENIZER) {
        mu_run_test(test_string_length);
        mu_run_test(test_is_valid_character);
        mu_run_test(test_find_word_start);
        mu_run_test(test_find_word_end);
        mu_run_test(test_count_words);
        mu_run_test(test_tokenize);
    }

    if (TEST_HISTORY) {
        mu_run_test(test_add_history);
        mu_run_test(test_get_history);
    }

    return 0;
}
*/
 int main(int argc, char **argv) {   
    /*char *result = all_tests();
    
    if (result != 0) 
        printf("Failed test: %s\n", result);
    else 
        printf("ALL TESTS PASSED\n");
    */
   char* copy;
   test_string_length();
    //printf("Tests run: %d\n", test_string_length());

    return 0;
 }
#ifndef _HISTORY_
#define _HISTORY_

typedef struct s_Item {
  int id;
  char* str;
  struct s_Item* next;
} Item;

typedef struct s_List {
  struct s_Item* root;
} List;

/* Initialize the linked list to keep the history. */
List* init_history(){
    struct s_List new_list = (s_list)malloc(sizeof(s_list));
    struct s_Item new_node = (s_item)malloc(sizeof(s_Item));
}

/* Add a history item to the end of the list.
   List* list - the linked list
   char* str - the string to store
*/
void add_history(List* list, char* str){
    if(list == NULL){
        list->next = str;
    }

    while(list != NULL){

    }

}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */
char* get_history(List* list, int id);

/* Print the entire contents of the list. */
void print_history(List* list){
    while(list != NULL){
        printf(" %d ", list->id); 
        list = list->next; 
    }
}

/* Free all Items and the List. */
void free_history(List* list);

#endif

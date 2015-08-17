#include <stdio.h>

// Linked list object
typedef struct s_word_object word_object; //make word_object = struct s_word_object
struct s_word_object{
	char *word;
	word_object *next;
};
static word_object *list_head;

//Add object to list
static void add_to_list(char *word) {
}

//Print and free objects



int main(void) {
char input_word[256];


while(scanf("%256s", input_word) != EOF){
	printf("%s\n",input_word);
//Collect input strings


//As to list
//Check count
}
//Print and free objects




	return 0;
	}


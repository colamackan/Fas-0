#include "listdb.h"
#include "graphics.h"

#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

int main(int argc, char *argv[]){
  proper_arguments(argc);
  welcome_logo();
  // Read the input file
  char *filename = argv[1];
  printf("Loading database \"%s\"...\n\n", filename);
  char buffer[128];
  Node list = make_database(buffer, filename);
  // Main loop
  int choice = -1;
  while(choice != 0){
    menu_choices(choice);
    scanf("%d", &choice);
    while(getchar() != '\n'); // Clear stdin
    Node cursor;
    switch(choice){

    case 1:
      // Query
      cursor = read_input(buffer, list);
      cursor = search_key(cursor, buffer);
      if(cursor == NULL){
	printf("Could not find an entry matching key \"%s\"!\n", buffer);
      }
      break;
    
    case 2:
      // Update
      cursor = read_input(buffer, list);
      cursor = search_key(cursor,buffer);
      if(cursor == NULL){
	printf("Could not find an entry matching key \"%s\"!\n", buffer);
      }else{
	update_value(cursor, buffer);
      }
      break;
    
    case 3:
      // Insert
      cursor = read_input(buffer, list);
      cursor = search_key(cursor, buffer);
      if(cursor != NULL){
	printf("\"%s\" already exists!\n", buffer);
      }else{
	list = insert_new_node(cursor, buffer, list);
      }
      break;
      
    case 4:
      // Delete
      cursor = read_input(buffer, list);
      list = delete_node(cursor, buffer);
      break;

    case 5:
      // Print database
      print_database(list);
      break;
    
    case 0:
      // Exit
      puts("Good bye!");
      break;
      
    default:
      // Please try again
      puts("Could not parse choice! Please try again");
    }
    puts("");
  }
  return 0;
}

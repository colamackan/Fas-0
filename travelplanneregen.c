#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "travelplannergraphics.h"


/* Startnod sätts till 0, nästa nod får värdet föregående nod + edge */

typedef struct route{
  int  *line;
  int *traveltime;
}*Route;

typedef struct node{
  char *name;
  char *next;
  char *prev;
}*Node;

/*
int proper_arguments(int argc){
  if (argc != 3){
    puts("USAGE: ./travelplanner [FILE] [FILE]");
    return -1;
  }
  else{
    return 0;
  }
}

void readinput(){}

Node enter_and_search_for_node(){
  printf("Enter the busstop: ");
  readinput(buffer, 128, stdin);
  puts("Searching the map for the chosen bus stop...\n");
}
*/

/*
Node clear_tree(){
}

void find_matching_route(){
}

void possible_routes(){
}

Node update_network(){
}

void delete_route(){
}

void insert_route(){
} 

Node delete_busstop(){
}

Node insert_busstop(){
}
*/


/*
Node make_network (char *network){
  char *list = NULL;
  FILE *busnetwork = fopen(network,"r");
  Node *busstop = malloc(sizeof(struct node));
  char *first_line = fgets(list, 128, busnetwork);
  int len = strlen(first_line);

  for(int i = 0; i <= len; i++){
    if (isalpha(busstop[i])) continue;
    list = isalpha(busstop[i]);
    for (int j = 0; j<= list; j++)
      if (*name != list){
	busstop->name = malloc(strlen(list+1));
	strcpy(busstop->name, list);
	else if (*name = list){
	  busstop->next = malloc(strlen(list+1));
	  strcpy(busstop->next, list);
	  return busstop};
      }
      else printf("No station available");
  }
}
*/


int main(int argc, char *argv[]){
  logo();
  // proper_arguments(argc);
  //make_network(argv[1]);
  int choice = -1;
  while(choice != 0){
    int editchoice = -1;
    menu(choice);
    scanf("%d", &choice);
    switch(choice){
    case 1:
      
      break;
    case 2:
      
      break;
    case 3:
      
      break;
    case 4:
	while (editchoice != 0){
	  edit_network_menu(editchoice);
	  scanf("%d", &editchoice);
	  switch(editchoice){
	  case 1:
	  break;
	  case 2:
	  break;
	  case 3:
	  break;
	  case 4:
	  break;
	  case 0:
	  break;
	  default:
	    puts("Invalid choice, try again!");
	  }
	}
      break;
    case 0:
    puts("Good bye!");
    break;
    
    default:
    puts("Invalid choice, try again!");
    }  
  puts("");
  }
  return 0;
}
 

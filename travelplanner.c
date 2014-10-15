#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
  struct node *next_stop;
}*Node;

int proper_arguments(int argument){
  if (argument != 3){
    puts("USAGE: ./travelplanner [FILE] [FILE]");
    return -1;
  }
  else{
    return 0;
  }
}

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


char readline(char *dest, int n, FILE *source){
  fgets(dest, n, source);
  int len = strlen(dest);
  if(dest[len-1] == '\n')
    dest[len-1] = '\0';
  return *dest;
}


Node make_network (char *network){
  char *list = NULL;
  char s[2] = ", ";
  FILE *busnetwork = fopen(network,"r");
  *list = readline(list, 128, busnetwork);
  list = strtok(list,s);
  Node busstop = malloc(sizeof(struct node));
  for(int i = 0; i != '\0'; i++){
    *list = isalpha(list[i]);
  }
  while (list != NULL){
    if (strcmp(list, busstop->name) == 0){
      busstop->next = malloc(strlen(list)+1);
      strcpy(busstop->next, list);}
    else{
      busstop->name = malloc(strlen(list)+1);
      strcpy(busstop->name, list);}
  }
  printf("Busstop: %s\nLinked stops: %s",busstop->name, busstop->next);
  return busstop;
}



int main(int argc, char *argv[]){
  proper_arguments(argc);
  make_network(argv[1]);
  logo();
  int choice = -1;
  int time;
  /*  while(choice != 0){
    int editchoice = -1;
    menu(choice);
    scanf("%d", &choice);
    switch(choice){
    case 1:
      possible_routes();
      break;
    case 2:
      find_matching_routes();
      break;
    case 3:
      find_matching_routes();
      break;
    case 4:
	while (editchoice != 0){
	  edit_network_menu(editchoice);
	  scanf("%d", &editchoice);
	  switch(editchoice){
	  case 1:
	    delete_busstop();
	  break;
	  case 2:
	    insert_busstop();
	  break;
	  case 3:
	    delete_route();
	  break;
	  case 4:
	    insert_route();
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
  */
  return 0;
} 
 

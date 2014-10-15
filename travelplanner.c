#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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


int main(int argc, char *argv[]){
  make_network(argv[1]);
  return 0;
}
 

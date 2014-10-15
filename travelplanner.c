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
  struct node *next_stop;
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

int readline(char *dest, int n, FILE *source){
  fgets(dest, n, source);
  int len = strlen(dest);
  if(dest[len-1] == '\n')
    dest[len-1] = '\0';
  return len;
}


Node make_network (char *network){
  char *list = NULL;
  FILE *busnetwork = fopen(network,"r");
  Node busstop = malloc(sizeof(struct node));
  readline(list, 128, busnetwork);
  for(int i = 0; i != '\0'; i++){
    if (isalpha(&busstop[i])){;
      list = (isalpha(&busstop[i]));
      while (list != NULL){
	if (strcmp(list, busstop->name) == 0){
	  busstop->next = malloc(strlen(list)+1);
	  strcpy(busstop->next, list);}
	else{
	  busstop->name = malloc(strlen(list)+1);
	  strcpy(busstop->name, list);}
      }
    }
    else{
      readline(list, 128, busnetwork);
    }
  }
  printf("Name: %s\n",busstop->name);
  return busstop;
}

int main(int argc, char *argv[]){
  make_network(argv[1]);
  return 0;
}
 

#include <stdio.h>
#include <stdlib.h>


/* Startnod sätts till 0, nästa nod får värdet föregående nod + edge */





typedef struct node{
  char *name;
  int  *line;
  int current_time;
  char *edge;
  struct node *next;
}*Node;


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

void readline(FILE *busnetwork){

}

Node make_network (char *network){
  FILE *busnetwork = fopen(network,"r");
  Node busstop = malloc(sizeof(struct node));
  
}


int main(int argc, char *argv[]){

  return 0;
}

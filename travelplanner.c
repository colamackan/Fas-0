#include <stdio.h>
#include <stdlib.h>


typedef struct node{
  char *name;
  char *line;
  int *traveltime;
  struct node *next;
}*Node;


void find_matching_route(){
}

void possible_routes(){
}

void update_network(){
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
  FILE *busnetwork = fopen("~/IOOPM/natverk.txt","r");
  Node busstop = malloc(sizeof(struct node));
  
}
ASASAS

int main(){
  FILE *start = fopen("~/IOOPM/start.txt","r");
  return 0;
}

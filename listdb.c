#include "listdb.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node{
  char *key;
  char *value;
  struct node *next;  
} *Node;


Node make_database (char *buffer, char *filename){
  Node list = NULL;
  FILE *database = fopen(filename, "r");
  while(!(feof(database))){
    Node newNode = malloc(sizeof(struct node));
    readline(buffer, 128, database);
    newNode->key = malloc(strlen(buffer) + 1);
    strcpy(newNode->key, buffer);
    readline(buffer, 128, database);
    newNode->value = malloc(strlen(buffer) + 1);
    strcpy(newNode->value, buffer);
    newNode->next = list;
    list = newNode;
  }
  return list;
}

Node insert_new_node(Node cursor, char *buffer, Node list){
   // Insert new node to the front of the list
    puts("Key is unique!\n");
    Node newNode = malloc(sizeof(struct node));
    newNode->key = malloc(strlen(buffer) + 1);
    strcpy(newNode->key, buffer);
    printf("Enter value: ");
    readline(buffer, 128, stdin);
    newNode->value = malloc(strlen(buffer) + 1);
    strcpy(newNode->value, buffer);
    newNode->next = list;
    list = newNode;
    puts("");
    puts("Entry inserted successfully:");
    printf("key: %s\nvalue: %s\n", list->key, list->value);
    return newNode;  
}

void update_value(Node cursor, char *buffer){
  if(cursor != NULL ){
    printf("Enter new value: ");
    readline(buffer, 128, stdin);
    free(cursor->value);
    cursor->value = malloc(strlen(buffer) + 1);
    strcpy(cursor->value, buffer);
    puts("Value inserted successfully!");
  }
}

Node delete_node(Node cursor, char *buffer){
  Node temp = cursor;
  Node prev = NULL;
  while(cursor != NULL){
    if(strcmp(buffer, cursor->key) == 0){
      if(prev == NULL){ // Delete first node
	printf("Deleted the following entry:\nkey: %s\nvalue: %s\n", cursor->key, cursor->value);
	cursor = cursor->next;
	return cursor;
      }
      else{
	prev->next = cursor->next;
	printf("Deleted the  entry:\nkey: %s\nvalue: %s\n", cursor->key, cursor->value);
	return temp;
      }
    }else{
      prev = cursor;
      cursor = cursor->next;
    }
  }
  puts("Key doesn't exist");
  return temp;
}

void readline(char *dest, int n, FILE *source){
  fgets(dest, n, source);
  int len = strlen(dest);
  if(dest[len-1] == '\n')
    dest[len-1] = '\0';
}

Node read_input (char *buffer, Node list){
  printf("Enter key: ");
  readline(buffer, 128, stdin);
  puts("Searching database...\n");
  Node cursor = list;
  return cursor;
}


int proper_arguments (int arguments){
  if (arguments != 2) {
    puts("Usage: db [FILE]");
    return -1;
  }
  else {
    return 0;
  }
}

Node search_key(Node cursor, char *buffer){
  while(cursor != NULL){
    if(strcmp(buffer, cursor->key) == 0){
      puts("Found entry:");
      printf("key: %s\nvalue: %s\n", cursor->key, cursor->value);
      return cursor;
    }else{
      cursor = cursor->next;
    }
  }
  return NULL;
}


void print_database(Node list){
  Node cursor = list;
  while(cursor != NULL){
    puts(cursor->key);
    puts(cursor->value);
    cursor = cursor->next;
  }
}

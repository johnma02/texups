#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node
{
  char *name;    
  int   data;
  struct node *next;
} node_t; 

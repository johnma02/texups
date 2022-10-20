#include "mp3.h"

extern node_t *head;

/*
bool cmp(node_t *a, node_t *b){
    return (a->data == b->data) && !(strcmp(a->name, b->name));
}
// from before Shen sent email
*/

void delete(int x){
    node_t **ind = &head;
    int del = 0;
    while((*ind) != NULL){
        if((*ind)->data == x){
        node_t *temp;
        temp = (*ind);

        *ind = (*ind)->next; 
        free(temp->name);
        free(temp);
        del++;
    }
        else{
            ind = &((*ind)->next);
        }
    }
    
    printf("Job finished: Deleted %d node(s) with value [%d]", del,x);
}

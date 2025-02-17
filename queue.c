#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int value;
    struct node* next;
}node;

typedef struct queue{
    node* head;
    node* tail;
}queue;

void init_queue(queue *q){
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *q,int value){
    node *newnode = malloc(sizeof(node));
    newnode->value = value;
    newnode->next = NULL;

    if(q->tail != NULL){
        q->tail->next = newnode;
    }
}

bool dequeue(queue *muqueue){

}

int main(){

    return 0;
}
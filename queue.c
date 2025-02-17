#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int value;
    struct node* next;
}node;

typedef struct queue{
    struct queue* head;
    struct queue* tail;
}queue;

void init_queue(queue *q){
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *muqueue,int value){

}

bool dequeue(queue *muqueue){

}

int main(){

    return 0;
}
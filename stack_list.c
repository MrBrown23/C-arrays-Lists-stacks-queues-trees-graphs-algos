#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_EMPTY INT_MIN

typedef struct node{
    int data;
    struct node* next;
}node;

typedef node* stack;

// node* head = NULL;

bool push(stack *mystack,int value){
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL) return false;
    newnode->data = value;
    newnode->next = *mystack;
    *mystack = newnode;
    return true;
}

int pop(stack *mystack){
    if(*mystack == NULL)
        return STACK_EMPTY;
    int value = (*mystack)->data;
    node * tmp = (*mystack);
    *mystack = (*mystack)->next;
    free(tmp);
    return value;
}

int main(){
    stack s1=NULL, s2=NULL, s3=NULL;
    push(&s1,25);  
    push(&s2,44);
    push(&s2,34);
    push(&s2,24);
    push(&s2,14);
    push(&s3,50);
    int t;
    while((t= pop(&s2))!= STACK_EMPTY){
        printf("%d\n", t);
    }
    return 0;
}
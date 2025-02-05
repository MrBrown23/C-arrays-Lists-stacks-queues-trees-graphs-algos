#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
    
}node;


void displaylist(node *head){
    node *p;
    p = head;
    while(p!=NULL){
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main(){
    node *head;
    node * elm2;
    head = (node*)malloc(sizeof(node));
    head->data = 15;
    head->next = elm2;
    elm2->data = 22;
    elm2->next = NULL;
    displaylist(head);
    return 0;
}
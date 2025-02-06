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
    node head;
    
    head.data = 15;
    head.next = malloc(sizeof(node));
    head.next->data = 22;
    head.next->next = NULL;
    displaylist(&head);
    free(head.next);
    return 0;
}
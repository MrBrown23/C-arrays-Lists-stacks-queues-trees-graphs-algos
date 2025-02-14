#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    node *next;
}node;

void print_list(node *head){
    node *temp = head;
    while(temp != NULL){
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    return 0;
}
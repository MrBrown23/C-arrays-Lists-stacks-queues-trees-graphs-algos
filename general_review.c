#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node * next;
}node;

void print_list(node* head){
    node *p = NULL;
    p = head;
    while(p!=NULL){
        printf("%d->", p->value);
        p = p->next;
    }
    printf("NULL\n");
}

node *create_list(int n){
    node* head = NULL;
    node* p = NULL;
    node* tmp = NULL;
    for(int i=0; i<n; i++){
        tmp = malloc(sizeof(node));
        tmp->value = i;
        tmp->next = NULL;
        if(head == NULL){
            head = tmp;
        }
        else{
            if(p == NULL){
                p = head;
            }
            else{
                while(p->next!=NULL){
                    p = p->next;
                }
                p->next = tmp;
            }
        }
    }
    return head;
}

int main(){
    node *head=NULL;
    head = create_list(5);
    print_list(head);
    return 0;
}
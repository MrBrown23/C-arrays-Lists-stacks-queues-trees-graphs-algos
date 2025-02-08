#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}node;


void print_list(node *head){
    node *p;
    p=head;
    while(p!=NULL){
        printf("%d->", p->value);
        p = p->next;
    }
    printf("NULL\n");

}

node *create_list(){
    node *head = NULL;
    node * p = NULL;
    node * tmp = NULL;
    char choice;
    do{
        tmp = (node*)malloc(sizeof(node));
        printf("Enter a new element for your list:");
        scanf("%d", &(tmp->value));
        tmp->next = NULL;
        if(head == NULL){
            head = tmp;
        }
        else{
            p = head;
            while(p->next!=NULL){
                p = p->next;
            }
            p->next = tmp;
        }
         printf("Do you want to continue(Y/N)? ");
        scanf(" %c",&choice);

    }while(choice == 'y' || choice == 'Y');

    return head;
}

int main(){
   node* head=NULL;
    int length = 17;
    head = create_linked_list();
    display_list(head);
}
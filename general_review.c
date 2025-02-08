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
    node * p =NULL;
    node * head =NULL;
    node * tmp =NULL;
    char choice;
    do{
        printf("Do you want to continue(Y/N)? ");
        scanf(" %c", &choice);

    }while(choice == 'Y' || choice == 'y');
    return head;
}

int main(){
    node * head;
}
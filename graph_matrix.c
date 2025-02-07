#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node;

void print_list(node* head){
    node *p;
    p=head;
    while(p!=NULL){
        printf("%d->", p->value);
        p = p->next;
    }
    printf("NULL\n");
}

node* crate_list(){
    node *head = NULL;
    node *tmp = NULL;
    node *p = NULL;
    char choice;

    do{
        tmp = (node*)malloc(sizeof(node));
        printf("Enter a new element of the list: ");
        scanf("%d",&(tmp->value));
        if(head == NULL){
            head = tmp;
        }
        else{

                p = head;
                while(p->next!=NULL){
                    p=p->next;
                }
                p->next = tmp;
        }

        printf("Do you want to continue(Y/N)? ");
        scanf(" %c", &choice);
    }while (choice == 'Y' || choice == 'y');

    return head;
}
int main(){
    node *head = NULL;
    head = crate_list();
    print_list(head);
    return 0;

}
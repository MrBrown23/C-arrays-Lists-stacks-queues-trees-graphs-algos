#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}node;

void print_list(node *head){
    node *temp = head;
    while(temp != NULL){
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

node *create_list(){
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
    char choice;
    do
    {
        temp = malloc(sizeof(node));
        printf("Enter a new element to the list: ");
        scanf("%d", &(temp->value));
        temp->next =NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            p = head;
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return head;
    
}

int main(){
    node *head = create_list();
    print_list(head);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
    struct node *prev;
}node;

void print_list(node *head){
    node *temp = head;
    while(temp != NULL){
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

node *get_tail(node *head){
    node *tail = NULL;
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    tail = temp;
    return tail;
}

void insert_at_tail(node *head, int value){
    node *tail = get_tail(head);
    node *temp = malloc(sizeof(node));
    temp->value = value;
    temp->next = NULL;
    temp->prev = tail;
    tail->next = temp;
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
            head->prev = NULL;
        }
        else{
            p = head;
            while(p->next != NULL)
            {
                p->next->prev = p;
                p = p->next;
                
            }
            temp->prev = p;
            p->next = temp;
        }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return head;
    
}

void print_reverse_list(node *head){
    node *tail = get_tail(head);
    node *temp = tail;
    while(temp != NULL){
        printf("%d->", temp->value);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main(){
    node *head = create_list();
    print_list(head);
    node *tail = get_tail(head);
    print_list(tail);
    insert_at_tail(head, 189);
    print_list(head);
    print_reverse_list(head);
    return 0;
}
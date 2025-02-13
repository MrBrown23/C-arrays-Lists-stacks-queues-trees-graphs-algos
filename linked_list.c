#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node *next;
}Node;

typedef struct Node node;

node *create_list(){
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
    char choice;
    do{
        temp = malloc(sizeof(node));
        printf("Enter a new element into the list: ");
        scanf("%d",&(temp->value));
        temp->next = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            p = head;
            while (p->next != NULL)
            {
               p = p->next;
            }
            p->next = temp;
            
        }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
    }while(choice == 'Y' || choice == 'y');

    return head;
}

void print_list(node *head){
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
    free(temp);
}

void insert_at_tail(node *head, int value){
    node *tail = head;
    node *tmp = malloc(sizeof(node));
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tmp->value = value;
    tmp->next = NULL;
    tail->next = tmp;
}

node *get_tail(node *head){
    node *tail = head;
    while (tail->next != NULL)
    {
       tail = tail->next;
    }
    return tail;
    
}

int main(){
    node *head = create_list();
    print_list(head);
    insert_at_tail(head, 44);
    print_list(head);
    node * tail = get_tail(head);
    print_list(tail);
    return 0;
}

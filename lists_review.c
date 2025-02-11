#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
}node;

void print_list(node* head){
    node *p = head;
    while(p!=NULL){
        printf("%d->", p->value);
        p = p->next;
    }
    printf("NULL\n");
}

node *create_list(){
    node* head = NULL;
    node* temp = NULL;
    node* p = NULL;
    char choice;
    do{
        temp = (node*)malloc(sizeof(node));
        printf("Enter a new element to the list: ");
        scanf("%d", &(temp->value));
        if(head == NULL){
            head = temp;
        }
        else{
            p = head;
            while(p->next!=NULL){
                p = p->next;
            }
            p->next = temp; 
        }
        
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
    }while (choice == 'Y' || choice == 'y');
    return head;
}


int main(){
    node* head;
    head = create_list();
    print_list(head);
    return 0;

}
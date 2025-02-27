#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int value;
    struct Node *next;
};

typedef struct Node node;

void print_list(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

node* create_list()
{
    node* head = NULL;
    node* temp = NULL;
    node* p = NULL;

    char choice;

    do
    {
        temp = malloc(sizeof(node));
        printf("Enter a new element to the list: ");
        scanf("%d", &(temp->value));
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while(p->next != NULL)
            {
                p = p->next;
            }

            p->next = temp;
        }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return head;
    
}

int main()
{
    node *head = create_list();

    print_list(head);
    return 0;
}

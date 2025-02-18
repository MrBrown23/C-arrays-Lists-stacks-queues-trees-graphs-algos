#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define EMPTY_STACK INT_MIN

typedef struct node{
    int value;
    struct node* next;
}node;

node *head = NULL;

bool push(int value)
{
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL)
    {
        return false;
    }
    newnode->value = value;
    newnode->next = head;
    head = newnode;
}

int pop()
{
    if(head == NULL) return EMPTY_STACK;
    int result = head->value;
    node *temp = head;
    head = head->next;
    free(temp);
    return result;
}

int main()
{

}
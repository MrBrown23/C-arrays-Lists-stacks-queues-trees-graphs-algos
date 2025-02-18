#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define EMPTY_STACK INT_MIN

typedef struct node{
    int value;
    struct node* next;
}node;

typedef node* stack;



bool push(stack *s,int value)
{
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL)
    {
        return false;
    }
    newnode->value = value;
    newnode->next = *s;
    *s = newnode;
    return true;
}

int pop(stack *s)
{
    if(*s == NULL) return EMPTY_STACK;
    int result = (*s)->value;
    node *temp = *s;
    *s = (*s)->next;
    free(temp);
    return result;
}

int main()
{
    stack s1 = NULL, s2 = NULL, s3 = NULL;
    for (int i = 0; i < 5; i++)
    {
        push(&s1,i);
    }

    int t;
    while((t=pop(&s1)) != EMPTY_STACK)
    {
        printf("%d\n", t);
    }
}
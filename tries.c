#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_CHARS 256

typedef struct trienode
{
    struct trienode *children[NUM_CHARS];
    bool terminal;

}trienode;

trienode *createnode()
{
    trienode *newnode = malloc(sizeof(trienode));
    for(int i=0; i<NUM_CHARS;i++)
    {
        newnode->children[i] = NULL;
    }

    newnode->terminal = false;
    return newnode;
}

int main()
{
    return 0;
}
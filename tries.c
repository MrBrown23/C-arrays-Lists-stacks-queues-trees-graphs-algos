#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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

bool trieinsert(trienode **root, char *signedtext)
{
    if(*root == NULL)
    {
        *root = createnode();
    }
    trienode *temp = *root;
    unsigned char *text = (unsigned char *)signedtext;
    int length = strlen(signedtext);
    for(int i=0; i<length; i++)
    {
        if(temp->children[text[i]] == NULL){
            temp->children[text[i]] = createnode();
        }
        temp = temp->children[text[i]];
    }
    if(temp->terminal){
        return false;
    }
    else 
    {
       temp->terminal = true;
       return true;
    }
    
}

int main()
{
    return 0;
}
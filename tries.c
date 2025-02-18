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

void print_rec(trienode *node, unsigned char *prefix, int length)
{
    unsigned char newprefix[length + 2];
    memcpy(newprefix, prefix, length);
    newprefix[length + 1] = 0;

    if(node->terminal)
    {
        printf("Word %s", prefix);
    }

    for(int i=0; i<NUM_CHARS; i++)
    {
        if(node->children[i] != NULL)
        {
            newprefix[length] = i;
            print_rec(node->children[i], newprefix, length+1);
        }
    }

}
void printtrie(trienode *root)
{
    if(root == NULL)
    {
        printf("Trie empty");
        return;
    }
    print_rec(root, NULL, 0);
}

int main()
{
    return 0;
}
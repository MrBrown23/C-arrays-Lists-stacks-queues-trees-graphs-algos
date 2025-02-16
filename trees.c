#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct tree_node{
    int value;
    struct tree_node* left;
    struct tree_node* right;
}tree_node;

tree_node* create_node(int value){
    tree_node *root = malloc(sizeof(tree_node));
    root->value = value;
    root->left = NULL;
    root->right = NULL;
}

int main(){
    tree_node* root = malloc(sizeof(tree_node));

    root->value = 0;
    root->left = create_node(1);
    root->right = create_node(2);


    return 0;
}
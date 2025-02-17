#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node{
    int value;
    struct tree_node *left;
    struct tree_node *right;
}tree_node;

void print_tree(tree_node *root){
    if(root == NULL){
        printf("=================<Empty>====================\n");
        return;
    }
    printf("value = %d\n", root->value);
    printf("left of %d\n", root->value);
    print_tree(root->left);
    printf("right of %d\n", root->value);
    print_tree(root->right);
}

tree_node *create_node(int value){
    tree_node *node = malloc(sizeof(tree_node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main(){
    tree_node *root = create_node(0);
    tree_node *n1 = create_node(1);
    tree_node *n2 = create_node(2);
    tree_node *n3 = create_node(3);
    tree_node *n4 = create_node(4);
    tree_node *n5 = create_node(5);
    tree_node *n6 = create_node(6);

    root->left = n1;
    root->right = n2;

    n1->left = n3;
    n1->right = n4;

    n2->left = n5;
    n2->right = n6;

   

    print_tree(root);

    return 0;
       

}
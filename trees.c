#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool insert_number(tree_node **rootptr, int value){
    tree_node *root = *rootptr;
    if(root == NULL){
        (*rootptr) = create_node(value);
        return true;
    }

    if(value == root->value){
        return false;
    }
    if(value > root->value){
        return insert_number(&(root->left), value);
    }
    else 
    {
        return insert_number(&(root->right), value);
    }  
}

bool find_number(tree_node *root, int value){
    tree_node *temp = root;
    if(root == NULL){
        return false;
    }

    if(value == temp->value){
        return true;
    }

    if(value > root->value){
        return find_number(temp->left, value);
    }
    else{
        return find_number(temp->right, value);
    }
}

void print_search_result(bool flag){
    if(flag)
        printf("We found the number");
    else
    printf("Number not found");
}

int main(){
    tree_node *root = NULL;

    insert_number(&root, 19);
    insert_number(&root, 11);
    insert_number(&root, 5);
    insert_number(&root, 24);
    insert_number(&root, 16);
    insert_number(&root, 15);
   
   

    print_tree(root);

    return 0;
       

}
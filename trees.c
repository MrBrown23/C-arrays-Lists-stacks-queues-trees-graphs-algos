#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct tree_node
{
    int value;
    struct tree_node* left;
    struct tree_node* right;
}tree_node;


tree_node* create_node(int value)
{
    tree_node *root = malloc(sizeof(tree_node));
    root->value = value;
    root->left = NULL;
    root->right = NULL;
}

void print_dfs(tree_node *root)
{
    tree_node* tree_stack[20];
    int tree_stack_num = 0;
    tree_stack[tree_stack_num] = root;
    tree_stack_num++;
    while (tree_stack_num > 0)
    {
       tree_node *current_node = tree_stack[tree_stack_num-1];
       tree_stack_num--;

       printf("%d ", current_node->value);
       
       if(current_node->right != NULL){
        tree_stack[tree_stack_num] = current_node->right;
        tree_stack_num++;
       }

       
       if(current_node->left != NULL){
        tree_stack[tree_stack_num] = current_node->left;
        tree_stack_num++;
       }
    }
    printf("\n");
    
   
}


int main()
{
    tree_node* root = malloc(sizeof(tree_node));

    root->value = 0;
    root->left = create_node(1);
    root->right = create_node(2);
    root->left->left = create_node(3);
    root->left->right = create_node(4);
    root->right->left = create_node(5);
    root->right->right = create_node(6);

    // printf("Root: %d\n", root->value);
    // printf("Left child: %d\n", root->left->value);
    // printf("Right child: %d\n", root->right->value);

    print_dfs(root);

    return 0;
}
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

void print_bfs(tree_node *root)
{
    tree_node *queue_tree[20];
    int size = 0;
    queue_tree[size] = root;
    size++;
    while (size > 0)
    {
        tree_node *current_node = queue_tree[size-1];
        size--;
        printf("%d ", current_node->value);
        if(current_node->left != NULL){
            queue_tree[size] = current_node->left;
            size++;
           }
           
        if(current_node->right != NULL){
            queue_tree[size] = current_node->right;
            size++;
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
    print_bfs(root);

    // printf("Root: %d\n", root->value);
    // printf("Left child: %d\n", root->left->value);
    // printf("Right child: %d\n", root->right->value);

    print_dfs(root);

    return 0;
}
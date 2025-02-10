#include <stdio.h>
#include <stdlib.h>

#define LIST_LENGTH 70

struct node{
	int value;
	struct node* next;
};

typedef struct node node_t;

void print_list(node_t *head){
	node_t *p = NULL;
	p = head;
	while (p!=NULL)
	{
		printf("%d->",p->value);
		p = p->next;
	}
	printf("NULL\n");
	
}

node_t *create_new_node(int value){
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
}

node_t *insert_at_head(node_t *head, node_t *tmp){
	tmp->next = head;
	head = tmp;
	return head;
}

void insert_at_index(node_t *head, int value, int num){
	node_t *tmp = head;
	node_t *p=NULL;
	while(tmp!=NULL){
		if(tmp->value == value){
			p = tmp;
			break;
		}
	}
	tmp->next = p;
	p = tmp;
}

node_t *get_tail(node_t *head){
	node_t *tmp=head;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	return tmp;
}

void insert_at_tail(node_t *head, int value){
	node_t *tmp = create_new_node(value);
	node_t *tail = get_tail(head);
	print_list(tail);
	tail->next = tmp;
	tmp->next = NULL;
}

void remove_at_tail(node_t *head){
	node_t *tail = get_tail(head);
	tail = NULL;
}

int main(){

	node_t *head = NULL;
	node_t *tmp;
	node_t *tail;
	for(int i=0;i<LIST_LENGTH;i++){
		tmp = create_new_node(i);
		head = insert_at_head(head, tmp);

	}
	
	print_list(head);
	insert_at_tail(head, 70);
	print_list(head);
	remove_at_tail(head);
	print_list(head);

	return 0;
}
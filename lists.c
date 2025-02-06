#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node * create_linked_list();
void display_list(node* head);

int main(){
	node * head = NULL;
	head = create_linked_list();
	display_list(head);
	return 0;
}

void display_list(node* head){
	
	node * p;
	p = head;
	while(p!=NULL){
		printf("%d->",p->data);
		p = p->next;
	}
	printf("NULL\n");
}

node *create_linked_list(){
	node *head = NULL;
	node *p = NULL;
	node *temp = NULL;
	char choice;
	do{
		temp = (node*)malloc(sizeof(node*));
		printf("Enter a new element: ");
		scanf("%d",&(temp->data));
		temp->next = NULL;
		if(head == NULL){
			head = temp;
		}
		else{
			p = head;
			while(p->next!=NULL){
				p = p->next;
			}
			p->next = temp;
		}
		printf("Do you want to add a new element(Y/N)? ");
		scanf(" %c",&choice);

	}while(choice == 'Y' || choice == 'y');
	return head;
}
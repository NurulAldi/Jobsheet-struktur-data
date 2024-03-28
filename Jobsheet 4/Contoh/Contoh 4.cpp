#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};

void push(struct Node **head_ref, int new_data){
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	new_node->prev = NULL;
	if((*head_ref) != NULL){
		(*head_ref)->prev = new_node;
	}
	(*head_ref) = new_node;
}

// diberikan sebuah node sebagai next_node, sisipkan new_node sebelum next_node
void insertBefore(struct Node **head_ref, struct Node *next_node, int new_data){
	//1. cek apakah node yang diberikan NULL
	if(next_node == NULL){
		printf("Node yang diberikan tidak boleh NULL");
		return;
	}
	//2. alokasikan node baru
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	//3. masukkan data
	new_node->data = new_data;
	//4. buat prev dari new_node menjadi prev dari next_node
	new_node->prev = next_node->prev;
	//5. ubah prev dari next_node menjadi new_node
	next_node->prev = new_node;
	//6. buat next dari new_node menjadi next_node
	new_node->next = next_node;
	//7. buat next dari prev new_node menjadi new_node jika prev new_node tidak NULL
	if(new_node->prev != NULL){
		new_node->prev->next = new_node;
	} //8. jika prev new_node adalah NULL maka new_node akan menjadi head
	else{
		(*head_ref) = new_node;
	}
}

void printList(struct Node *node){
	struct Node *last;
	printf("\nBergerak ke arah depan\n");
	while(node != NULL){
		printf("%d ", node->data);
		last = node;
		node = node->next;
	}
	printf("\nBergerak ke arah belakang\n");
	while(last != NULL){
		printf("%d ", last->data);
		last = last->prev;
	}
}

int main(){
	// mulai dengan list kosong 
	struct Node *head = NULL;
	push(&head, 7);
	push(&head, 1);
	push(&head, 4);
	insertBefore(&head, head->next, 8);
	printf("Created DLL is : ");
	printList(head);
	getchar();
	return 0;
}

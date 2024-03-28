#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next; // pointer ke node selanjutnya
	struct Node *prev; // pointer ke node sebelumnya
};

void push(Node **head_ref, int new_data){
	//1. alokasikan node
	Node *new_node = new Node();
	//2. Masukkan data
	new_node->data = new_data;
	//3. Buat next dari new node sebagai head dan prev sebagai NULL
	new_node->next = (*head_ref);
	new_node->prev = NULL;
	//4. Ubah prev dari head node menjadi new_node
	if((*head_ref) != NULL){
		(*head_ref)->prev = new_node;
	}
	//5. Ubah posisi head ke new_node
	(*head_ref) = new_node;
}

void append(struct Node **head_ref, int new_data){
	//1. alokasikan node
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = *head_ref; // digunakan pada step 5
	//2. masukkan data
	new_node->data = new_data;
	//3. new_node ini akan menjadi node terakhir, jadi ubah next nya ke NULL
	new_node->next = NULL;
	//4. jika linked list kosong, maka buat new_node menjadi head
	if(*head_ref == NULL){
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	//5. jika tidak, geser sampai node terakhir
	while(last->next != NULL){
		last = last->next;
	}
	//6. ubah next dari last node
	last->next = new_node;
	//7. ubah prev dari new_node menjadi last node
	new_node->prev = last;
	return;
}

void printList(struct Node* node){
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
	// sisipkan 6, sehingga linked list menjadi 6->NULL
	append(&head, 6);
	// sisipkan 7 di awal sehingga linked list menjadi 7->6->NULL
	push(&head, 7);
	// sisipkan 1 di awal sehingga linked list menjadi 1->7->6->NULL
	push(&head, 1);
	// sisipkan 4 di akhir sehingga linked list menjadi 1->7->6->4->NULL
	append(&head, 4);
	printf("Created DLL is : ");
	printList(head);
	getchar();
	return 0;
}


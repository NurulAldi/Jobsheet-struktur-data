#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Struktur stack
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

// Fungsi untuk membuat stack kosong
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// Fungsi untuk mengecek apakah stack kosong
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Fungsi untuk mengecek apakah stack penuh
int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Fungsi untuk menambahkan karakter ke stack
void push(Stack* stack, char c) {
    if (isFull(stack)) {
        printf("Stack penuh!\n");
        return;
    }
    stack->data[++stack->top] = c;
}

// Fungsi untuk menghapus karakter dari stack dan mengembalikannya
char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong!\n");
        return '\0';
    }
    return stack->data[stack->top--];
}

// Fungsi untuk membalikkan sebuah kata menggunakan stack
void pembalikKata(char* kata) {
    Stack* stack = createStack();
    int length = strlen(kata);

    // Memasukkan karakter-karakter ke stack
    for (int i = 0; i < length; i++) {
        push(stack, kata[i]);
    }

    // Mengeluarkan karakter-karakter dari stack untuk membalikkan kata
    for (int i = 0; i < length; i++) {
        kata[i] = pop(stack);
    }

    free(stack);
}

int main() {
    int choice;
    char kata[MAX_SIZE];

    do {
        printf("\nMenu:\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);
		fflush(stdin);
        switch (choice) {
            case 1:
                printf("Masukkan kata: ");
                gets(kata);
                break;
            case 2:
                pembalikKata(kata);
                printf("Kata terbalik: %s\n", kata);
                break;
            case 3:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (choice != 3);

    return 0;
}


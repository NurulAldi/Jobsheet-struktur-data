#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Struktur data mahasiswa
typedef struct {
    int NIM;
    char nama[50];
    int nilai;
} Mahasiswa;

// Struktur stack
typedef struct {
    Mahasiswa data[MAX_SIZE];
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

// Fungsi untuk menambahkan data mahasiswa ke stack
void push(Stack* stack, Mahasiswa mhs) {
    if (isFull(stack)) {
        printf("Stack penuh!\n");
        return;
    }
    stack->data[++stack->top] = mhs;
    printf("Data mahasiswa berhasil ditambahkan.\n");
}

// Fungsi untuk mengambil data mahasiswa dari stack
Mahasiswa pop(Stack* stack) {
    Mahasiswa empty_mhs = {0, "", 0};
    if (isEmpty(stack)) {
        printf("Stack kosong!\n");
        return empty_mhs;
    }
    return stack->data[stack->top--];
}

// Fungsi untuk menampilkan isi stack
void display(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Isi Stack:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("NIM: %d, Nama: %s, Nilai: %d\n", stack->data[i].NIM, stack->data[i].nama, stack->data[i].nilai);
    }
}

// Fungsi untuk membandingkan dua NIM untuk keperluan sorting
int compareNIM(const void* a, const void* b) {
    Mahasiswa* mhs1 = (Mahasiswa*)a;
    Mahasiswa* mhs2 = (Mahasiswa*)b;
    return mhs1->NIM - mhs2->NIM;
}

// Fungsi untuk melakukan sorting data berdasarkan NIM
void sortStackByNIM(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong!\n");
        return;
    }
    qsort(stack->data, stack->top + 1, sizeof(Mahasiswa), compareNIM);
    printf("Data berhasil diurutkan berdasarkan NIM.\n");
}

int main() {
    Stack* stack = createStack();
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1. Tambah Data Mahasiswa\n");
        printf("2. Hapus Data Mahasiswa\n");
        printf("3. Tampilkan Data Mahasiswa\n");
        printf("4. Urutkan Data Mahasiswa berdasarkan NIM\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                {
                    Mahasiswa mhs;
                    printf("Masukkan NIM: ");
                    scanf("%d", &mhs.NIM);
                    fflush(stdin);
                    printf("Masukkan Nama: ");
                    gets(mhs.nama);
                    printf("Masukkan Nilai: ");
                    scanf("%d", &mhs.nilai);
                    fflush(stdin);
                    push(stack, mhs);
                }
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                sortStackByNIM(stack);
                break;
            case 5:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (choice != 5);

    free(stack);
    return 0;
}


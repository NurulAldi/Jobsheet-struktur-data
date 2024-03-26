#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Fungsi untuk memeriksa apakah sebuah bilangan prima
bool cekPrima(int num) {
    if (num <= 1) {
        return false;
    }
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Fungsi untuk menghasilkan bilangan prima pertama sampai ke-n
int *prima(int n, int *size) {
    int *primes = (int *)malloc(n * sizeof(int));
    if (primes == NULL) {
        printf("Alokasi memori gagal.\n");
        exit(1);
    }

    int count = 0;
    int num = 2;
    while (count < n) {
        if (cekPrima(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }
    *size = count;
    return primes;
}

int main() {
    int n, m, i;
    printf("Masukkan banyaknya bilangan prima (n) : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nilai n harus lebih besar dari 0.\n");
        return 1;
    }

    printf("Masukkan nilai untuk alokasi memori baru (m) : ");
    scanf("%d", &m);

    if (m < n) {
        printf("Nilai m harus lebih besar atau sama dengan n.\n");
        return 1;
    }

    int size;
    int *prime_sequence = prima(n, &size);

    printf("Bilangan Prima pertama sampai ke-%d adalah:\n", n);
    for (i = 0; i < size; i++) {
        printf("%d ", prime_sequence[i]);
    }
    printf("\n");

    prime_sequence = (int *)realloc(prime_sequence, m * sizeof(int));
    if (prime_sequence == NULL) {
        printf("Alokasi memori baru gagal.\n");
        return 1;
    }

    printf("\n");

    free(prime_sequence);

    return 0;
}


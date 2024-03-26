#include <stdio.h>
#include <stdlib.h>

int *fibonacci(int n) {
    int *sequence = (int *)malloc(n * sizeof(int));
    if (sequence == NULL) {
        printf("Alokasi memori gagal.\n");
        exit(1);
    }

    int i;
    for (i = 0; i < n; i++) {
        if (i == 0 || i == 1) {
            sequence[i] = i;
        } else {
            sequence[i] = sequence[i - 1] + sequence[i - 2];
        }
    }
    return sequence;
}

int main() {
    int n, i;
    printf("Masukan banyaknya bilangan fibonacci :  ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nilai n harus lebih besar dari 0.\n");
        return 1;
    }

    int *bil_fib = fibonacci(n);

    printf("Bilangan Fibonacci pertama sampai ke-%d adalah:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", bil_fib[i]);
    }
    printf("\n");

    free(bil_fib);

    return 0;
}


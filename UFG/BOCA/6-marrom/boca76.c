#include <stdio.h>
#include <math.h>
#define MAX 1000000

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int is_prime(int n) {
    int i;

    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int find_fermat_primes(int N, int result_array[]) {
    int count = 0,i;
    for (i = 2; i <= N; i++) {
        if (is_prime(i) && (i == 2 || i % 4 == 1)) {
            result_array[count] = i;
            count++;
        }
    }
    return count;
}

void print_results(int arr[], int size, int is_ascending) {
    int i;

    if (is_ascending) { 
        for (i = 0; i < size; i++) {
            printf("%d%s", arr[i], (i == size - 1) ? "" : " ");
        }
    } else { 
        for (i = size - 1; i >= 0; i--) {
            printf("%d%s", arr[i], (i == 0) ? "" : " ");
        }
    }
    printf("\n");
}


int main() {
    int t,N,case_num,count;
    int is_ascending_order;
    scanf("%d", &t);

    int fermat_primes[MAX]; 
    
    for (case_num = 1; case_num <= t; case_num++) {
        scanf("%d", &N);

        count = find_fermat_primes(N, fermat_primes);

        bubble_sort(fermat_primes, count);

        is_ascending_order = (case_num % 2 != 0);
        print_results(fermat_primes, count, is_ascending_order);
    }

    return 0;
}
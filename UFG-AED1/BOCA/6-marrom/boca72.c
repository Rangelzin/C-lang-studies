#include <stdio.h>
#include <math.h> 

#define MAX 1005

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSort(int arr[], int n){
    int i, j;
    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int isPrime(int num) {
	int i;

	if (num <= 1) return 0; // 1 e números menores não são primos
    if (num <= 3) return 1; // 2 e 3 são primos
    if (num % 2 == 0 || num % 3 == 0) return 0; // Otimização para múltiplos de 2 e 3

    for (i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int findNthPrime(int n) {
    if (n == 1) return 2; 

    int count = 1; 
    int candidate = 1; 

    while (count < n) {
        candidate += 2; // Só testamos números ímpares
        if (isPrime(candidate)) {
            count++;
        }
    }
    return candidate;
}


int main(){
    int n, i;
    int arrOrigin[MAX]; 
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arrOrigin[i]);
    }
        
    bubbleSort(arrOrigin, n);
    
	printf("%d", findNthPrime(arrOrigin[0]));
    for(i = 1; i < n; i++) {
        printf(" %d", findNthPrime(arrOrigin[i]));
    }
    printf("\n"); 
    
    return 0;
}
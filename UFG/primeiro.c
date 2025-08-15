#include <stdio.h> //biblioteca de entrada e saída
#define PI 3.141516 //valor de PI a ser adotado na equação

int main() {
    int a, b, c;
    float resultado;
    printf("Entre com os valores de a, b e c: \n");
    /*observe que para colocar o valor na memória é precisopassar
     o endereço da variável "&" */
    scanf("%d %d %d",&a,&b,&c); 

    /*toda divisão entre dois inteiros retorna inteiro para isso utilizaremos 
     um cast (float) para forçar durante a operação que “a” se transforme em 
     float para retornar float. */
    resultado = (float)a / b; 
    resultado = resultado * (float)a / c;
    resultado = resultado * PI;

    printf("O resultado da operacao e = %.2f\n", resultado);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//
// O BANCO INTELIGENTE
// definição de tipo
typedef struct notas {
    unsigned Valor;
    unsigned Quantidade;
} NOTAS;
 
int NP         = 0; // N POSSIBILIDADES
int level      = 0;
int Saque      = 0;
 
NOTAS Notas[6]; 
 
int getProximaNota (int posicao) {
    if (++posicao > 5) {
       return (-1);
    }
    else {
       return posicao;
    }
}
 
void Recursao (int Acumulado, int posicao) {

    int ACC, NOTA,  QTD, proximaNota;
 
    // SETUP VARIAVEIS INTERNAS
    
    QTD   = Notas[posicao].Quantidade;
    NOTA  = Notas[posicao].Valor;
    ACC   = Acumulado;
 
    // CONDICIONAIS DE SAIDA
    
    if (QTD == 0) {
       return;
    }
    if (ACC + NOTA > Saque) { 
       return;
    } 
    // LACO DE TRABALHO PRINCIPAL
    do {
        // MINHA NOTA MAIS O ACUMULADO EQUIVALE OU ULTRAPASSA O SALDO?
        
        if (ACC + NOTA >= Saque) {
            if (ACC + NOTA == Saque) // QUANDO EQUIVALENTE, UMA FORMA ENCONTRADA
                NP++;
 
            return; 
        }
 
        // ACUMULA A COMBINAÇÃO E RECONHECE QUAL A PROXIMA NOTA DE VALOR INFERIOR
        ACC         += NOTA;
        proximaNota  = getProximaNota (posicao);
 
        // DEPOIS DE MINHA CONTRIBUICAO, EH POSSIVEL O SAQUE COM NOTAS DE MENOR VALOR?
        while (proximaNota != -1) {
            Recursao (ACC, proximaNota);
            proximaNota  = getProximaNota (proximaNota);
        }
        // TENTAMOS CONTRIBUIR COM MAIS NOTAS DO MESMO VALOR
       } while (--QTD);
}
 
 
int main (void) {
  int  i;
 
    // INICIALIZAÇÃO DA STRUCT NOTAS
    
    Notas[0].Valor      = 100;
    Notas[1].Valor      =  50;
    Notas[2].Valor      =  20;
    Notas[3].Valor      =  10;
    Notas[4].Valor      =   5;
    Notas[5].Valor      =   2;
    
    scanf  ("%d", &Saque);
   for(i=5; i>=0;i--)  //lendo a quantidade das notas de 2, 5, 10, 20, 50 e 100
     scanf("%d", &Notas[i].Quantidade);

    // PROCESSANDO
    level = 0;
    NP    = 0;
 
    Recursao (0, 0);  // 100
    Recursao (0, 1); //  50
    Recursao (0, 2); //  20
    Recursao (0, 3); //  10
    Recursao (0, 4); //   5
    Recursao (0, 5); //   2
    printf ("%d\n", NP);
    return 0;
}

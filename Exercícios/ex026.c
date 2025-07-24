#include <stdio.h>
#include <string.h>

void main() {
    char estado[30];
    char naturalidade[30];

    printf("<<< EX026 - Qual é seu estado? >>>\n");
    printf("\n");
    printf("------------------------------------------------\n");
    printf(" Digite o nome do seu estado: ");
    scanf(" %s", estado);

    if (strcmp(estado, "AC") == 0) {
        strcpy(naturalidade, "ACRIANO");
    } else if (strcmp(estado, "AL") == 0) {
        strcpy(naturalidade, "ALAGOANO");
    } else if (strcmp(estado, "AP") == 0) {
        strcpy(naturalidade, "AMAPAENSE");
    } else if (strcmp(estado, "AM") == 0) {
        strcpy(naturalidade, "AMAZONENSE");
    } else if (strcmp(estado, "BA") == 0) {
        strcpy(naturalidade, "BAIANO");
    } else if (strcmp(estado, "CE") == 0) {
        strcpy(naturalidade, "CEARENSE");
    } else if (strcmp(estado, "DF") == 0) {
        strcpy(naturalidade, "BRASILIENSE");
    } else if (strcmp(estado, "ES") == 0) {
        strcpy(naturalidade, "CAPIXABA");
    } else if (strcmp(estado, "GO") == 0) {
        strcpy(naturalidade, "GOIANO");
    } else if (strcmp(estado, "MA") == 0) {
        strcpy(naturalidade, "MARANHENSE");
    } else if (strcmp(estado, "MT") == 0) {
        strcpy(naturalidade, "MATO-GROSSENSE");
    } else if (strcmp(estado, "MS") == 0) {
        strcpy(naturalidade, "SUL-MATO-GROSSENSE");
    } else if (strcmp(estado, "MG") == 0) {
        strcpy(naturalidade, "MINEIRO");
    } else if (strcmp(estado, "PA") == 0) {
        strcpy(naturalidade, "PARAENSE");
    } else if (strcmp(estado, "PB") == 0) {
        strcpy(naturalidade, "PARAIBA");
    } else if (strcmp(estado, "PR") == 0) {
        strcpy(naturalidade, "PARANAENSE");
    } else if (strcmp(estado, "PE") == 0) {
        strcpy(naturalidade, "PERNAMBUCANO");
    } else if (strcmp(estado, "PI") == 0) {
        strcpy(naturalidade, "PIAUIENSE");
    } else if (strcmp(estado, "RJ") == 0) {
        strcpy(naturalidade, "CARIOCA");
    } else if (strcmp(estado, "RN") == 0) {
        strcpy(naturalidade, "POTIGUAR");
    } else if (strcmp(estado, "RS") == 0) {
        strcpy(naturalidade, "GAÚCHO");
    } else if (strcmp(estado, "RO") == 0) {
        strcpy(naturalidade, "RONDONIENSE");
    } else if (strcmp(estado, "RR") == 0) {
        strcpy(naturalidade, "RORAIMENSE");
    } else if (strcmp(estado, "SC") == 0) {
        strcpy(naturalidade, "CATARINENSE");
    } else if (strcmp(estado, "SP") == 0) {
        strcpy(naturalidade, "PAULISTA");
    } else if (strcmp(estado, "SE") == 0) {
        strcpy(naturalidade, "SERGIPANO");
    } else if (strcmp(estado, "TO") == 0) {
        strcpy(naturalidade, "TOCANTINENSE");
    } else {
        strcpy(naturalidade, "Desconhecido");
    }

    printf(" Nascendo em %s voce é %s\n",estado,naturalidade);
    printf("------------------------------------------------\n");
} 
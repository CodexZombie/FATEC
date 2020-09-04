/*
-std=c99
6. Escreva um programa que dada uma sequência
de n números inteiros, imprimi-los em ordem inversa.
*/

#include <stdio.h>
#define MAX 300

int main(){

    int lista[MAX];
    int tam = 0;

    printf("Informe o numero de elementos da lista: ");
    scanf("%d", &tam);

    printf("Infome os %d elementos da lista: ", tam);
    for(int i = 0; i < tam; i++){
        scanf("%d", &lista[i]);
    }

    printf("Ordem inversa: ");
    for(int i = tam-1; i >= 0; i--){
        printf("%d ", lista[i]);
    }

    return 0;
}
/*
-std=c99
Desenvolva um programa que
dada uma sequência de 8 números inteiros
depois imprima todos osnúmeros pares digitados.
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int n[8];
    bool temPar = false;

    printf("Digite uma sequencia de 8 numeros inteiros: ");
    
    for (int i = 0; i < 8; i++){
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 8; i++){
        if (n[i] % 2 == 0){
            temPar = true;
        }
    }

    if (temPar == true){
        printf("Numeros pares informados: ");
        for (int i = 0; i < 8; i++){
            if (n[i] % 2 == 0){
                printf("%d ", n[i]);
            }
        }
    }
    else
    {
        printf("Nenhum numero par foi informado.");
    }

    return 0;
}
/*
 * Programacao de Computadores e ALgoritmos
 * lista1.8.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Lucas
 *          Hermann
 *          Jaison
 *          Wilson
 *          Richardson 
 */
#include <stdio.h>
#include "../Functions/util.h"

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Numero possui : %d algarismos \n", qnt_digitos(num));
}


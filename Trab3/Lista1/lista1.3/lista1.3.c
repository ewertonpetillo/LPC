/*
 * Programacao de Computadores e ALgoritmos
 * lista1.3.c
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
    int n1, n2, n3;
    printf("Digite os 3 numeros: \n ");
    scanf("%d \n", &n1);
    scanf("%d \n", &n2);
    scanf("%d", &n3);
    printf("Soma: %d \n", sum(n1,n2,n3));
}

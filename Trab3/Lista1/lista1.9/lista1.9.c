/*
 * Programacao de Computadores e ALgoritmos
 * lista1.9.c
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
    printf("Digite o numero: ");
    scanf("%d", &num);
    printf("Numero invertido: \n");
    while(num != 0)
    {
        printf("%d", inverter(num));
        num = num/10;
    }
    printf("\n");
}

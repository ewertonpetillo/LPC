/*
 * Programacao de Computadores e ALgoritmos
 * lista1.7.c
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
    int day, cont=0;
    float value, total=0, newvalue;

    do{
        printf("Digite o valor da prestacao: ");
        scanf("%f",&value);
        printf("Digite os dias em atraso: ");
        scanf("%d", &day);
        newvalue = valorPagamento(value,day);
        printf("Valor: %.2f \n", newvalue);
        total += value;
        cont++;
    }while(value!=0);
    
    system("clear");
    printf("Valor total recebido: %.2f \n", total);
    printf("Prestacoes pagas: %d \n", cont);
}

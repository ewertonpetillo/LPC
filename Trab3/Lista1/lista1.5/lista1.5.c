/*
 * Programacao de Computadores e ALgoritmos
 * lista1.5.c
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
       float value, imp;
       printf("Digite a taxa de imposto: ");
       scanf("%f", &imp);
       printf("Digite o custo: ");
       scanf("%f", &value);
       printf("Novo valor: R$ %.2f \n ", somaImposto(imp, value));
       printf("Valor antigo:R$ %.2f \n ", value);
       printf("taxa de juros: %.2f  \n ", imp);

}

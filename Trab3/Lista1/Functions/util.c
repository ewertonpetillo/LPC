/*
 * Programacao de Computadores e ALgoritmos
 * util.c
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

int sum(int a, int b, int c)
{
    int soma;
    soma = a + b + c;
    return soma;
}

char positive_negative(int num)
{
    if (num <= 0)
    {
        return 'N';
    }else
    {
        return 'P';
    }
}

float somaImposto(float taxaImposto, float custo)
{
    float newvalue;
    newvalue = custo + (custo * taxaImposto/100);
    return newvalue;
}

float valorPagamento(float value, int dia)
{
    if(dia == 0)
    {
        return value;
    }else
    {
        return (value + (value * 3/100)+ (value * 0,1/100));
    }
}

int qnt_digitos(int x)
{
    int cont;
    while(x > 0)
    {
        x = x/10 ;
        cont++ ;
    }
    return cont;
}

int inverter(int x)
{
    int inv;
    inv = (x%10);
    return inv;
}

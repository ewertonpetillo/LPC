#include <stdio.h>

int nesima(int n)
{
    return n;
}




int main(int argc, const char *argv[])
{
    int num, i, j;
    printf("Digite o numero: ");
    scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
       for(j=1; j<=i; j++)
        {
            printf("%d \t ",nesima(i));
        }
       printf("\n");
    }
    printf("\n");
}

#include <stdio.h>

int main(){
    int j, i=0, n, vet[n];

    printf("Digite o n-esino termo: ");
    scanf("%d", &n);
    vet[i] = vet[i+1] = 1;
    for (i=2; i<n; i++){
        vet[i] = vet[i-2] + vet[i-2];
    }
    for (j=0; j<n; j++){
        printf("%d \t", vet[j]);
    }
return 0;
}

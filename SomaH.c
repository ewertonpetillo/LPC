#include <stdio.h>

int main(){
   int i, n, vet[n];
   int h=0;
   printf("Digite qntde de termos: ");
   scanf("%d", &n);
    
   for(i=0; i<n; i++){
        h = h + (1/i+1);
        printf("1/%d + \t ", i+1);
   }

   printf("\n H = %d ", h);

}

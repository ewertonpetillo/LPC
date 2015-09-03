#include <stdio.h>

int nesima(int n){
    return n;
}




int main(int argc, const char *argv[]){
    int num, i;
    printf("Digite o numero: ");
    scanf("%d", &num);
    for (i=1; i<=num; i++){
        while(i<num){
        printf("%d \t ",nesima(i));
        }
    }
    printf("\n");
}

#include <stdio.h>


int main(){
    int n; int n2;

    printf("Digite seu primeiro numero: ");
    scanf("%i", &n);

    
    printf("Digite seu segundo numero: ");
    scanf("%i", &n2);

    if (n > n2)
    {
        printf("O número 1 é maior que o segundo \n");
    } else{
        printf("O segundo número é maior que o 1 \n");
    }


    return 0;
}
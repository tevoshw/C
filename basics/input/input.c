// TO GET THE USER INPUT WE NEED TO USE THS SCANF
// AND THE SCANF IT'S LIKE PRINTF BUT WE NEED TO USE THE MEMORY ENDERENCE OF THE VARIABLE

#include <stdio.h>

int main(){

    int n1;
    int n2;
    int resul;

    printf("Enter the first number: ");
    scanf("%i", &n1);

    printf("Enter the second number: ");
    scanf("%i", &n2);


    resul = n1 + n2;
    printf("The addiction of the 2 numbers, are: %i", resul);

}
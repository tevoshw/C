#include <stdio.h>


int main(){

    int n1; int n2;

    printf("Enter the first number: ");
    scanf("%i", &n1);
    printf("Enter the second number: ");
    scanf("%i", &n2);

    printf("The result of the two numbers addition was: %i\n", n1  + n2);
    printf("The result of the two numbers subtraction was: %i\n", n1  - n2);
    printf("The result of the two numbers multiply was: %i\n", n1  * n2);
    printf("The result of the two numbers division was: %i\n", n1  / n2);

    return 0;
}
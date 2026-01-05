#include <stdio.h>


int main(){

    int n = 0;
    printf("Enter the number: ");
    scanf("%i", &n);
    
    for (int x = 0; x < n; x++)
    {
        printf("The number was: %i\n", x);
    }
    

    return 0;
}
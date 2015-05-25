#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Give me an integer: ");
    int n = GetInt();
    if (n > 0){
        printf("You picked a positive number!");
    }
    else if (n<0) {printf("You picked a negative number!");}
    else if (n==0) {printf("You picked 0.");}
    printf("\n");
}

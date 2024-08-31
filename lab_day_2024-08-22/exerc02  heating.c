#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2;

    
    printf("Ener the first number: ");
    scanf("%f", &num1);
    printf("Enter the secound number: ");
    scanf("%f", &num2);

    
    if (num1 > num2) {
        printf("The big number is: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("TThe big number is: %.2f\n", num2);
    } else {
        printf("The Numbers are equals.\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2,result;
    char op;
    
    printf("Ener the first number: ");
    scanf("%f", &num1);
    printf("Enter the secound number: ");
    scanf("%f", &num2);
    
    printf("Which is the operation :  Plus + or  less - or division / or ");
    printf(" Enter with  + for PLus ");
    printf("Enter with - for less - ");
    printf(" Enter with / for division ");
    printf("  Enter with *  for multiplication ");
    scanf("%s",&op);
    
     switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error to type +, -, * or /.\n");
    }
    
    
    

    return 0;
}
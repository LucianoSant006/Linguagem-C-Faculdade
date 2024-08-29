#include <stdio.h>


int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
    
        if (letra >= 'A' && letra <= 'Z') {
            printf(" %c é uma letra do alfabeto e é maiúscula.\n", letra);
        } else {
            printf("'%c' é uma letra do alfabeto e é minúscula.\n", letra);
        }
    } else {
        printf("'%c' não é uma letra do alfabeto.\n", letra);
    }

    return 0;
}
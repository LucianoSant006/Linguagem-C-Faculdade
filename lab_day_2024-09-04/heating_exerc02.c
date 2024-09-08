#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,c,answer;
 
    printf("digite um número");
    scanf("%f",&a);
    printf("digite um número");
    scanf("%f",&b);
    printf("digite um número");
    scanf("%f",&c);
    
    
    answer = abs(a) + abs(b) + abs(c);
    
    printf("%f",answer);
    
    
    return 0;
}
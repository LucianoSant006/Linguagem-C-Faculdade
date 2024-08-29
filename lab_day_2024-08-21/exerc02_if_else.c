#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter an side of triangle ");
    scanf("%f",&a);
     printf("Enter an side of triangle ");
    scanf("%f",&b);
     printf("Enter an side of triangle ");
    scanf("%f",&c);
    
   if (a == b && b == c) {
            printf("It is an equilateral triangle.\n");
        }
     else if (a == b || b == c || a == c) {
            printf("It is an isosceles triangle.\n");
        } else {
            printf("It is a scalene triangle.\n");
        }
    
    
    return 0;
    
}
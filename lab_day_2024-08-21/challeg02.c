
#include <stdio.h>
#include <math.h>

int main()
{
    float pi = 3.14;
    float c;
    
    printf("write the radius of circule ");
    scanf("%f",&c);
    
     float d = pow(c ,c) * pi;
     printf("%f",d);
    
    return 0;
}
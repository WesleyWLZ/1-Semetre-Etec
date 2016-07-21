#include <stdio.h>
#include <stdlib.h>
main()
{
    float s0,v,t,s;
    printf("digite o primeiro numero: ");
    scanf("%f", &s0);
    printf("digite o segundo numero: ");
    scanf("%f", &v);
    printf("digite o terceiro numero: ");
    scanf("%f", &t);
    s= (s0)+ (v * t);
    printf("o valor da formula eh  %2.2f\n\n", s);

    system("pause");
    return(0);
}

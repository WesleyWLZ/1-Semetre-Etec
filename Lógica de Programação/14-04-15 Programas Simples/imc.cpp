#include <stdio.h>
#include <stdlib.h>
main()
{
    float peso,altura,imc;
    printf("digite seu peso: ");
    scanf("%f", &peso);
    printf("digite a sua altura: ");
    scanf("%f", &altura);
    imc = (peso)/(altura * altura);
    printf("o seu imc eh  %2.2f\n\n", imc);

    system("pause");
    return(0);
}

#include <stdio.h>
#include <stdlib.h>
main()
{
    float nota1,nota2,nota3,nota4,media;
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("digite a quarta nota: ");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("o resultado eh  %f\n\n", media);

    system("pause");
    return(0);
}

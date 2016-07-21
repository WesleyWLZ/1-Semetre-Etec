#include <stdio.h>
#include <stdlib.h>
main()
{
    int anoatual,nascimento,idade;
    printf("digite o ano atual: ");
    scanf("%d", &anoatual);
    printf("digite o seu nascimento: ");
    scanf("%d", &nascimento);
    idade = (anoatual)-(nascimento);
    printf("sua idade eh  %d\n\n", idade);

    system("pause");

    return(0);
}

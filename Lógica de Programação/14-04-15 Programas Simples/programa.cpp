#include <stdio.h>
#include <stdlib.h>
main()
{
    int val1,val2,total;
    printf("digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("digite o segundo valor: ");
    scanf("%d", &val2);
    total = (val1) * (val2);
    printf("o resultado eh  %d\n\n", total);

    system("pause");
    return(0);
}

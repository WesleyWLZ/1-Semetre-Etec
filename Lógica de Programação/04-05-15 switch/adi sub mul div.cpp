#include <stdio.h>
#include <stdlib.h>
int main()
{
    int opcao,total1,total2,total3;
    printf ("digite um numero: \n 1 para somar \n 2 para subtrair \n 3 para multiplicar \n 4 para dividir \n ");
    scanf("%d", &opcao);
      if (opcao==1)
          {
             printf ("digite um numero \n");
             scanf("%d", &total1);
             printf ("digite um numero \n");
             scanf("%d", &total2);
             total3= (total1) + (total2);
             printf ("o resultado eh %d",total3);
          }
           else if  (opcao==2)
          { printf ("digite um numero \n");
             scanf("%d", &total1);
             printf ("digite um numero \n");
             scanf("%d", &total2);
             total3= (total1) - (total2);
             printf ("o resultado eh %d",total3);
          }
           else if  (opcao==3)
          { printf ("digite um numero \n");
             scanf("%d", &total1);
             printf ("digite um numero \n");
             scanf("%d", &total2);
             total3= (total1) * (total2);
             printf ("o resultado eh %d",total3);
          }
          else if  (opcao==4)
          { printf ("digite um numero \n");
             scanf("%d", &total1);
             printf ("digite um numero \n");
             scanf("%d", &total2);
             total3= (total1) / (total2);
             printf ("o resultado eh %d \n",total3);
          }
    
    system("pause");

    return(0);
}

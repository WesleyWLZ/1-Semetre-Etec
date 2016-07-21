#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int opcao;
    float num1,num2,num3;
    printf("digite a opcao desejada");
    printf("1 para soma \n");
    printf("2 para sub \n");
    printf("3 para mult \n");
    printf("4 para div \n");
    scanf ("%d",&opcao);
    
    if (opcao==1)
    {
    printf("digite o primeiro num \n");
    scanf ("%f", &num1);
    printf ("digite o seg num \n");
    scanf ("%f", &num2);
    num3= (num1 + num2); 
    printf("o resultado eh %2.2f \n",num3);
    }
    else if (opcao==2)
    {
         printf("digite o primeiro num \n");
    scanf ("%f", &num1);
    printf ("digite o seg num \n");
    scanf ("%f", &num2);
    num3= (num1 - num2); 
    printf("o resultado eh %2.2f \n",num3);
    }
    else if (opcao==3)
    {
         printf("digite o primeiro num \n");
    scanf ("%f", &num1);
    printf ("digite o seg num \n");
    scanf ("%f", &num2);
    num3= (num1 * num2); 
    printf("o resultado eh %2.2f \n",num3);
    }
    else if (opcao==4)
    {
         printf("digite o primeiro num \n");
    scanf ("%f", &num1);
    printf ("digite o seg num \n");
    scanf ("%f", &num2);
    num3= (num1 / num2); 
    printf("o resultado eh %2.2f \n",num3);
    }
    else 
    {
         printf("invalido");
    } 
    system("pause");

    return(0);   
}    

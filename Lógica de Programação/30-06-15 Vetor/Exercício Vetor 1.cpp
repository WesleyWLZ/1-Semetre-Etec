#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int
main(){

       int entrada[10]; 
       int i;
       
       for(i=1; i<=10 ;i++){ /* Estrutura de repeti��o que armazena os valores*/
                printf("digite o %d numero: \n",i); /*Mostra a Mensagem na Tela*/
                scanf("%d",&entrada[i]); /*Recebe o valor digitado pelo usuario*/
                }
                if (entrada[i] % 2==0)
                {
                      printf("os valores %d s�o par \n", entrada[i]);
                      }
                else
                {
                    printf("os valores %d s�o impar \n", entrada[i]);
                    }
                    
                printf("\n\n"); /*pular duas linhas*/
                system("pause"); /*Serve para pausar tudo ap�s o programa*/
                }          

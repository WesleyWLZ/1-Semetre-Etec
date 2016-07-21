#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int
main(){
       int entrada[10]; 
       int i;
       
       for(i=1; i<=10 ;i++){ /* Estrutura de repetição que armazena os velo*/
                printf("digite o %d valor: \n",i); /*Mostra a Mensagem na Tela*/
                scanf("%d",&entrada[i]); /*Recebe o valor digitado pelo usuario*/
                }
                printf("ordem inversa\n"); /* Mostra mensagem na tela*/
                for(i=10; i>0; i--){ /* Estrutura de decisção que lê o vetor em ordem*/
                          printf("\n%d",entrada[i]); /* Mostra na tela os Valores em Ordem*/
                          }
                printf("\n\n"); /*pular duas linhas*/
                system("pause"); /*Serve para pausar tudo após o programa*/
                }          

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int
main(){
       int entrada[10]; 
       int i,pares=0,impares=0;
       
       for(i=1;i<=10 ;i++){ /* Estrutura de repetição que armazena os velo*/
                printf("digite o %d valor: \n",i); /*Mostra a Mensagem na Tela*/
                scanf("%d",&entrada[i]); /*Recebe o valor digitado pelo usuario*/
                }
                for(i=1;i<=10;i++){
                                   
                if (entrada[i] % 2==0) {
                pares=pares;
                      
                      }
                else{
                     impares=impares;
                
                    }
                    }
                    printf("\n A quantidade de valores pares sao %d\n",pares);
                    printf("\n A quantidade de valores impares sao %d\n",impares);
                printf("\n\n"); /*pular duas linhas*/
                
                
                system("pause"); /*Serve para pausar tudo após o programa*/ 
                }    

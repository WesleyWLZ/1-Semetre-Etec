#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
int main()
{	
 
 int opcao,opcao2;
 float peso,altura,sexo,imc,asd;
 inicio:
        system("cls");
 printf ("Digite \n 1 para Calcular o IMC \n 2 para o Peso Ideal \n");
 scanf  ("%d", &opcao);
 switch  (opcao) {
        
        case 1:
			printf("Digite Sua Altura \n");
			scanf  ("%f", &altura);
			 printf ("Digite Seu Peso \n");
			 scanf  ("%f", &peso);
			 asd=(peso)/(altura * altura);
			 printf("o seu imc eh %2.2f\n\n", asd);
			system("pause");  
			goto inicio;
			
		break;
		
		 case 2:
			printf("Digite 1 para Masculino \n");
			printf("Digite 2 para Feminino \n");
			scanf  ("%d", &opcao2);
				if(opcao2==1)
				{
			printf("Digite sua Altura");
			scanf  ("%f", &altura);
			peso=((altura-100)-(altura-150)/4);
			printf("o seu peso ideal  eh  %2.2f\n\n", peso);
        }
                else if(opcao2==2)
                {
			printf("Digite sua Altura");
			scanf  ("%f", &altura);
			peso=((altura-100)-(altura-150)/2);
			printf("o seu peso ideal  eh  %2.2f\n\n", peso);
		
			system("pause");  
			goto inicio;
		  }
       
             
                
  defaut: 
  printf ("invalido\n");
 
  system("pause");            
  return (0);

}}

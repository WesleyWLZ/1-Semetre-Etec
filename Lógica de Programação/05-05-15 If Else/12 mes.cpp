#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main()
{	
 int opcao;
 inicio:
        system("cls");
 printf ("Digite o numero referente ao mes\n");
 scanf  ("%d", &opcao);
 switch  (opcao) {
        
        case 1:
			printf("Janeiro\n");
			system("pause");  
			goto inicio;
			
		break;
		
		case 2:
        	printf("Fevereiro\n");
        	system("pause");  
		break;
		
		case 3:
			printf("Marco\n");
			system("pause");  
		break;
		
		case 4:
			printf("Abril\n");
			system("pause");  
		break;
		
		case 5:
			printf("Maio\n");
			system("pause");  
		break;
		
		case 6:
			printf("Junho\n");
			system("pause");  
		break;
		
		case 7:
			printf("Julho\n");
			system("pause");  
		break;
		
		case 8:
			printf("Agosto\n");
			system("pause");  
		break;
		
		case 9:
			printf("Setembro\n");
			system("pause");  
		break;
		
		case 10:
			printf("Outubro\n");
			system("pause");  
		break;
		
		case 11:
			printf("Novembro\n");
			system("pause");  
		break;
		
		case 12:
			printf("Dezembro\n");
			system("pause");  
			
			
		break;
                 }
       
             
                
  defaut: 
  printf ("invalido\n");
 
  system("pause");            
  return (0);

}


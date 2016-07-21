#include <stdio.h>
#include <stdlib.h>
int main()
{
	int opcao;
	printf ("digite um numero correspondente a um mes \n");
	scanf("%d", &opcao);
	switch (opcao) {
	
	case 1:
			printf("O mes correspondente eh janeiro");
		break;
	
	
	case 2:	
	       printf("O mes correspondente eh fevereiro");
	   break;
	   
	   case 3:	
	       printf("O mes correspondente eh marco");
	   break;
    
    case 4:	
	       printf("O mes correspondente eh abril");
	   break;

	case 5:	
	       printf("O mes correspondente eh maio");
	   break;
	   
	   case 6:	
	       printf("O mes correspondente eh junho");
	   break;
	   
	   case 7:	
	       printf("O mes correspondente eh julho");
	   break;
	   
	   case 8:	
	       printf("O mes correspondente eh agosto");
	   break;
	   
	   case 9:	
	       printf("O mes correspondente eh setembro");
	   break;
	   
	   case 10:	
	       printf("O mes correspondente eh outubro");
	   break;
	   
	   case 11:	
	       printf("O mes correspondente eh novembro");
	   break;
	   
	   case 12:	
	       printf("O mes correspondente eh dezembro feliz ano novo ");	   
			break;
}
}

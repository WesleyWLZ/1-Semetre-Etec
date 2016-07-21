#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int opcao;
    float num1,num2;
    printf ("digite um numero correspondente ao tipo de venda");
    scanf ("%d",&opcao);
    switch (opcao) {
    	
    	case 1:
    		printf("digite o valor da venda");
    		scanf ("%f", &num1);
    		num2= (num1-(num1*0.2));
    		printf("o resultado eh %2.2f \n",num2);
    		system("pause");  
			
			
    		break;
    			
    	case 2:
    		printf("digite o valor da venda");
    		scanf ("%f", &num1);
    		num2= (num1+(num1*0.2)+(num1*0.01));
    		printf("o resultado eh %2.2f \n",num2);
    		system("pause");  
			
			
    		break;
    		
    	case 3:
			printf("digite o valor da venda");
			scanf ("%f", &num1);
			num2= (num1+(num1*0.3)+(num1*0.015));
			printf("o resultado eh %2.2f \n",num2);
			system("pause");  
			
			
    		break;
    		
    		 
    return(0); 
    		}
}
    		
    		

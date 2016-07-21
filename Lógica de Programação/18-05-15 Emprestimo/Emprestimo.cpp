#include <stdio.h>
#include <stdlib.h>
int main()
{ 
	int opcao;
	float emprestimo,parcela,salario,situacao,situacao2,margem;
    printf ("digite o seu salario"); 
    scanf ("%f",&salario); // valor do salário//
	printf ("digite o valor do emprestimo");
	scanf ("%f",&emprestimo); //valor do emprestimo//
	printf ("digite o tanto de parcelas");
	scanf ("%f",&parcela); //valor da parcela//
	situacao=salario*0.3;
	margem=emprestimo/parcela;
	situacao2=margem*0.08;
	  if (margem<=situacao)
	  {
  	     parcela=parcela+(parcela*0.02);
  	     printf ("o valor da parcela sera  %2.2f\n\n", parcela );

	system("pause");

 return(0); 
            }
}            

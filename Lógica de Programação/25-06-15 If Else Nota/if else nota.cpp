#include <stdlib.h>
#include <stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	system("color 0c");
float n1,n,media,freq;
int cont=1; 
printf("Digite a Frequência \n");
scanf("%f",&freq);
while (cont<=4)
       {
        printf("Digite a  nota\n");
        scanf("%f",&n1); 
        
        n=n+n1;
        cont=cont+1;     
        

media=(n/4);
}
           if(media>=6 || freq>=75)
                   {
                       printf("Aluno Aprovado\n");
                      
                   }
                   
                   else
                   {
                       printf("Aluno Reprovado \n");
                       
                     
                   system("pause");

                }
                
  

system("pause");
}

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese");
    float maior=0,menor=0,media,temperatura;
    int i;
    
    for (i=1;i<=2;i++){
        printf("\nDIGITE A  TEMPERATURA!\n");
        scanf ("%f",&temperatura);
        media= media+temperatura;
        
        
       
    
  if ((temperatura > maior) || (maior==0)){
  
  maior=temperatura;
  
       }
       
    if(( temperatura < menor) || (menor==0))
   {
        menor=temperatura;
        }     
        
        }
        printf("\nA média é %.2f",media/2);
        printf("\nA maior temperatura é: %.2f\n",maior);
        printf("\nA menor temperatura é: %.2f\n",menor);
       
        system ("pause");
        }


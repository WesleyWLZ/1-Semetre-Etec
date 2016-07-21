#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main (){
	int cont,soma=0;
	cont=1;
	
	while(cont<=40){
                    
                    if(cont %4==0) {
                            soma=soma+cont;
                            
                    printf("\nArtur & Wellington");
                    
                    
                            
                            }
                            else {
                                 printf("\n%i", cont);
                                 }
                                 cont++;
                                 }
                                 printf(" \no resultado da soma eh %d\n\n" , soma);

                                 {
                               Sleep(1000);
Beep(1000,500);  
}
system ("pause");
}


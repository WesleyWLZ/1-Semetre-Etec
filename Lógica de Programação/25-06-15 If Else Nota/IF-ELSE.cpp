#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int a,b;
    
{ 
printf("Digite o valor de A\n");
scanf("%d",&a);
printf("Digite o valor de B\n");
scanf("%d",&b);

while(a<=b)
 {
           a=a+1;
           if(a==5)
                   {
                       printf("O numero digitado eh: 5\n");
                       system("pause");
                   }
                   else
                   {
                       printf("O numero nao eh: 5\n");
                       system("pause");
                   
                   }
           }
           
}
system("pause");
}

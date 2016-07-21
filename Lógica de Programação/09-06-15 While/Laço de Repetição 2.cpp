#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include<iostream>
main()
{
      int i=0;
      float s=0,n=0;
      system("color 1b");
   while(i<5)
{
printf("Digite o Numero==>");
scanf("%f",&n);
s=s+n;
i=i+1;
}
printf("a soma eh %2.2f",s);
system("pause");
}      

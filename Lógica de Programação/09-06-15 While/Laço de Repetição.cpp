
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include<iostream>
main()
{
      int i;
      float s,n;
      system("color 1a");
      for(i=1; i<=15;i++)
{
printf("Digite o Numero==>");
scanf("%f",&n);
s=s+n;
getch();
}
printf("a soma eh %2.2f",s);
system("pause");
}      

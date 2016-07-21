#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main() {
    
    int i,a;
    printf("\n Digite Um Numero para tabuada\n");
    scanf("%d", &a);
    for(i=1;i<=10;i++){
    printf("\n%d  x %d = %d \n",a, i, a*i);
}
 system ("pause");
}

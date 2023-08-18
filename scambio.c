#include <stdio.h>

main(){
       int x,y,c;
       printf("Inserisci valore x: ");
       scanf("%d",&x);
       printf("\nInserisci valore y: ");
       scanf("%d",&y);
       
       c=x;
       x=y;
       y=c;
       printf("\nI numeri scambiati sono x=%d e y=%d\n",x,y);
       system("PAUSE");
       
       }

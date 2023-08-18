#include<stdio.h>

main()
{
 enum colori{rosso=1,verde,blu} colore;
 
 scanf("%d",&colore);
 
 switch(colore){
 case (rosso):
           printf("");
           break;
 case (verde):
      printf("colore verde\n");
      break;
 case (blu):
      printf("colore blu\n");
      break;
 default :
         printf("errore\n");
         break;
}
system("PAUSE");
}

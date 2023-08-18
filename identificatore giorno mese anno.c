#include<stdio.h>


main()
{
 //typedef enum giorno{SAB=1,DOM,LUN,MAR,MER,GIO,VEN} giorno;
 typedef enum mese{GENNAIO=1,FEBBRAIO,MARZO,APRILE,MAGGIO,GIUGNO,LUGLIO,AGOSTO,SETTEMBRE,OTTOBRE,NOVEMBRE,DICEMBRE} mese;
 
 int anno,giorno;
 mese m;
 printf("Scrivi giorno,mese ed anno\n");
 scanf("%d/%d/%d",&giorno,&m,&anno);
 
 if ((giorno>=1) && (giorno<31) && (m>=GENNAIO) && (m<DICEMBRE))
    {
    giorno = giorno+1;
    printf("%d / %d / %d \n",giorno,m,anno);
    }
    else if ((giorno==31) && (m>=GENNAIO) && (m<DICEMBRE))
         {
         giorno = 1;
         m=m+1;
         printf("%d / %d / %d \n",giorno,m,anno);
         }
         else if ((m==DICEMBRE)&&(giorno==31))
              {
              anno=anno+1;
              m=1;
              giorno=1;
              printf("%d / %d / %d \n",giorno,m,anno);
              }
    
              else if ((giorno>31)||(m>DICEMBRE))
              printf("\nLa data inserita non è valida\n");

 
 system("PAUSE");
      
}

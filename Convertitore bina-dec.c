#include <stdio.h>
#include <math.h>
main()
{
 int Nbit,bit,decimal=0,counter;  
 
 printf("Inserire numero di bit totali\n");
 scanf("%d",&Nbit);
 printf("\nInserisci i bit uno alla volta, partendo dal meno significativo\n");
 for (counter=0;counter<Nbit;++counter){
     printf("Bit: ");
     scanf("%d",&bit);
     
     if (bit==0 || bit==1)
     decimal=(decimal+(bit*pow(2,counter)));
     /*else{
     printf("\nBit inserito errato\n");
     counter--;
     }*/
 
 }
 printf("Il numero convertito in decimale e' %d\n",decimal);
 system("pause");
}

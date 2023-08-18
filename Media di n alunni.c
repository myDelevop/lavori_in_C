#include <stdio.h>

main(){
       int totale,voto,contatore;   // numero intero
       float media;              //numero con la virgola
       contatore=0;
       totale=0;
       
       printf("Inserisci voto alunno in centesimi,-1 per finire: ");
       scanf("%d",&voto);     //legge il valore e lo mette in voto
       
       while(voto!=-1){
                       if (voto<=100 && voto>0){  // && = AND
                                      totale=totale+voto;
                                      contatore++;       // incrementa di 1 il contatore
                                      }
                       else
                       printf("\nVoto inserito non valido, prego reinserire.\n\n");
       
       printf("Inserisci voto alunno in centesimi,-1 per finire: ");
       scanf("%d",&voto);
       }
       
       if (contatore!=0){
                         media=(float) totale/contatore;
                         printf("\a%.2f è la media della classe costituita da %d alunni\n",media,contatore);    //\a EMETTE UN BIP; \n MANDA A CAPO
                         }
       system("PAUSE");
       }

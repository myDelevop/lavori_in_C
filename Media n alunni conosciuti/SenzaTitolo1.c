#include <stdio.h>

main(){
        int contatore,voto,n_voti,totale;
        float media;
        
        contatore=0;
        totale=0;
        
        printf("Inserisci il numero di voti: ");
        scanf("%d",&n_voti);

        while (contatore!=n_voti){
               printf("Inserisci voto alunno: ");
               scanf("%d",&voto);     //legge il valore e lo mette in voto
               if (voto>0){
               totale=totale+voto;
               contatore++;
               }
               else
               printf("Voto errato\n");
        }
           media=(float) totale/contatore;
           printf("\a%.2f e' la media della classe costituita da %d alunni\n",media,contatore);    //\a EMETTE UN BIP; \n MANDA A CAPO
           
system("PAUSE");
}

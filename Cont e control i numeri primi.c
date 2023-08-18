#include <stdio.h>

main(){
       int numero,i,contatore,n_primo;
       contatore=0;
       printf("Inserisci numero, -1 per terminare: ");
       scanf("%d",&numero);
       
       while (numero!=-1)//WHILE1
       {
             if(numero>0)
             {
                     n_primo=1;
                     i=1;
                         while(i<=(numero-2))//WHILE2
                         {
                          if ((numero)%(numero-i)==0)
                          {
                          n_primo=0;
                          i=(numero-1);
                          }
                          else
                          i++;
                         }
                          
                          if (n_primo==1) 
                              {
                              printf("%d e' un numero primo\n\n",numero);
                              contatore++;
                              }
                              else
                              printf("%d non e' un numero primo\n\n",numero);
                          
                          printf("Inserisci numero, -1 per terminare: ");
                          scanf("%d",&numero);
             
                          }//END WHILE2
                          
             else{
             printf("Il numero e' negativo, riprovare\n");
             printf("Inserisci numero, -1 per terminare: ");
             scanf("%d",&numero);
             }
       }//END WHILE1
       if (contatore!=0)
       printf("I numeri primi inseriti sono %d\n",contatore);
       else
       printf("Nessun numero inserito\n");
       system("PAUSE");
       }

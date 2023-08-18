#include <stdio.h>

main()
{
 int numero, numero_minimo,contatore=0;
 printf("Inserisci i numeri di una sequenza, uno alla volta\nNumero: ");
 scanf("%d",&numero);
 
 numero_minimo=numero;
 
 while((numero=getchar())!=EOF)
 {
                       
                       if (numero<numero_minimo)
                          {
                          numero_minimo=numero;
                          contatore=1;
                          }
                          else if (numero==numero_minimo)
                          contatore++;
                      
                      printf("\nNumero: ");
                      scanf("%d",&numero);
 }
                      
 printf("Il numero minimo è %d e compare %d volta/e\n",numero_minimo,contatore);
 system("PAUSE");
}

#include <stdio.h>
#include <stdlib.h>

main()
{
 int numero,ultima_cifra, ultimo_numero, N=0, num_pos=0, num_null=0, num_neg=0, num_par=0, num_dis=0, seq_cres, seq_decr;
 
 printf("Inserisci una sequenza di numeri, ATTENZIONE inserire -1 per terminare la sequenza\nNumero: ");
 scanf("%d",&numero);
 ultimo_numero=numero;
  while (numero!=-1)
  {
   N=N+1;     
   ultima_cifra=numero;
   
   if (ultima_cifra>0)
      num_pos=num_pos+1;
   else if (ultima_cifra<0)
        num_neg=num_neg+1;
   else 
   num_null=num_null+1;
   
   
   if (ultima_cifra%2==0)
      num_par=num_par+1;
   else 
       num_dis=num_dis+1;
   
   if (ultimo_numero<=ultima_cifra)
      seq_cres=seq_cres+1;
      else if (ultimo_numero>=ultima_cifra)
           seq_decr=seq_decr+1;
   
   ultimo_numero=ultima_cifra;
   printf("Numero: ");
   scanf("%d",&numero); //Ultima azione
  }
  
  printf("Numeri positivi totali: %d\n",num_pos);
  printf("Numeri negativi totali: %d\n",num_neg);
  printf("Numeri nulli totali: %d\n",num_null);
  printf("Numeri pari totali: %d\n",num_par);
  printf("Numeri dispari totali: %d\n",num_dis);
  
  if (seq_cres==N)
     printf("La sequenza e' CRESCENTE\n");
     else if (seq_decr==N)
          printf("La sequenza e' DECRESCENTE\n");
          else 
          printf("La sequenza non e' ne' crescente ne' decrescente\n");
  
  system("PAUSE");
}

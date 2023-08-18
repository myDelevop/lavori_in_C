#include <stdio.h>

main()
{
 int n,ris;
 ris=0;
 printf("Numero da invertire:\n");
 scanf("%d",&n);
 
 while (n>0)
 {
  ris=(ris*10)+(n%10);
  n=n/10;
 }
 printf("il numero invertito è:\n%d\n",ris);
 system("pause");
      
}

#include<stdio.h>

main()
{
 unsigned int a,b,c;
 
 printf("Scrivi le misure dei lati di un triangolo, e ti dirò se è equilatero, isoscele o scaleno\nLato a: ");
 scanf("%d",&a);
 printf("\nLato b: ");
 scanf("%d",&b);
 printf("\nLato c: ");     
 scanf("%d",&c);
 
 if(a==b && a==c && b==c)
 printf("\nI 3 lati sono uguali quindi è un TRIANGOLO EQUILATERO\n");
 else if((a==b!=c)||(a==c!=b)||(b==c!=a))
      printf("\nDue dei 3 lati sono uguali quindi è un TRIANGOLO ISOSCELE\n");
      else if(a!=b && a!=c && b!=c)
      printf("\nTutti e 3 i lati sono diversi quindi è un TRIANGOLO SCALENO\n");
      
 system("PAUSE");
      
}

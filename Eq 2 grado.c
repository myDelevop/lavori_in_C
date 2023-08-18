#include<stdio.h>
#include<math.h>

main()
{
      int a,b,c,delta;
      float x1,x2;
      
      printf("Scrivi valori delle variabili a, b, c di una eq di secondo grado con modello ax^2+-bx+-c=0\nATTENTO ALLE CONDIZIONI: a>0 e delta positivo\na=");
      scanf("%d",&a);
      printf("b=");
      scanf("%d",&b);
      printf("c=");
      scanf("%d",&c);
      
      delta=(b*b)-(4*a*c);
      
      if (a!=0 && delta>0)
      {
       x1=(float)(-b+(sqrt(delta)))/(2*a);     
       x2=(float)(-b-(sqrt(delta)))/(2*a);  
       printf("x1= %.2f\n",x1);
       printf("\nx2= %.2f\n",x2);       
      }
      else
      printf("Condizioni della equzione non");

 system("PAUSE");     
}

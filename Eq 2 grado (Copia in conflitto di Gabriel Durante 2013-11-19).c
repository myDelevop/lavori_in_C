#include<stdio.h>
#include<math.h>

main()
{
      int a,b,c;
      float x1,x2;
      
      printf("Scrivi equazione di secondo grado secondo il modello ax^2+-bx+-c=0\na=");
      scanf("%d",&a);
      printf("b=");
      scanf("%d",&b);
      printf("c=");
      scanf("%d",&c);
      //DA MODIFICARE LEQUAZIONE PER A!=0 ED ECC.
            
      x1=(-b+((float)sqrt((b*b)-4*a*c)))/(2*a);
      
      x2=(-b-((float)sqrt((b*b)-4*a*c)))/(2*a);
      
      printf("%.2f",x1);
      printf("%.2f",x2);
      
 system("PAUSE");     
}

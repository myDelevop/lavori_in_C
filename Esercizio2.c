#include <stdio.h>
#include <math.h>

main()
{
      int altezza,base,area,perimetro;
      float diagonale;
      printf("Altezza del rettangolo= "); //Altezza del  rettangolo
      scanf("%d",&altezza);
      
      printf("\nBase del rettangolo= "); //Base del rettangolo
      scanf("%d",&base);
      
      area=base*altezza;
      perimetro=2*altezza+2*base;
      diagonale=sqrt(altezza*altezza+base*base);
      
      printf("\nArea= %d",area);
      printf("\nPerimetro= %d",perimetro);
      printf("\nDiagonale= %.2f\n",diagonale);
      
      system("PAUSE");
}

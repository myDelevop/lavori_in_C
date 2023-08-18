#include <stdio.h>

main()
{
      int area,perimetro,lato;
      
      printf("Lato del quadrato= ");
      scanf("%d",&lato);
      area=lato*lato;
      perimetro=4*lato;
      printf("L'area del quadrato vale: %d\n",area);
      printf("Il perimetro del quadrato vale: %d\n",perimetro);
      system("PAUSE");
}

#include <stdio.h>


main() {
       int x,y,z;
       
       printf("x= ");
       scanf("%d",&x);
       printf("y= ");
       scanf("%d",&y);
       printf("z= ");
       scanf("%d",&z);
       
       if (x<y){
          if (x<z)
             printf("x è il minimo\n");
             else if (z<x)
             printf("z è il minimo\n");
       }
       else if (y<x){
          if (y<z)
          printf("y è il minore\n");
          else if (z<y)
          printf("z è il minimo\n");
          }
       /*else {
       printf("Due o piu' numeri sono uguali\n");
       }
       */
       system("PAUSE");
       
}

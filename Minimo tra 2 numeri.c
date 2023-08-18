#include <stdio.h>

main(){
       int x,y;
       
       printf("x= ");
       scanf("%d",&x);
       printf("y= ");
       scanf("%d", &y);
       
       if (x<y)
        printf("x è il minimo\n");
        else if (y<x)
        printf("y è il minimo\n");
       else
       printf("I numeri sono uguali\n");
       
       system("PAUSE");
       }

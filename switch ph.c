#include <stdio.h>

main()
{
 double ph;
 
 scanf("%.1f",&ph);
 switch (ph){
        case (ph<7.0 && ph>=0):
             printf("ACIDO");
             break;
        case (ph>7.0 && ph<=14):
             printf("BASICO");
             break;
        default :
                printf("Valore errato");
                break;
        }     
        system("PAUSE");
}

#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"

int main()
{
    float b,h,a,p,diag;
    
    printf("\nbase: ");
    scanf ("%f", &b);
    printf("\naltezza: ");
    scanf ("%f", &h);
    
    a=b*h;
    p=(b*2)+(h*2);
    diag=sqrt(b*b+h*h);
    
    printf("\narea: %.2f", a);
    printf("\nperimetro: %.2f", p);
    printf("\ndiagonale: %.2f\n\n", diag);
    
    system("pause");
}

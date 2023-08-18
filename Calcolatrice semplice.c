#include <stdio.h>

main()
{
 int a=0,b=0,tot=0,oper;
 printf("Scegliere l'operazione da compiere digitando il numero corrispondente:\n1 Somma\n2 Differenza\n3 Prodotto\n4 Rapporto\n\n");
 scanf("%d",&oper);
 while(oper!=0){
 switch (oper){
        case (1):
             printf("\nHai selezionato l'operatore SOMMA\n");
             printf("1° operando= ");
             scanf("%d",&a);
             printf("\n2° operando= ");
             scanf("%d",&b);
             tot=a+b;
             printf("\nIl totale della e' %d\n",tot);
             printf("\nSelezionare altra operazione o premere 0 per terminare");
             scanf("\n%d",&oper);
             break;
        case (2):
             printf("Hai selezionato l'operatore DIFFERENZA\n");
             printf("1° operando= ");
             scanf("%d",&a);
             printf("\n2° operando= ");
             scanf("%d",&b);
             tot=a-b;
             printf("\nIl totale e' %d\n",tot);
             printf("\nSelezionare altra operazione o premere 0 per terminare");
             scanf("\n%d",&oper);
             break;
        case (3):
             printf("Hai selezionato l'operatore PRODOTTO\n");
             printf("1° operando= ");
             scanf("%d",&a);
             printf("\n2° operando= ");
             scanf("%d",&b);
             tot=a*b;
             printf("\nIl totale e' %d\n",tot);
             printf("\nSelezionare altra operazione o premere 0 per terminare");
             scanf("\n%d",&oper);
             break;
        case (4):
             printf("Hai selezionato l'operatore RAPPORTO\n");
             printf("1° operando= ");
             scanf("%d",&a);
             printf("\n2° operando= ");
             scanf("%d",&b);
             tot=a/b;
             printf("\nIl totale e' %d\n",tot);
             printf("\nSelezionare altra operazione o premere 0 per terminare");
             scanf("\n%d",&oper);
             break;
        default:
                printf("\nSelezione errata, scegliere tra 1 e 4!!\n");
                scanf("%d",&oper);
                break;
}
}
system("PAUSE");
}

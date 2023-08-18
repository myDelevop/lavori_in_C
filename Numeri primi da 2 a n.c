#include<stdio.h>

main()
{
 unsigned int n,i,j,n_primo;
 
 scanf("%d",&n);
 
 for(i=2;i<=n;i++)
 {
  n_primo=1;
  j=1;
  while(j<=(i-2))
   {
    if (i%(i-j)==0)
    {
     n_primo=0;
     break;             
    }
    else
    j++;            
   }
   if(n_primo==1)
     printf("%d \n",i);                            
 }     
 
 system("PAUSE");
}

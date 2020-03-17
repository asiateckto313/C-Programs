#include <stdio.h>
int main(){
int  denivelee_h=0,denivelee_b=0;
int boucle,n,i;
scanf("%d\n",&boucle);
for(i=1;i<=boucle;i++)
   {
      scanf("%d\n",&n);
      if(n>0)
         denivelee_h+=n;
         else
         {
            n=-1* n;
            denivelee_b+=n;
            }
          }
printf("%d\n%d\n",denivelee_h,denivelee_b);
          }

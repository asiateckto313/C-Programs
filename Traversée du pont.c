#include <stdio.h>
int main(){
int nb1,nb2;char *msg1="Taxe spéciale !\n",*msg2="Taxe régulière\n";
int somme=0; int taxe_spe=36,taxe_reg;
scanf("%d\n%d\n",&nb1,&nb2);
somme=nb1 + nb2;
if(somme>=10)
   {
      printf(msg1);
      printf("%d\n",taxe_spe);
      }
      else
      {
      taxe_reg= 2* somme;
         printf(msg2);
         printf("%d\n",taxe_reg);
         }
         return 0;
         }


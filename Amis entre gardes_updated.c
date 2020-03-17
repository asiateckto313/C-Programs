#include <stdio.h>

int main()
{
   int date_Debut_Premier, date_Fin_Premier, date_Debut_Second, date_Fin_Second ;
   scanf("%d\n%d\n%d\n%d", &date_Debut_Premier,&date_Fin_Premier,&date_Debut_Second,&date_Fin_Second);

   if ( (date_Fin_Second < date_Debut_Premier) || (date_Fin_Premier < date_Debut_Second) )
   {
      printf("Pas amis");
   }
   else
   {
      printf("Amis");
   }
}

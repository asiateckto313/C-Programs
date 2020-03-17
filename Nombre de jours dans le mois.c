#include <stdio.h>
int main(){
int mois,nbre_jours;
scanf("%d",&mois);
if((mois==1 || mois==2 || mois==3 || mois== 7 || mois==8 || mois ==9))
{
   nbre_jours=30;
   printf("%d\n",nbre_jours);
}
else
    if((mois==4 || mois==5 || mois==6 || mois== 10 ))
    {
        nbre_jours=31;
        printf("%d\n",nbre_jours);
    }
    else
        if(mois==11)
        {
            nbre_jours=29;
            printf("%d\n",nbre_jours);
        }


}

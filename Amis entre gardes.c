#include <stdio.h>
int main(){
int date1_debut,date1_fin;
int date2_debut,date2_fin;
scanf("%d\n%d\n%d\n%d",&date1_debut,&date1_fin,&date2_debut,&date2_fin);
if((date2_debut>=date1_debut && date2_fin<=date1_fin) || (date1_fin>=date2_debut && date1_fin<=date2_fin) || (date1_debut>=date2_debut && date1_fin<=date2_fin) || (date2_fin>=date1_debut && date2_fin<=date1_fin))
    printf("Amis\n");
    else
        printf("Pas amis\n");
}

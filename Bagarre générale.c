#include <stdio.h>
int main(){
int superficie_ari,superficie_Eva;
int ecart;
scanf("%d\n%d",&superficie_ari,&superficie_Eva);
ecart =superficie_ari - superficie_Eva;
if(ecart<-10)
printf("La famille Evaran a un champ trop grand");
if(ecart>10)
printf("La famille Arignon a un champ trop grand");
}

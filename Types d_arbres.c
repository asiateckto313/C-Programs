#include <stdio.h>
int main(){
int metre,nbre_foliole;
scanf("%d\n%d",&metre,&nbre_foliole);
if(metre<=5 && nbre_foliole>=8)
printf("Tinuviel\n");
if(metre>=10 && nbre_foliole>=10)
printf("Calaelen\n");
if(metre<=8 && nbre_foliole<=5)
printf("Falarion\n");
if(metre>=12 && nbre_foliole<=7)
printf("Dorthonion\n");
}

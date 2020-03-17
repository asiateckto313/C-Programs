#include <stdio.h>
int main(){
int age;char *msg1="Tarif plein",*msg2="Tarif réduit";
scanf("%d",&age);
printf("\n");
if(age>=21)
printf(msg1);
else
printf(msg2);
return 0;
}

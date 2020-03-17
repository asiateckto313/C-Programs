#include <stdio.h>
int main(){
int nb1,nb2,distance;
scanf("%d\n%d",&nb1,&nb2);
printf("\n");
distance= nb1 - nb2;
if(distance<0)
distance = -1 * distance;
printf("%d\n",distance);
}

#include <stdio.h>
int main(){
int i,temp,sum;
sum = 0;
for(i=1;i<=20;i++)
{
    scanf("%d",&temp);
    sum+=temp;
}
printf("%d\n",sum);
}

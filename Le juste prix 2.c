#include <stdio.h>
int main(){
    int i,nb_marchands,x;int max=1000*1000,tamp;
    int position_marchand;
    scanf("%d",&nb_marchands);
    scanf("%d",&x);
    for(i=2;i<=nb_marchands;i++)
    {
        scanf("%d",&tamp);
        if(tamp >0 && tamp < max )
        {
            if(x< tamp)
            position_marchand=1;
            else
            position_marchand=i;
        }
    }
    printf("%d\n",position_marchand);

}

#include<stdio.h>
int main()
{
    int i,t,x,y;
    float mul,sub=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x<1000){
        mul=x*y;
        printf("%f\n",mul);
        }
        else{
            mul =x*y;
             sub =mul-(mul*0.1);
             printf("%f\n",sub);
        }
    }
}
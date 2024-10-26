#include<stdio.h>
int main()
{
    int i,t,a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        if(c>=a && d>=b)
        {
            printf("POSSIBLE\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }
}
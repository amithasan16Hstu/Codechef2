#include<stdio.h>
int main()
{
    int i,t,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            printf("NO\n");
        }
        else if(x==y)
        {
            printf("YES\n");
        }
        else if(x>y)
        {
            printf("YES\n");
        }
    }
}
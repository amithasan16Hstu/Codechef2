#include<stdio.h>
int main()
{
    int i,t,x,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        int sum=x+z*2;
        if(sum>=y)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}